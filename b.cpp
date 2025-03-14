#include <iostream>

using namespace std;

// euclid algorithm
int ucln(int a, int b) {
  if (a == b) return a;

  if (a > b) return ucln(a - b, b);

  return ucln(a, b - a);
}

class PhanSo {
public:
  int tuSo;
  int mauSo;

  PhanSo() {
    this->tuSo = 0;
    this->mauSo = 1;
  }

  PhanSo(int tuSo, int mauSo) {
    this->tuSo = tuSo;
    this->mauSo = mauSo;
  }

  void inPhanSo() {
    cout << this->tuSo << "/" << this->mauSo << endl;
  }

  PhanSo cong(PhanSo ps) {
    PhanSo kq;
    kq.tuSo = this->tuSo * ps.mauSo + this->mauSo * ps.tuSo;
    kq.mauSo = this->mauSo * ps.mauSo;
    return kq;
  }

  // overload add operator
  PhanSo operator+(PhanSo ps) {
    PhanSo kq;
    kq.tuSo = this->tuSo * ps.mauSo + this->mauSo * ps.tuSo;
    kq.mauSo = this->mauSo * ps.mauSo;
    return kq;
  }

  PhanSo operator>(PhanSo ps) {
    PhanSo kq;
    kq.tuSo = this->tuSo * ps.mauSo + this->mauSo * ps.tuSo;
    kq.mauSo = this->mauSo * ps.mauSo;
    return kq;
  }

  PhanSo operator-(PhanSo ps) {
    PhanSo kq;
    kq.tuSo = this->tuSo * ps.mauSo - this->mauSo * ps.tuSo;
    kq.mauSo = this->mauSo * ps.mauSo;
    return kq;
  }

  PhanSo rutGon() {
    int maxUc = ucln(this->tuSo, this->mauSo);

    PhanSo kq;
    kq.tuSo = this->tuSo / maxUc;
    kq.mauSo = this->mauSo / maxUc;
    return kq;
  }

};


void rutGonPhanSo(int tu, int mau) {
  int maxUc = ucln(tu, mau);
  cout << tu / maxUc << "/" << mau / maxUc << endl;
}



int main() {

  PhanSo pt1(3, 30); // .5
  PhanSo pt2(4, 2); // 2 
  // pt3 =9/10

  // PhanSo pt3 = pt1.cong(pt2);
  PhanSo pt3 = pt1 + pt2;

  // Operator

  // pt3.inPhanSo();

  PhanSo pt4 = (pt1 > pt2);
  // pt4.inPhanSo();

  PhanSo pt5 = pt1.rutGon();
  pt5.inPhanSo();
  cout << endl;

  rutGonPhanSo(9 * 5, 9 * 3);
  return 0;
}