#include <iostream>


class Base {
public:
  Base() = default;
  Base(int x, int y) :x_(x), y_(y) {}
  virtual ~Base() {
    std::cout << "Dead Base class!" << std::endl;
  }


private:
  int x_;
  int y_;
};

class Derived : public Base {
public:
  Derived() = default;
  Derived(int z) : z_(z) {}
  Derived(int x, int y, int z) : Base(x, y), z_(z) {}
  virtual ~Derived() {
    std::cout << "Dead Derived class!" << std::endl;
  }

  int printValue() const { return z_; }


private:
  int z_;
};


int main() {
  Derived a(5);
  // a.printValue();
  return 0;
}
