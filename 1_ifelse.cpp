#include <iostream>  // Thư viện nhập xuất cơ bản (cin, cout)
#include <cmath>     // Thư viện toán học (căn bậc 2 sqrt, lũy thừa pow, trị tuyệt đối abs)
#include <string>    // Thư viện xử lý chuỗi ký tự (string)
#include <algorithm> // Thư viện thuật toán có sẵn (tìm max, min, sắp xếp sort)
#include <vector>    // Thư viện mảng động (học ở phần nâng cao)

using namespace std;

int main() {
    // Thêm dòng này để bật hiển thị tiếng Việt UTF-8 không bị lỗi font
    system("chcp 65001");

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

    cout << "Tổng tiền taxi của bạn là: " << fixed << tong_tien << " VNĐ" << endl;

    return 0;
}
