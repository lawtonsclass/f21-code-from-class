#include <iostream>
#include <vector> // for the vector type
using namespace std;

int main() {
  // int arr[3] = {1, 2, 3}; 

  vector<int> v = {1, 2, 3}; // "v is a vector of ints"
  cout << v.at(2) << endl;
  cout << v.size() << endl;

  cout << endl;

  vector<int> v2; // initially empty
  v2.push_back(1); // now v2 holds {1}
  cout << v2.size() << endl;
  v2.push_back(2); // now v2 holds {1, 2}
  cout << v2.size() << endl;
  v2.push_back(3); // now v2 holds {1, 2, 3}
  cout << v2.size() << endl;
  cout << v2.at(2) << endl;

  cout << endl;

  vector<int> v3; // start out empty
  while (true) {
    int nextNum;
    cout << "Enter the next number (-1 to quit): ";
    cin >> nextNum;

    if (nextNum == -1) {
      break;
    }

    // if we're still here, add nextNum into the vector v3
    v3.push_back(nextNum);
  }
  cout << v3.size() << endl;
  cout << endl;

  // print out every elem in v3
  for (int i = 0; i < v3.size(); i++) {
    cout << v3.at(i) << " ";
  }
  cout << endl;

  // range-based for loop way!
  for (int elem : v3) {
    cout << elem << " ";
  }
  cout << endl;

  return 0;
}
