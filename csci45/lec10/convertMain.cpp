#include <iostream>
using namespace std;

extern "C" void convert_to_all_caps(char* str);

int main() {
  char str1[] = "hello, world!\n";

  convert_to_all_caps(str1);

  cout << str1;

  return 0;
}
