#include <cmath>
#include <string>
#include <iostream>

class Car {
  std::string name;
  int width, length, height;
  double xp, yp;
  double fuel_level;

 public:
  //コンストラクタ
  Car(std::string n, int w, int l, int h, double f){
    name = n; width = w; length = l; height = h; fuel_level = f;
    xp = yp = 0.0;
  }
  double x() { return xp; }
  double y() { return yp; }

  double fuel() { return fuel_level; }

  void print_spec() {
    std::cout << "名前：" << name << "\n";
    std::cout << "車幅：" << width << "mm\n";
    std::cout << "車長：" << length << "mm\n";
    std::cout << "車高：" << height << "mm\n";
  }

  bool move(double dx, double dy) {
    double dist = sqrt(dx * dx + dy * dy);

    if (dist > fuel_level) {
      return false;
    }
    else {
      fuel_level -= dist;
      xp += dx;
      yp += dy;
      return true;
    }
  }
};
