#include <iostream>
using namespace std;

struct TreeNode {
  int data;
  TreeNode* left;
  TreeNode* right;
  TreeNode* parent;
};

bool search(TreeNode* root, int key) {
  TreeNode* n = root; // start our node pointer at the root

  while (n != nullptr) {
    // look at n->data, and see if we need to go left or right
    if (key < n->data) {
      // go left
      n = n->left;
    } else if (key > n->data) {
      // go right
      n = n->right;
    } else {
      // found it
      return true;
    }
  }

  // if we get here, n = nullptr, so we didn't find the key :(
  return false;
}

int main() {
  TreeNode* five = new TreeNode;
  TreeNode* three = new TreeNode;
  TreeNode* ten = new TreeNode;
  TreeNode* one = new TreeNode;
  TreeNode* four = new TreeNode;
  TreeNode* fourtyTwo = new TreeNode;

  five->data = 5;
  three->data = 3;
  ten->data = 10;
  one->data = 1;
  four->data = 4;
  fourtyTwo->data = 42;

  five->left = three;
  five->right = ten;
  three->left = one;
  three->right = four;
  ten->left = nullptr;
  ten->right = fourtyTwo;
  one->left = one->right = nullptr;
  four->left = four->right = nullptr;
  fourtyTwo->left = fourtyTwo->right = nullptr;
  
  TreeNode* root = five;

  cout << search(root, 42) << endl;
  cout << search(root, 7) << endl;


  return 0;
}
