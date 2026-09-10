#include <iostream>
#include <string>
using namespace std;

struct SinhVien {
    string name;
    int id;
    double gpa;
};

int main() {
    // 1. Khai báo Struct thường trên Stack
    SinhVien sv1 = {"Nguyen Van A", 101, 3.8};
    cout << "Ten SV1: " << sv1.name << endl; // Dùng dấu chấm '.'

    // 2. Cấp phát động 1 Struct trên Heap (Kết hợp Trạm 6 + 7)
    SinhVien* pSV = new SinhVien{"Tran Thi B", 102, 3.9};

    // Truy xuất qua con trỏ: Dùng toán tử mũi tên '->'
    cout << "Ten SV2: " << pSV->name << endl;
    cout << "GPA SV2: " << pSV->gpa << endl;

    // Giải phóng Heap
    delete pSV;
    pSV = nullptr;

    return 0;
}