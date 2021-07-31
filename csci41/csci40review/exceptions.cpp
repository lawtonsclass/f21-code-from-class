#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

void orderPizza(string kind) {
  if (kind != "pineapple") {
    cout << "Here is your " << kind << " pizza!\n";
  } else {
    // throw string("how dare you"); // you can throw any type in C++
    throw runtime_error("how dare you");
  }
}

int main() {
  // this will "throw" an exception
  // if we don't want the exception to stop the program, we need to
  // "catch" it
  try {
    // inside of the try, you put code that might throw an exception
    orderPizza("pineapple");
    orderPizza("pepperoni");
  } catch (string& s) {
    // usually you catch by reference
    // we only ever get here if an exception gets thrown
    cout << "uh oh! we got a string: " << s << endl;
  } catch (runtime_error& r) {
    cout << "uh oh! we got a runtime_error: " << r.what() << endl;
  }

  return 0;
}
