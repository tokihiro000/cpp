#include <iostream>

using namespace std;

void alerts(int n = 3) {
  while(n-- > 0) {
    cout << "*";
  }
  cout << '\n';
}

int main(void) {
  alerts();
  cout << "警報！\n";

  alerts(5);
  cout << "再び警報！\n";
}
