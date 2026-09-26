#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "a, b, c гурван тоог оруулна уу: ";
    cin >> a >> b >> c;

    double max_num = a;
    if (b > max_num) {
        max_num = b;
    }
    if (c > max_num) {
        max_num = c;
    }

    cout << "Хамгийн их тоо: " << max_num << endl;
    return 0;
}
