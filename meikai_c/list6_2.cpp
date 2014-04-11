#include <iostream>

using namespace std;

void swap(int& x, int& y) {
  int t = x;
  x = y;
  y = t;
}

int main(void) {
  int a, b;

  cout << "a:"; cin >> a;
  cout << "b:"; cin >> b;

  swap(a, b);

  cout << "変数aとbの値を交換しました。\n";
  cout << "変数aの値は" << a << "です。\n";
  cout << "変数bの値は" << b << "です。\n";

}
