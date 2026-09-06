#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001); // Sửa lỗi font tiếng Việt Terminal

    int n;
    cout << "Lâm muốn nhập bao nhiêu số vào mảng? ";
    cin >> n;

    int mang_so[100]; // Tạo khay chứa tối đa 100 ngăn số nguyên

    // BƯỚC 1: Vòng lặp for thứ nhất - Nạp dữ liệu vào từng ngăn mang_so[i]
    cout << "\n--- 1. NHẬP DỮ LIỆU MẢNG ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Nhập số cho ngăn thứ " << i << ": ";
        cin >> mang_so[i];
    }

    // BƯỚC 2: Vòng lặp for thứ hai - In dữ liệu từ các ngăn ra màn hình
    cout << "\n--- 2. XUẤT DỮ LIỆU MẢNG ---" << endl;
    cout << "Mảng em vừa nhập là: ";
    for (int i = 0; i < n; i++) {
        cout << mang_so[i] << " ";
    }
    cout << endl;

    // BƯỚC 3: Vòng lặp for thứ ba - Cộng dồn giá trị từng ngăn vào hộp 'tong'
    int tong = 0; // Khởi tạo hộp chứa tổng bằng 0
    for (int i = 0; i < n; i++) {
        tong = tong + mang_so[i]; // Lấy số ở ngăn thứ i cộng dồn vào 'tong'
    }

    // BƯỚC 4: In kết quả tổng cuối cùng
    cout << "\n--- 3. KẾT QUẢ TÍNH TOÁN ---" << endl;
    cout << "Tổng của tất cả các số trong mảng là: " << tong << endl;

    return 0;
}
