#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.
*/

using namespace std;

    struct Node {
        int data;
        struct Node* next;
    };

bool has_cycle(Node* head) {
    int it;
    Node* slowptr;
    Node* fastptr;
    if (head == NULL) return false;
    slowptr = head;
    fastptr = head;
    for (it = 0; it < 100; it++) {
        if (fastptr->next == NULL) return false;
        if (((it % 2) == 1)) slowptr = slowptr->next;
        fastptr = fastptr->next;
        cout << "slowptr = " << slowptr->data << " fastptr = " << fastptr->data << "\n";
        if (slowptr == fastptr) {
            cout << "fast caught slow\n";
            return true;
        }
    }
    return true;
    
}

void insert(Node* head, int data) {
    Node* newnode = new Node;
    Node* ptr;
    newnode->data = data;
    newnode->next = NULL;
    ptr = head;
    if (head == NULL) {
        head = newnode;
    } else {
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = newnode;
        if (newnode->data == 5) {
            cout << "linking\n";
            newnode->next = head;
        }
    }
    return;
}

void print_list(Node* head) {
    Node* ptr;
    ptr = head;
    if (head == NULL) return;
    while (ptr != NULL) {
        cout << "ptr = " << ptr->data << "\n";
        ptr = ptr->next;
    }
    return;
}


int main(){
    Node* head = new Node;
    Node* one = new Node;
    Node* two = new Node;
    Node* three = new Node;
    Node* four = new Node;
    Node* five = new Node;
    Node* six = new Node;

    head->data = 0;
    one->data = 1;
    two->data = 2;
    three->data = 3;
    four->data = 4;
    five->data = 5;
    six->data = 6;
    
    head->next = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    six->next = two;

    /*
    head->next = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    */

    
    //print_list(head);   
    if (has_cycle(head)){
        cout << "There's a cycle\n";
    } else {
        cout << "No cycle\n";
    }
    return 0;
    
}
