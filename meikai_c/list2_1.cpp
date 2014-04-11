#include <iostream>

using namespace std;

int main(){
  int a, b;
  int min, max;

  cout << "aとb:";
  cin >> a >> b;

  if(a < b) {
    min = a, max = b;
  } else {
    min = b, max = a;
  }

  cout << "最大値は: " << max << " 最小値は: " << min << " です。\n";
}
