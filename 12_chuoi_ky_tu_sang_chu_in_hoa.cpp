#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    string name = "Lam VJU"; // Chuỗi vừa có chữ hoa, chữ thường và khoảng trắng

    // Duyệt qua từng ký tự của chuỗi giống như duyệt mảng 1 chiều
    for (int i = 0; i < name.length(); i++) {
        // Nếu ký tự tại vị trí i là chữ thường (nằm trong đoạn từ 'a' đến 'z')
        if (name[i] >= 'a' && name[i] <= 'z') {
            name[i] = name[i] - 32; // Ép ô nhớ giảm đi 32 đơn vị để biến thành chữ HOA
        }
    }

    cout << "Tên của ông sau khi chuẩn hóa HOA: " << name << endl; 
    // Kết quả: LAM VJU

    return 0;
}
