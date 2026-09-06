    #include <iostream>
#include <windows.h> // Để dùng SetConsoleOutputCP

using namespace std;

int main() {
    // 1. Fix font tiếng Việt chuẩn bài của Lâm
    SetConsoleOutputCP(65001); 

    // 2. Khai báo ma trận 3 dòng 4 cột
    int soDong = 3;
    int soCot = 4;
    int matrix[3][4];

    cout << "=== BƯỚC 1: NHẬP DỮ LIỆU VÀO MA TRẬN ===" << endl;
    // Vòng lặp i quản lý DÒNG
    for (int i = 0; i < soDong; i++) {
        // Vòng lặp j quản lý CỘT của dòng đó
        for (int j = 0; j < soCot; j++) {
            cout << "Nhập phần tử tại vị trí [" << i << "][" << j << "]: ";
            cin >> matrix[i][j]; 
        }
    }

    cout << "\n=== BƯỚC 2: IN MA TRẬN RA MÀN HÌNH ===" << endl;
    for (int i = 0; i < soDong; i++) {
        for (int j = 0; j < soCot; j++) {
            // In các phần tử trên cùng một dòng, cách nhau một dấu Tab (\t)
            cout << matrix[i][j] << "\t"; 
        }
        // Hết một dòng thì phải xuống hàng
        cout << endl; 
    }

    return 0;
}