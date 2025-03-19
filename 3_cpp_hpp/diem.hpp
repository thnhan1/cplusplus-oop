#ifndef DIEM_HPP
#define DIEM_HPP
#include <iostream>

class DIEM {
private:
  float Diemtoan;
  float Diemly;
  float Diemhoa;

public:
  DIEM();
  void nhap();
  void xuat();
  float tinhTongDiem();
};

#endif
