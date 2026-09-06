#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001); // Fix font tiếng Việt của Lâm

    int soDong = 2;
    int soCot = 3;
    int matrix[2][3] = {
        {5,  12, 7},
        {20, 3,  16}
    };

    // BƯỚC 1: Đặt lính canh ban đầu bằng một số âm cực nhỏ 
    // Vì ta chưa biết ô nào trong ma trận là số chẵn hợp lệ
    int maxChan = -999999; 
    int dongMax = -1;
    int cotMax = -1;

    // BƯỚC 2: Quét ma trận (Dòng ngoài, Cột trong để tối ưu RAM Cache)
    for (int i = 0; i < soDong; i++) {
        for (int j = 0; j < soCot; j++) {
            
            // Điều kiện 1: Phải là số CHẴN cái đã
            if (matrix[i][j] % 2 == 0) {
                
                // Điều kiện 2: Thằng chẵn này phải to hơn thằng chẵn lớn nhất từng thấy
                if (matrix[i][j] > maxChan) {
                    maxChan = matrix[i][j]; // Phong Vua chẵn mới
                    dongMax = i;           // Găm lại dòng
                    cotMax = j;            // Găm lại cột
                }
            }

        }
    }

    // BƯỚC 3: Xuất kết quả kiểm tra
    if (dongMax == -1) {
        cout << "Ma trận toàn số lẻ, không có số chẵn nào cả!" << endl;
    } else {
        cout << "Số CHẴN lớn nhất là: " << maxChan << endl;
        cout << "Tọa độ vật lý: Dòng " << dongMax << ", Cột " << cotMax << endl;
    }

    return 0;
}
