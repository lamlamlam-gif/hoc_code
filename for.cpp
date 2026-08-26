#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    cout << "Bắt đầu đếm ngược:" << endl;

    // Ráp câu trả lời của Lâm sau khi sửa số chặn đuôi
    for (int i = 10; i >= 1; i--) {
        cout << i << " " << endl;
    }

    cout << "BÙM! 🚀" << endl;
    return 0;
}