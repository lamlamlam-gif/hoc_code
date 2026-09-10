#include <iostream>
#include <string>
using namespace std;

// 1. Định nghĩa cấu trúc SinhVien (Trạm 8) [2]
struct SinhVien {
    int id;
    string name;
    double gpa;
};

int main() {
    // 2. Cấp phát động 1 Struct SinhVien trên HEAP thông qua con trỏ 'sv' (Trạm 6 + 7) [2]
    SinhVien* sv = new SinhVien;

    // --- BƯỚC 1: NHẬP SỐ NGUYÊN ---
    cout << "Nhap ma sinh vien: ";
    cin >> sv->id; // Dùng toán tử '->' để truy xuất trường id của Struct trên Heap

    // --- BƯỚC 2: XÓA  BUFFER CHỐNG TRÔI LỆNH (Trạm 5) [1] ---
    // Xóa ký tự Enter '\n' còn kẹt lại trong bộ đệm sau khi nhập số id ở trên
    cin.ignore(); 

    // --- BƯỚC 3: NHẬP CHUỖI CÓ KHOẢNG TRẮNG ---
    cout << "Nhap ho va ten: ";
    getline(cin, sv->name); // Nhờ có cin.ignore() ở trên, dòng này dừng lại cho bạn nhập bình thường!

    // --- BƯỚC 4: NHẬP SỐ THỰC ---
    cout << "Nhap GPA: ";
    cin >> sv->gpa;

    // --- IN KẾT QUẢ ---
    cout << "\n=== THONG TIN SINH VIEN (Luu duoi Heap) ===" << endl;
    cout << "MSV   : " << sv->id << endl;
    cout << "Ho ten: " << sv->name << endl;
    cout << "GPA   : " << sv->gpa << endl;

    // --- GIẢI PHÓNG BỘ NHỚ HEAP (Trạm 7) [2] ---
    delete sv;      // Trả lại RAM cho hệ thống, tránh Memory Leak
    sv = nullptr;   // Đưa con trỏ về nullptr để an toàn

    return 0;
}