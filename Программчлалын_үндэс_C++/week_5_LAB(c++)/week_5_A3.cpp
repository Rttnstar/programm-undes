#include <iostream>

using namespace std;

int main() {
    int garaag;
    cin >> garaag;

    switch (garaag) {
        case 1:
            cout << "Даваа" << endl;
            break;
        case 2:
            cout << "Мягмар" << endl;
            break;
        case 3:
            cout << "Лхагва" << endl;
            break;
        case 4:
            cout << "Пүрэв" << endl;
            break;
        case 5:
            cout << "Баасан" << endl;
            break;
        case 6:
            cout << "Бямба" << endl;
            break;
        case 7:
            cout << "Ням" << endl;
            break;
        default:
            cout << "Буруу дугаар" << endl;
            break;
    }

    return 0;
}