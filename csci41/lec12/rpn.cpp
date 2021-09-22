#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> operandStack;

  while (true) {
    cout << "Enter n to type a number, o for an operator, or q to quit: ";
    char c;
    cin >> c;

    if (c == 'n') {
      int n; 
      cout << "Enter the number: ";
      cin >> n;

      operandStack.push(n);
    } else if (c == 'o') {
      char o;
      cout << "Enter the operator: ";
      cin >> o;

      // get the two operands off the stack
      int n2 = operandStack.top();
      operandStack.pop();
      int n1 = operandStack.top();
      operandStack.pop();

      if (o == '+') {
        operandStack.push(n1 + n2);
      } else if (o == '-') {
        operandStack.push(n1 - n2);
      } else if (o == '*') {
        operandStack.push(n1 * n2);
      } else { // (division)
        operandStack.push(n1 / n2);
      }   
    } else {
      break;
    }
  } 

  // display the answer because the user typed q
  // answer is on the top of the stack
  cout << "Result: " << operandStack.top() << endl;
  // optionally, you could throw an error if the operandStack has more
  // than one thing in it

  return 0;
}
