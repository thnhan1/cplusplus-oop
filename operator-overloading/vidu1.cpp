#include <iostream>

using namespace std;

class PhanSo {
private:
  int tuSo, mauSo;
public:
  PhanSo(int tuSo = 0, int mauSo = 1) {
    this->tuSo = tuSo;
    this->mauSo = mauSo;
  }
  // Ghi de toan tu +
  PhanSo operator+(PhanSo const& ps) {
    PhanSo temp;
    temp.tuSo = tuSo * ps.mauSo + ps.tuSo * mauSo;
    temp.mauSo = mauSo * ps.mauSo;
    return temp;
  }
  void in() {
    cout << tuSo << "/" << mauSo << endl;
  }
};

int main() {

  PhanSo ps1(1, 2), ps2(1, 3), ps3;
  ps3 = ps1 + ps2;
  ps3.in();
  return 0;
}