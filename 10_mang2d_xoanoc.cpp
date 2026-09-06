#include <iostream>
#include <windows.h> // Thư viện bắt buộc để fix font tiếng Việt của Lâm

using namespace std;

int main() {
    // 1. Fix font UTF-8 hiển thị Terminal chuẩn chỉ
    SetConsoleOutputCP(65001); 

    int n = 4; // Kích thước ma trận vuông 4x4
    int matrix[4][4]; // Khai báo mảng 2 chiều tĩnh chứa kết quả

    // 2. Định nghĩa 4 bức tường biên giới dưới bộ nhớ
    int trai = 0, phai = n - 1;
    int tren = 0, duoi = n - 1;
    
    int giaTri = 1; // Số để nạp vào ma trận, tăng dần từ 1 đến 16

    // 3. Vòng lặp siết chặt ranh giới (Bản chất thuật toán)
    while (trai <= phai && tren <= duoi) {
        
        // Bước 1: Đi từ TRÁI sang PHẢI trên hàng 'tren' hiện tại
        for (int j = trai; j <= phai; j++) {
            matrix[tren][j] = giaTri++;
        }
        tren++; // Đục xong hàng trên, ép biên trên dịch xuống 1 dòng

        // Bước 2: Đi từ TRÊN xuống DƯỚI trên cột 'phai' hiện tại
        for (int i = tren; i <= duoi; i++) {
            matrix[i][phai] = giaTri++;
        }
        phai--; // Đục xong cột phải, ép biên phải dịch sang trái 1 cột

        // Bước 3: Đi từ PHẢI sang TRÁI trên hàng 'duoi' hiện tại (nếu biên chưa chạm nhau)
        if (tren <= duoi) {
            for (int j = phai; j >= trai; j--) {
                matrix[duoi][j] = giaTri++;
            }
            duoi--; // Đục xong hàng dưới, ép biên dưới dịch lên 1 dòng
        }

        // Bước 4: Đi từ DƯỚI lên TRÊN trên cột 'trai' hiện tại (nếu biên chưa chạm nhau)
        if (trai <= phai) {
            for (int i = duoi; i >= tren; i--) {
                matrix[i][trai] = giaTri++;
            }
            trai++; // Đục xong cột trái, ép biên trái dịch sang phải 1 cột
        }
    }

    // 4. In ma trận xoắn ốc ra màn hình ODO
    cout << "=== MA TRẬN XOẮN ỐC 4X4 THỰC CHIẾN ===" << endl << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Dùng Tab '\t' để căn hàng cột thẳng tắp chuyên nghiệp
            cout << matrix[i][j] << "\t"; 
        }
        cout << endl; // Hết một hàng thì phải đá con trỏ xuống dòng
    }
    cout << endl;

    return 0;
}
