#include <iostream>
using namespace std;

int main() {
    int age = 18; // Biến bình thường lưu giá trị

    // ĐÂY LÀ CON TRỎ: Khai báo bằng dấu *
    int* ptr = &age; // Con trỏ ptr lưu ĐỊA CHỈ (vị trí) của biến age trong RAM

    cout << "Giá trị của age: " << age << endl;          // Kết quả: 18
    cout << "Địa chỉ của age trong RAM: " << &age << endl; // Kết quả: 0x61ff0c (Mã Hex)
    cout << "Giá trị con trỏ ptr đang giữ: " << ptr << endl; // Kết quả: 0x61ff0c

    // THAO TÁC CỦA DÂN ĐIỂM CAO: Can thiệp vùng nhớ từ xa
    *ptr = 20; // Dùng dấu * trước con trỏ để thay đổi trực tiếp giá trị tại ô nhớ đó

    cout << "Biến age sau khi bị con trỏ sửa: " << age << endl; // Kết quả: 20
    return 0;
}
