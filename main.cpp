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

  Student() {
    this->name = "vi du";
    this->id = "";
    this->diaChi = "";
    this->gpa = 0;
  }

  Student(string name, string id, string diaChi, double gpa, string password) {
    this->name = name;
    this->id = id;
    this->diaChi = diaChi;
    this->gpa = gpa;
    this->password = password;
  }

  // ham tao loai 3 la copy constructor
  Student(Student& student) {
    this->name = student.name;
    this->id = student.id;
    this->diaChi = student.diaChi;
    this->gpa = student.gpa;
    this->password = student.password;
  }

  string getPassword() {
    return this->password;
  }

  void setPassowrd(string password) {
    this->password = password;
  }

  /* kieu_tra_ve ten_ham() {
      // return something
  }
  */

  void showInfo();
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
  Student sv1 = Student("Nguyen Van A", "123", "Ha Noi", 3.5, "123456");
  Student sv2 = sv1;

  // sv2.showInfo();
  sv2.name = "ABC";

  sv1.showInfo();


  return 0;
}