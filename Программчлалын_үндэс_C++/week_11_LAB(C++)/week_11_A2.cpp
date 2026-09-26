#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename;
    cout << "Input the filename to be opened : ";
    cin >> filename;

    ifstream file(filename);

    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "The content of the file " << filename << " are :" << endl;

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();

    return 0;
}