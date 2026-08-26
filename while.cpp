#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    int s;
    cout << "Nhập số cuối cùng (S): ";
    cin >> s;

    int tong = 0; // Bước 1: Khởi tạo hộp chứa tổng bằng 0
    int i = 1;    // Bước 2: Biến đếm chạy từ 1

    // Bước 3: Vòng lặp chạy từ 1 đến s
    while (i <= s) {
        tong = tong + i; // Cộng dồn giá trị i hiện tại vào hộp 'tong'
        i++;             // Tăng i lên 1 để chuẩn bị cộng số tiếp theo
    }

    cout << "Tổng các số từ 1 đến " << s << " là: " << tong << endl;

    return 0;
}
