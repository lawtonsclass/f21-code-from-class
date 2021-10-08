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

// root is the root of the *current subtree*
void inorder(TreeNode* root) {
  if (root == nullptr) {
    // base case: do nothing
  } else {
    // recurse left
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
  }
}

int depth(TreeNode* n) {
  if (n->parent == nullptr) {
    // base case: we're at the root--depth is 0
    return 0;
  } else {
    // we have a parent, so we can recurse
    // get the depth of our parent recursively
    int depthOfParent = depth(n->parent);
    // our original node n's depth is one more than its parent's depth
    return 1 + depthOfParent;
  }
}

int main() {
  TreeNode* root = nullptr;
  insert(root, 7);
  insert(root, 5);
  insert(root, 8);
  insert(root, 3);
  insert(root, 6);
  insert(root, 10);

  inorder(root);
  cout << endl;

  TreeNode* ten = root->right->right;
  cout << depth(ten) << endl;
  cout << depth(root) << endl;
  cout << depth(root->left) << endl;

  return 0;
}
