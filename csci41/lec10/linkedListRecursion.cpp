#include <iostream>
using namespace std;

// Nodes make up the Linked List data structure
struct Node {
  int data;    // this linked list holds int data
  Node* next;  // the address of the next Node in the list
};

void printInOrder(Node* n) {
  if (n == nullptr) {
    // do nothing
  } else {
    // recursive case--non-empty list
    cout << n->data << endl; // print our own data first
    printInOrder(n->next); // recursively print the rest of the list
  }
}

void printReverse(Node* n) {
  if (n == nullptr) {
    // do nothing
  } else {
    // recursive case--non-empty list
    printReverse(n->next); // recursively print the rest of the list in reverse
    cout << n->data << endl; // print our own data last
  }
}

// search the list starting with the Node n for val
bool search(Node* n, int val) {
  if (n == nullptr) {
    // base case: list is empty
    return false;
  } else {
    // recursive case: list is non-empty
    // either val is in the rest of the list, or it's in the first
    // Node
    bool wasItInTheRestOfTheList = search(n->next, val);
    bool wasItInTheFirstNode = n->data == val;
    return wasItInTheFirstNode || wasItInTheRestOfTheList;
  }
}

int main() {
  // [1, 2, 3] using Nodes
  Node* one = new Node;
  Node* two = new Node;
  Node* three = new Node;
  (*one).data = 1;
  one->next = two;
  two->data = 2;
  two->next = three;
  three->data = 3;
  three->next = nullptr;  // end of the list

  Node* first = one;
  Node* last = three;

  printInOrder(first);

  cout << endl;

  printReverse(first);

  cout << endl;
  cout << search(first, 1) << endl;
  cout << search(first, 2) << endl;
  cout << search(first, 3) << endl;
  cout << search(first, 4) << endl;

  return 0;
}
