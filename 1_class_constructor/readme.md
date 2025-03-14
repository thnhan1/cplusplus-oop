## Class trong C++

### Class là gì?
Trong C++, class là một cấu trúc dữ liệu người dùng tự định nghĩa, cho phép kết hợp dữ liệu và các hàm thao tác trên dữ liệu đó vào một đơn vị gọi là đối tượng (object).

### Access Modifier (Phạm vi truy cập)
C++ có ba phạm vi truy cập chính:
- **public**: Thành viên có thể truy cập từ bất kỳ đâu
- **private**: Thành viên chỉ có thể truy cập từ trong class
- **protected**: Thành viên có thể truy cập từ class đó và các class kế thừa

### Constructor (Hàm khởi tạo)
Constructor là hàm đặc biệt được gọi tự động khi đối tượng được tạo ra:
- Có tên giống với tên class
- Không có kiểu trả về
- Có thể overload (nạp chồng) với nhiều tham số khác nhau
- Có thể có constructor mặc định, constructor có tham số, copy constructor

### Destructor (Hàm Hủy)
Có thể có 1 hàm hủy duy nhất, tên nó là `~TenClass();` nếu không viết thì trình biên dịch tự tạo, trừ khi muốn ghi đè nó không thì để nó tự sinh ra.

### Method (Phương thức)
Method là các hàm được định nghĩa trong class:
- Dùng để thao tác với dữ liệu của đối tượng
- Có thể là static (thuộc về class) hoặc non-static (thuộc về đối tượng)
- Có thể overload, override (trong kế thừa)
- Có thể là const method (không thay đổi dữ liệu của đối tượng)

### Ví dụ
```cpp
class SinhVien {
private:  // Dữ liệu ẩn
  string hoTen;
  int tuoi;

public:   // Interface công khai
  // Constructor mặc định
  SinhVien() {
    hoTen = "Chưa có tên";
    tuoi = 0;
  }
  
  // Constructor có tham số
  SinhVien(string ten, int t) {
    hoTen = ten;
    tuoi = t;
  }
  
  // Method
  void hienThi() const {
    cout << "Họ tên: " << hoTen << endl;
    cout << "Tuổi: " << tuoi << endl;
  }
  
  // Setter
  void setTuoi(int t) {
    tuoi = t;
  }
  
  // Getter
  string getHoTen() const {
    return hoTen;
  }
};
```

## Cách gán giá trị hoặc khai báo, khởi tạo
### Khai báo, khởi tạo và gán giá trị cho đối tượng

#### Khai báo đối tượng
```cpp
SinhVien sv;  // Sử dụng constructor mặc định
```

#### Khởi tạo với constructor
```cpp
// Sử dụng constructor có tham số
SinhVien sv1("Nguyễn Văn A", 20);

// Khởi tạo với cú pháp dấu ngoặc tròn
SinhVien sv2 = SinhVien("Trần Thị B", 19);
```

#### Khởi tạo một mảng đối tượng
```cpp
// Mảng 3 sinh viên sử dụng constructor mặc định
SinhVien dsSinhVien[3];

// Mảng với khởi tạo từng phần tử
SinhVien danhSach[2] = {
  SinhVien("Lê Văn C", 21),
  SinhVien("Phạm Thị D", 20)
};
```

#### Khởi tạo đối tượng con trỏ
```cpp
// Cấp phát động một đối tượng
SinhVien* pSv = new SinhVien("Hoàng Văn E", 22);

// Sử dụng đối tượng
pSv->hienThi();

// Giải phóng bộ nhớ khi không dùng nữa
delete pSv;
```