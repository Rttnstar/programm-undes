#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

struct Student {
    char ner[50];
    int nas;
    double dun;
};

void addStudent() {
    ofstream fout("student.dat", ios::binary | ios::app);
    Student s;
    
    cout << "Оюутны нэр: ";
    cin >> s.ner;
    cout << "Нас: ";
    cin >> s.nas;
    cout << "Дүн: ";
    cin >> s.dun;

    fout.write(reinterpret_cast<char*>(&s), sizeof(Student));
    fout.close();
    cout << "Мэдээлэл амжилттай хадгалагдлаа." << endl;
}

void searchStudent() {
    ifstream fin("student.dat", ios::binary);
    if (!fin) {
        cout << "Файл олдсонгүй!" << endl;
        return;
    }

    char searchName[50];
    cout << "Хайх оюутны нэр: ";
    cin >> searchName;

    Student s;
    bool found = false;

    while (fin.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
        if (strcmp(s.ner, searchName) == 0) {
            cout << "\n--- Оюутны мэдээлэл ---" << endl;
            cout << "Нэр: " << s.ner << endl;
            cout << "Нас: " << s.nas << endl;
            cout << "Дүн: " << s.dun << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Ийм нэртэй оюутан олдсонгүй." << endl;
    }

    fin.close();
}

int main() {
    int choice;
    do {
        cout << "\n1. Оюутан нэмэх\n2. Оюутан хайх\n3. Гарах\nСонголт: ";
        cin >> choice;

        if (choice == 1) {
            addStudent();
        } else if (choice == 2) {
            searchStudent();
        }
    } while (choice != 3);

    return 0;
}