#include "diem.hpp"

// constructor mac dinh 
/* cach 1

DIEM::DIEM() {
  Diemtoan = 0;
  Diemly = 0;
  Diemhoa = 0;
}
*/

// cach 2
DIEM::DIEM() : Diemtoan(0), Diemly(0), Diemhoa(0) {}

void DIEM::nhap() {
  std::cout << "Nhap diem toan: ";
  std::cin >> Diemtoan;
  std::cout << "Nhap diem ly: ";
  std::cin >> Diemly;
  std::cout << "Nhap diem hoa: ";
  std::cin >> Diemhoa;
  std::cin.ignore(); // xoa bo nho dem
}

void DIEM::xuat() {
  std::cout << "Diem toan: " << Diemtoan << std::endl;
  std::cout << "Diem ly: " << Diemly << std::endl;
  std::cout << "Diem hoa: " << Diemhoa << std::endl;
}

float DIEM::tinhTongDiem() {
  return Diemtoan + Diemly + Diemhoa;
}

