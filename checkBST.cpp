/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  
The Node struct is defined as follows:
*/
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdio>
#include <vector>

//using namespace std;

std::vector<int> order;

   struct Node {
      int data;
      Node* left;
      Node* right;
   };

   bool check_bst(Node* node) {
       bool result;
       if (node == NULL) return true;
       if (node->left == NULL) return true;
       if ( !check_bst(node->left )) return false;
       if (node->data < node->left->data) {
           std::cout << "left false\n";
           return false;
       } 

       std::cout << "data = " << node->data << "\n";
       if (node->right == NULL) return true;

       if ( !check_bst(node->right )) return false;
       if (node->data > node->right->data) {
           std::cout << "right false\n";
           return false;
       }           

       return true;
   } 

   int print_BST(Node* root) {
       if(root == NULL) return 0;
       print_BST(root->left);
       std::cout << "Node = " << root->data << "\n";
       order.push_back(root->data);
       print_BST(root->right);

       return 0;
   }


   bool checkBST(Node* root) {
       int iter;
       if ( !check_bst(root)) return false;
       std::cout << "still here baby!\n";
       print_BST(root);
       for (iter = 0; iter < order.size() - 1; iter++) {
           std::cout << order[iter] << ' ';
           if (order[iter] > order[iter+1]) return false;
       }
       return true;
   }


int main() {
     bool result;
     struct Node *root = new Node;
     struct Node *one = new Node;
     struct Node *two = new Node;
     struct Node *three = new Node;
     struct Node *five = new Node;
     struct Node *six = new Node;
     struct Node *seven = new Node;

     root->data = 4;
     one->data = 1;
     two->data = 2;
     three->data = 3;
     five->data = 5;
     six->data = 6;
     seven->data = 7;

     root->left = two;
     root->right = six;
     two->left = one;
     two->right = three;
     six->left = five;
     six->right = seven;
     one->left = NULL;
     one->right = NULL;
     three->left = NULL;
     three->right = NULL;
     five->left = NULL;
     five->right = NULL;
     seven->left = NULL;
     seven->right = NULL;

     std::cout << "root data = " << root->data << "\n";
     std::cout << "root left data = " << root->left->left->data << "\n";
     std::cout << "Blah!\n";
     //print_BST(root);
     result = checkBST(root);
     printf("result = %s\n", result ? "true":"false");
     if (result) {
         std::cout << "Tru\n";
     } else {
         std::cout << "Nah breh\n";
     }
     return 0;
}


/*
   bool checkBST(Node* root) {
       bool result = true;
       if (root->left != NULL) {
           std::cout << "root = " << root->data << " root->left = " << root->left->data << " \n";
           result = checkBST(root->left);
               //printf("result = %s\n", result ? "true":"false");
           if ( result == false) return result;
           if (root->left->data > root->data) {
               std::cout << "shit's false\n";
               return false;
           } else {
               result = true;
           }
       }
       if (root->right != NULL) {
           result = checkBST(root->right);
           if (result == false) return result;
           std::cout << "root = " << root->data << " root->right = " << root->right->data << " \n";
           if (root->right->data < root->data) {
               std::cout << "shit's false\n";
               return false;
           } else {
               result = true;
           }
       }
       return result;
   }
*/

