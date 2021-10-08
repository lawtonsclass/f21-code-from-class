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

// it's possible that the root of the tree will change after an
// insert, so we need to pass the root by reference
void insert(TreeNode*& root, int key) {
  TreeNode* newNode = new TreeNode;
  newNode->data = key;
  newNode->left = nullptr;
  newNode->right = nullptr;
  newNode->parent = nullptr;

  if (root == nullptr) { // empty tree case
    // this is the new root
    root = newNode;
    return;
  }
  
  // otherwise this is a non-root node, and we need to figure 
  // out where it's going to go

  // search!
  TreeNode* n = root; // start our node pointer at the root

  while (n != nullptr) {
    // look at n->data, and see if we need to go left or right
    if (key < n->data) {
      // go left if we can
      if (n->left != nullptr) {
        n = n->left;
      } else {
        // we found the place to insert!!!
        n->left = newNode;
        newNode->parent = n;
        return;
      }
    } else if (key > n->data) {
      // go right if we can
      if (n->right != nullptr) {
        n = n->right;
      } else {
        n->right = newNode;
        newNode->parent = n;
        return;
      }
    } else {
      // found it--it's already in the tree
      return;
    }
  }


}

int main() {
  TreeNode* root = nullptr;
  insert(root, 7);
  insert(root, 3);
  insert(root, 42);
  insert(root, 4);
  insert(root, 5);

  cout << root->data << endl;
  cout << root->right->data << endl;
  cout << root->left->right->right->data << endl;

  return 0;
}
