#include <iostream>

using namespace std;

int main() {
    int height;
    int namhan = 0;
    int dund = 0;
    int ondor = 0;

    while (cin >> height && height != -1) {
        if (height < 160) {
            namhan++;
        } else if (height <= 175) {
            dund++;
        } else {
            ondor++;
        }
    }

    cout << "Намхан: " << namhan << endl;
    cout << "Дунд зэрэг: " << dund << endl;
    cout << "Өндөр: " << ondor << endl;

    return 0;
}