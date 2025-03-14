# Overloading (nạp chồng)

## Ví dụ 1: Overloading cơ bản

Có 3 phiên bản của hàm print, gọi với tham số kiểu nào thì tương ứng hàm có tham số kiểu đó được gọi.

Nói dễ hiểu tức là các hàm cùng tên nhưng khác về số lượng hoặc kiểu của tham số.

_Mục đích: Để tăng tính đọc hiểu, tái sử dụng 1 cái tên cho nhiểu tường hợp thay vì viết print1, print2. Nhưng nếu bạn viết `print_so_nguyen`, `print_so_thucthuc` nó không sai nhưng nó cũng không đẹp mắt và thuận tiện để dùng vì lập trình càng đơn giản càng tốt._

```c++
#include <iostream>
using namespace std;

void print(int x) {
    cout << "Integer: " << x << endl;
}

void print(double x) {
    cout << "Double: " << x << endl;
}

void print(const char* x) {
    cout << "String: " << x << endl;
}

int main() {
    print(10);          // Calls the integer version
    print(3.14);        // Calls the double version
    print("Hello");     // Calls the string version
    return 0;
}
```

## Ví dụ 2: Operator Overloading (Nạp chồng toán tử)

Có thể **định nghĩa lại** cách các toán tử như `+`, `-`, `>>`, vv hoặc đọc với các kiểu dữ liệu do người dùng định nghĩa. (ví dụ đối tượng).

Hiểu đơn giản là thay vì dùng cách gọi hàm để thao tác ví dụ là so sánh 2 đối tượng là `PhanSo` là `ps1.soSanh(ps2)` thì ta có thể định nghĩa lại toán tử `>` để so sánh `ps1` và `ps2`. Và sẽ thành `bool ketQua = ps1 > ps2;`.

_Mục đích: Để cho nó đẹp và tăng tính đọc hiểu code._

### Danh sách toán tử có thể nạp chồng.
Muốn biết cách viết của loại nào thì hỏi AI cho nhanh nha.

#### 1. Toán tử số học:

+, -, *, /, %

#### 2. Toán tử quan hệ:

==, !=, <, >, <=, >=

### 3. Toán tử logic:

&&, ||, !

#### 4. Toán tử gán:

=, +=, -=, *=, /=, %=, >>=, <<=, &=, |=, ^=

#### 5. Toán tử bitwise:

&, |, ^, ~, <<, >>

#### 6. Toán tử tăng giảm:

#### 7. ++, -- (tiền tố và hậu tố)

#### 8. Toán tử truy cập mảng:

[]

#### 9. Toán tử gọi hàm:

()

#### 10. Toán tử truy cập thành viên gián tiếp:

->

#### 11. Toán tử dereference:

* (khi sử dụng với con trỏ)

#### 12. Toán tử lấy địa chỉ:

&

#### 13. Toán tử new và delete:

new, new[], delete, delete[]

#### 14. Toán tử ép kiểu:

typeid, static_cast, dynamic_cast, const_cast, reinterpret_cast

#### 15. Toán tử nạp chồng tùy chỉnh:

<<, >> (thường được sử dụng với ostream và istream)

---

## Xem code ví dụ ở thư mục này `2_overloading`

## Câu hỏi
1. không dùng nạp chồng toán tử được không
- Được, có thể dùng cách viết thủ công là gọi hàm với tham số. Nhưng cách viết toán tử giúp code đẹp, ngắn dễ tái xử dụng. Nói chung là muốn sinh viên viết cho bằng được. =)).

