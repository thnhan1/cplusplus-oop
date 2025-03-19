#ifndef PERSON_H
#define PERSON_H
#include <iostream>

class PERSON {
private:
  char Hoten[50];
  char Ngaysinh[12];
  char Quequan[100];

public:
  PERSON();
  void nhap();
  void xuat();
};

#endif