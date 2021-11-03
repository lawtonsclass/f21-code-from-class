#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

void throwInt() {
  throw 42; // this throws an exception with the value 42
}

void throwString() {
  throw string("Uh oh"); // this throws an exception with the value "Uh oh"
}

void throwRuntimeError() {
  throw runtime_error("Uh oh (runtime_error)"); // this throws an exception with the value "Uh oh"
}

void doStuff() {
  try {
    throwInt();
    throwString();
    throwRuntimeError();
  } catch (int& i) { // C++ prefers the closest catch block when it sees an exception!
    cout << "caught an int inside doStuff\n";
  } catch (runtime_error& e) {
    cout << "caught a runtime_error inside doStuff\n";
  }
}

int main() {
  try {
    doStuff();
  } catch (int& i) {
    cout << "caught an int\n";
    cout << i << endl;
  } catch (runtime_error& e) {
    cout << "caught a runtime_error\n";
    cout << e.what() << endl;
  } catch (string& s) {
    cout << "caught a string\n";
    cout << s << endl;
  }

  return 0;
}
