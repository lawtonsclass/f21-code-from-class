#include <iostream>
#include <string>
using namespace std;

class Calculator {
  public:
    Calculator();

    void pressDigit(int d);
    void pressPlus();
    void pressMinus();
    void pressTimes();
    void pressDivide();
    int pressEnter();

  private:
    int operand1;
    int operand2;
    char operation;
    string state;
};

Calculator::Calculator() {
  operand1 = operand2 = 0;
  state = "first_number"; // start out waiting for the first operand
}

void Calculator::pressDigit(int d) {
  if (state == "first_number") {
    operand1 = operand1 * 10 + d;
  } else {
    operand2 = operand2 * 10 + d;
  }
}

void Calculator::pressPlus() {
  if (state == "first_number") {
    operation = '+';
    state = "second_number";
  }
}

void Calculator::pressMinus() {
  if (state == "first_number") {
    operation = '-';
    state = "second_number";
  }
}

void Calculator::pressTimes() {
  if (state == "first_number") {
    operation = '*';
    state = "second_number";
  }
}

void Calculator::pressDivide() {
  if (state == "first_number") {
    operation = '/';
    state = "second_number";
  }
}

int Calculator::pressEnter() {
  if (state == "second_number") {
    // perform the operation
    int res;
    if (operation == '+') {
      res = operand1 + operand2;
    } else if (operation == '-') {
      res = operand1 - operand2;
    } else if (operation == '*') {
      res = operand1 * operand2;
    } else { // /
      res = operand1 / operand2;
    }
    // reset our state/operands
    operand1 = operand2 = 0;
    state = "first_number";
    // return the answer
    return res;
  }

  return -1; // error value
}

void assertTrue(bool b, string description) {
  if (b) {
    cout << "PASSED: " << description << endl;
  } else {
    cout << "FAILED: " << description << endl;
  }
}

int main() {
  Calculator c;

  // 23 + 45
  c.pressDigit(2);
  c.pressDigit(3);
  c.pressPlus();
  c.pressDigit(4);
  c.pressDigit(5);
  assertTrue(c.pressEnter() == 68, "23 + 45");
  
  // 42 * 111
  c.pressDigit(4);
  c.pressDigit(2);
  c.pressTimes();
  c.pressDigit(1);
  c.pressDigit(1);
  c.pressDigit(1);
  assertTrue(c.pressEnter() == 4662, "42 * 111");

  return 0;
}
