#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001); // Fix font chuẩn bài của Lâm

    int n = 4; // Bãi xe vuông 4x4
    int baiXe[4][4] = {
        {1, 0, 1, 1},
        {0, 1, 0, 0},
        {1, 1, 0, 1},
        {0, 0, 1, 1}
    };

    int soXeDau = 0;
  
    for (int i = 0; i < n; i++) {
        soXeDau += baiXe[i][i];
    
    }
    // Xuất kết quả
    cout << "Số lượng xe đang đỗ trên đường chéo chính là: " << soXeDau << endl;

    return 0;
}
