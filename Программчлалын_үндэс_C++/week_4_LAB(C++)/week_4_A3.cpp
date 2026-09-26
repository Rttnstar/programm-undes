#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int tegsh_sum = 0;
    int sondgoi_sum = 0;
    int i = 1;

    if (N >= 1) {
        do {
            if (i % 2 == 0) {
                tegsh_sum += i;
            } else {
                sondgoi_sum += i;
            }
            i++;
        } while (i <= N);
    }

    cout << "Тэгш тоонуудын нийлбэр: " << tegsh_sum << endl;
    cout << "Сондгой тоонуудын нийлбэр: " << sondgoi_sum << endl;

    return 0;
}