#ifndef HOCSINH_HPP
#define HOCSINH_HPP

#include "person.hpp"
#include "diem.hpp"

class HOCSINH : public PERSON, public DIEM {
  private:
  char Lop[30];
  float TongDiem;

  public:
  HOCSINH(); // constructor
  void nhap();
  void xuat();
};

#endif
