   bool checkBST(Node* root) {
       bool result = true;
       if (root->left != NULL) {
           //cout << "root = " << root->data << " root->left = " << root->left->data << " \n";
           if (root->left->data > root->data) {
               //cout << "shit's false\n";
               //result = false;
               return false;
           } else {
               //result = true;
               result = checkBST(root->left);
               //printf("result = %s\n", result ? "true":"false");
               if ( result == false) return result;
           }
       }
       if (root->right != NULL) {
           //cout << "root = " << root->data << " root->right = " << root->right->data << " \n";
           if (root->right->data < root->data) {
               //cout << "shit's false\n";
               return false;
           } else {
               //result = true;
               result = checkBST(root->right);
               if (result == false) return result;
           }
       }
       return result;
   }
