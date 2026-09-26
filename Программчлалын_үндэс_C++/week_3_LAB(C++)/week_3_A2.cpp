#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Бүхэл тоо оруулна уу: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " нь ТЭГШ тоо юм." << endl;
    } else {
        cout << num << " нь СОНДГОЙ тоо юм." << endl;
    }

    return 0;
}