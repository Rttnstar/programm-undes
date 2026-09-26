#include <iostream>
using namespace std;

int main() {
    int X;
    cout << "X бүхэл тоог оруулна уу: ";
    cin >> X;

    double bonus = 0.0;


    if (X > 1000) {
        bonus = X * 0.10;
    } else if (X > 100) {
        bonus = X * 0.20;
    } else {
        bonus = 5;
    }


    if (X % 2 == 0) {
        bonus += 1;
    } else if (X % 10 == 5 || X % 10 == -5) {
        bonus += 2;
    }


    cout << "Урамшууллын дүн: " << bonus << endl;
    cout << "Нийт дүн (X + Урамшуулал): " << X + bonus << endl;

    return 0;
}
