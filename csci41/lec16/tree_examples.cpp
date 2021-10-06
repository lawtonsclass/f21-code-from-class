#include <iostream>
using namespace std;

struct TreeNode {
  int data;
  TreeNode* left;
  TreeNode* right;
  TreeNode* parent;
};

int main() {
  TreeNode* fourtyTwo = new TreeNode; 
  TreeNode* three = new TreeNode; 
  TreeNode* four = new TreeNode; 
  TreeNode* seven = new TreeNode; 

  fourtyTwo->data = 42;
  three->data = 3;
  four->data = 4;
  seven->data = 7;

  fourtyTwo->left = three;
  fourtyTwo->right = four;
  three->left = nullptr;
  three->right = nullptr;
  four->left = seven;
  four->right = nullptr;
  seven->left = nullptr;
  seven->right = nullptr;
  
  seven->parent = four;
  four->parent = fourtyTwo;
  three->parent = fourtyTwo;
  fourtyTwo->parent = nullptr; // because it's the root!

  TreeNode* root = fourtyTwo;

  cout << root->data << endl; // 42
  cout << root->left->data << endl; // 3
  cout << root->right->data << endl; // 4

  return 0;
}
