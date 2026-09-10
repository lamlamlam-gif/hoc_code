#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu n: ";
    cin >> n; // Kích thước n được quyết định LÚC CHẠY (Runtime)

    // 1. CẤP PHÁT MẢNG ĐỘNG TRÊN HEAP
    // Xin n ô nhớ kiểu int nằm liên tiếp nhau trên Heap
    int* arr = new int[n]; 

    // 2. NHẬP VÀ XUẤT MẢNG (Sử dụng như mảng thông thường)
    for (int i = 0; i < n; i++) {
        cout << "Nhap arr[" << i << "]: ";
        cin >> arr[i]; // Hoặc dùng phép toán con trỏ: cin >> *(arr + i);
    }

    cout << "\nCac phan tu vua nhap: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 3. GIẢI PHÓNG MẢNG ĐỘNG (CỰC KỲ QUAN TRỌNG)
    // Phải dùng delete[] (có ngoặc vuông) cho mảng động
    delete[] arr; 
    arr = nullptr; 

    return 0;
}