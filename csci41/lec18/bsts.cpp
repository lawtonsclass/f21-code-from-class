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

// returns the TreeNode* that is the successor of the TreeNode* n
// (nullptr if the successor doesn't exist)
TreeNode* successor(TreeNode* n) {
  if (n->right != nullptr) {
    // logical case--go right and then left forever
    n = n->right;
    while (n->left != nullptr) {
      n = n->left;
    }
    // when we get here, n->left == nullptr, so we've found the
    // successor node
    return n;
  } else {
    // if the successor exists, it's one of our parents. Go up!
    int originalKey = n->data;
    n = n->parent;
    while (n != nullptr && n->data < originalKey) {
      n = n->parent;
    }
    // once we get here, either n is nullptr, or we found a
    // key that's larger!
    if (n == nullptr) {
      // we didn't find it :(
      return nullptr;
    } else {
      // we found a successor! :)
      return n;
    }
  }
}

int main() {
  TreeNode* root = nullptr;
  insert(root, 5);
  insert(root, 2);
  insert(root, 7);
  insert(root, 1);
  insert(root, 4);
  insert(root, 3);

  cout << successor(root->left->right)->data << endl; // (succ of 4 node)
  cout << successor(root->left)->data << endl; // (succ of 2 node)
  cout << successor(root->right) << endl; // (succ of 7 node--doesn't exist!)

  return 0;
}
