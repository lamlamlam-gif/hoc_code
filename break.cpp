#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    int so_bi_mat = 7; // Số máy mật định là 7
    int so_doan;

    cout << "--- TRÒ CHƠI ĐOÁN SỐ BÍ MẬT (1 - 10) ---" << endl;

    // while(true) nghĩa là vòng lặp vô hạn, máy sẽ bắt nhập liên tục không dừng
    while (true) {
        cout << "Mời Lâm đoán một số: ";
        cin >> so_doan;

        // Bẫy lỗi 1: Nếu người dùng nhập số lố ngoài khoảng 1-10
        if (so_doan < 1 || so_doan > 10) {
            cout << "Số không hợp lệ! Chỉ nhập từ 1 đến 10 thôi." << endl;
            continue; // Bỏ qua đoạn code so sánh bên dưới, quay lại bắt nhập lại luôn!
        }

        // Kiểm tra kết quả
        if (so_doan == so_bi_mat) {
            cout << "Chúc mừng Lâm! Em đoán ĐÚNG rồi 🎉" << endl;
            break; // Cắt đứt vòng lặp vô hạn, kết thúc trò chơi ngay lập tức!
        } 
        else {
            cout << "Sai rồi! Thử lại xem nào 💪" << endl;
        }
    }

    cout << "Chương trình kết thúc an toàn!" << endl;
    return 0;
}