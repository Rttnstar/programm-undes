#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inFile("input.txt");
    ofstream evenFile("even.txt");
    ofstream oddFile("odd.txt");

    int num;
    while (inFile >> num) {
        if (num % 2 == 0) {
            evenFile << num << " ";
        } else {
            oddFile << num << " ";
        }
    }

    inFile.close();
    evenFile.close();
    oddFile.close();

    return 0;
}