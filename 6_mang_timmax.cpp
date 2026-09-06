#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    int n;
    cout << "Lâm muốn nhập bao nhiêu số vào mảng? ";
    cin >> n;

    int mang_so[100]; 

    for (int i = 0; i < n; i++) {
        cout << "Nhập số cho ngăn thứ " << i << ": ";
        cin >> mang_so[i];
    }

    int max_value = mang_so[0]; 

    for (int i = 1; i < n; i++) {
        if (mang_so[i] > max_value) {
            max_value = mang_so[i]; // Cướp ngôi nếu tìm thấy số lớn hơn
        }
    }

    cout << "\nSố lớn nhất trong mảng của Lâm là: " << max_value << endl;

    return 0;
}