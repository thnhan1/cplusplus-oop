#include "person.hpp"
#include <cstring>

PERSON::PERSON() {
  strcpy(Hoten, "");
  strcpy(Ngaysinh, "");
  strcpy(Quequan, "");
}

void PERSON::nhap() {
  std::cout << "Nhap ho ten: ";
  std::cin.getline(Hoten, 50);
  std::cout << "Nhap ngay sinh: ";
  std::cin.getline(Ngaysinh, 12);
  std::cout << "Nhap que quan: ";
  std::cin.getline(Quequan, 100);
}

void PERSON::xuat() {
  std::cout << "Ho ten: " << Hoten << std::endl;
  std::cout << "Ngay sinh: " << Ngaysinh << std::endl;
  std::cout << "Que quan: " << Quequan << std::endl;
}
