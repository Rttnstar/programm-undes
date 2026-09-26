#include <iostream>
#include <string>

using namespace std;

int main() {
    string n;
    cin >> n;
    
    int len = n.length();
    
    cout << "Эхний цифр: " << n[0] << endl;
    cout << "Сүүлийн цифр: " << n[len - 1] << endl;
    
    cout << "Голын цифр: ";
    if (len % 2 == 1) {
        cout << n[len / 2] << endl;
    } else {
        cout << n[(len / 2) - 1] << n[len / 2] << endl;
    }

    return 0;
}