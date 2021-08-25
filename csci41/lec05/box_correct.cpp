#include <iostream>
using namespace std;

class Box {
  public:
    Box();
    int getVal() const;
    void setVal(const int& newVal);

    // destructor
    ~Box();
    // copy constructor
    Box(const Box& other);
    // copy assignment operator
    Box& operator=(const Box& other);
  private:
    int* val; // points to the heap now!
};

Box::Box() { 
  val = new int(0); // val points to a new int on the heap that holds 0
  // *val = 0;
}

int Box::getVal() const {
  return *val;
}

void Box::setVal(const int& newVal) {
  *val = newVal;
}

Box::~Box() {
  cout << "Box destructor for Box with val = " << val << endl;
  // the default destructor is empty!
  
  // we need to delete val
  delete val;
}

// copy construct the member vars!
Box::Box(const Box& other) {
  cout << "Box copy constructor copying a Box with val = " << other.val << endl;
  val = new int(*other.val); // new box on the heap for this val!
}

Box& Box::operator=(const Box& other) {
  cout << "Box copy assignment copying a Box with val = " << other.val << endl;

  // self assignment check
  if (this == &other) {
    return *this; // do nothing
  }

  // val already points to a place in the heap! Let's delete it and
  // start over.
  delete val;
  val = new int(*other.val); // new box on the heap for this val!

  // returns a reference to ourselves
  // this is a Box* -- a pointer to ourselves
  return *this;
}

// b is passed as a copy, using the copy constructor!!!
int valPlus1(Box c) {
  return c.getVal() + 1;
}

int main() {
  Box b1;
  b1.setVal(42);
  Box b2(b1);
  b2.setVal(43);
  Box b3;
  b3 = b2;
  b3.setVal(44);
 
  cout << b1.getVal() << " " << b2.getVal() << " " << b3.getVal() << endl;

  // destructors for all the Boxes get called right before they get
  // reclaimed
  return 0;
}
