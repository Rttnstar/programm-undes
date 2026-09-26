#include <iostream>

using namespace std;

int main() {
    int num;
    int sum = 0;

    while (cin >> num && num != 0) {
        if (num > 0) {
            sum += num;
        }
    }

    cout << "Эерэг тоонуудын нийлбэр: " << sum << endl;

    return 0;
}