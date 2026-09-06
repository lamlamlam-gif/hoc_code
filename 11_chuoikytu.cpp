#include <iostream>
#include <string>     // Thư viện để dùng std::string hiện đại
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001); // Fix font tiếng Việt của Lâm đây

    // 1. Chuỗi kiểu C (C-style string): Bản chất là mảng char
    char tenTruong[] = "vju"; 
   
    // 2. Chuỗi C++ hiện đại (std::string): Linh hoạt hơn, tự quản lý bộ nhớ
    string nganhHoc = "ESCT";

    // 3. Truy xuất từng ký tự: Y hệt mảng 1 chiều
    cout << "Ký tự đầu tiên của trường: " << tenTruong[0] << endl; // Đầu ra: P
    cout << "Ký tự thứ hai của ngành: " << nganhHoc[1] << endl;    // Đầu ra: T

    nganhHoc[0] = 'B'; // Đổi 'C' thành '3' -> ITC3
    nganhHoc[1] = 'C'; // Đổi 'C' thành '3' -> ITC3
    nganhHoc[2] = 'S'; // Đổi 'C' thành '3' -> ITC3
    nganhHoc[3] = 'E'; // Đổi 'C' thành '3' -> ITC3
    cout << "Ngành học sau khi đổi: " << nganhHoc << endl;

    return 0;
}