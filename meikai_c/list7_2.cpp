#include <iostream>

using namespace std;

int main(void) {
  int* x = new int;
  cout << "整数:";
  cin >> *x;
  cout << "*x = " << *x << '\n';
  delete x;
}
