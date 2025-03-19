#include "hocsinh.hpp"
#include <iostream>
#include <cstring>

HOCSINH::HOCSINH() :TongDiem(0) {
  strcpy(Lop, "");
}

void HOCSINH::nhap() {
  PERSON::nhap(); // ke thua tu lop person
  DIEM::nhap(); // ke thua tu lop diem
  std::cout << "Nhap lop: ";
  std::cin.getline(Lop, 30);
  TongDiem = DIEM::tinhTongDiem();
}

void HOCSINH::xuat() {
  PERSON::xuat(); // ke thua tu lop person
  DIEM::xuat(); // ke thua tu lop diem
  std::cout << "Lop: " << Lop << std::endl;
  std::cout << "Tong diem: " << TongDiem << std::endl;
}
