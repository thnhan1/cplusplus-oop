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
  // operator overloading +
  PhanSo operator+(PhanSo const& ps) {
    PhanSo temp;
    temp.tuSo = tuSo * ps.mauSo + ps.tuSo * mauSo;
    temp.mauSo = mauSo * ps.mauSo;
    return temp;
  }

  // operator overloading cin
  friend istream& operator>>(istream& is, PhanSo& ps) {
    cout << "Nhap tu so: ";
    is >> ps.tuSo;
    cout << "Nhap mau so: ";
    is >> ps.mauSo;
    return is;
  }

  // operator overloading cout
  friend ostream& operator<<(ostream& os, PhanSo const& ps) {
    os << ps.tuSo << "/" << ps.mauSo;
    return os;
  }


  void in() {
    cout << tuSo << "/" << mauSo << endl;
  }
};


int main() {
  PhanSo ps1(1, 2), ps2(1, 3), ps3;
  ps3 = ps1 + ps2;
  ps3.in();

  PhanSo ps4, ps5;
  cin >> ps4 >> ps5;
  cout << ps4 << endl << ps5 << endl;

  system("pause");
  return 0;
}