// Class student version 2. 
// Dùng dấu () để khởi tạo giá trị mặc định cho thuộc tính
// Dùng hàm tạo để khởi tạo giá trị cho thuộc tính

#include <iostream>

using namespace std;

class Student {
private:
  string password;

public: // properties
  string name;
  string id;
  string diaChi;
  double gpa;

  Student() : name("vi du"), id(""), diaChi(""), gpa(0) {
  }

  Student(string name, string id, string diaChi, double gpa, string password) :
    name(name),
    id(id),
    diaChi(diaChi),
    gpa(gpa),
    password(password) {
  }

  // ham tao loai 3 la copy constructor
  Student(Student& student) :
    name(student.name),
    id(student.id),
    diaChi(student.diaChi),
    gpa(student.gpa),
    password(student.password) {
  }

  string getPassword() {
    return this->password;
  }

  void setPassowrd(string password) {
    this->password = password;
  }

  void showInfo();

  // Destructor: Ham huy 
  ~Student() {
    cout << "Da huy doi tuong" << endl;
  }
};

void Student::showInfo() {
  cout << "Name: " << this->name << endl;
  cout << "ID: " << this->id << endl;
  cout << "Dia chi: " << this->diaChi << endl;
  cout << "GPA: " << this->gpa << endl;
}

int main() {
  Student sv1("Nguyen Van A", "123", "Ha Noi", 3.5, "123456");
  Student sv2(sv1);

  // sv2.showInfo();
  sv2.name = "ABC";

  sv1.showInfo();

  return 0;
}
