#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main() {
  char str[] = {'h', 'e', 'l', 'l', 'o', '\0'};
  char str2[] = "hello"; // equivalent to the above
  cout << str << endl;
  cout << str2 << endl;

  char str3[] = "42";
  int n = atoi(str3);
  cout << n + 1 << endl;

  cout << strlen(str2) << endl;
  cout << endl;

  char str4[] = "abc";
  char str5[] = "bcd";
  cout << strcmp(str4, str5) << endl;
  cout << strcmp(str5, str4) << endl;
  cout << strcmp(str5, str5) << endl;

  return 0;
}
