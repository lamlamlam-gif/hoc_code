#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    double so_km; 
    cout << "Nhập số km đã đi: ";
    cin >> so_km;

    double tong_tien = 0;

    if (so_km <= 1) {
        tong_tien = 15000;
    }
    else if (so_km <= 10) {
        tong_tien = 15000 + (so_km - 1) * 13500;
    }
    else {
        tong_tien = 15000 + 9 * 13500 + (so_km - 10) * 11000;
    }

    cout << "Tổng tiền taxi của bạn là: " << tong_tien << " VNĐ" << endl;

    return 0;
}