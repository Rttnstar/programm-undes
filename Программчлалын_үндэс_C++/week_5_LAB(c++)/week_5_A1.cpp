#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int eyreg_sum = 0;
    int sorog_tooh = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a > 0) {
            eyreg_sum += a;
        } else if (a < 0) {
            sorog_tooh++;
        }
    }

    cout << "Эерэг гишүүдийн нийлбэр: " << eyreg_sum << endl;
    cout << "Сөрөг гишүүдийн тоо: " << sorog_tooh << endl;

    return 0;
}