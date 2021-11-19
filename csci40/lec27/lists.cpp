#include <iostream>
#include <list>
using namespace std;

int main() {
  list<int> l; // starts empty
  l.push_front(3);
  l.push_front(2);
  l.push_front(1);

  // so now the list holds [1, 2, 3]

  for (int x : l) {
    cout << x << " ";
  }
  cout << endl;

  // or, the manual way
  for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  // let's go backwards!
  list<int>::iterator it = l.end(); // this is not an element!
  it--; // now we're at the last element
  while (true) {
    cout << *it << " ";
    
    // break after we visit the beginning
    if (it == l.begin()) {
      break;
    }

    it--;
  }
  cout << endl;

  // this way is much cleaner!
  for (list<int>::reverse_iterator rit = l.rbegin(); rit != l.rend(); rit++) {
    cout << *rit << " ";
  }
  cout << endl;

  return 0;
}
