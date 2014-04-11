#include <iostream>

using namespace std;

int main(void) {
  int asize;
  cout << "要素数30000のdouble型配列を繰り返し生成します。\n";

  while(true) {
    try {
      double *a = new double[30000];
    } catch (bad_alloc) {
      cout << "配列の生成に失敗しましたのでプログラムを中断します。\n";
      return 1;
    }
  }
}
