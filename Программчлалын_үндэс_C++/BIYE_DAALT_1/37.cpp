#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    cout << "a, b, c тоонуудыг оруулна уу: ";
    cin >> a >> b >> c;

    if (a >= b && b >= c) {
        a = a * 2;
        b = b * 2;
        c = c * 2;
    } else {
        a = abs(a);
        b = abs(b);
        c = abs(c);
    }

    cout << "Үр дүн:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
