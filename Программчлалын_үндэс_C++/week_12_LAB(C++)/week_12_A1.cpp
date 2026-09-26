#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    FILE *fin = fopen("integers.dat", "rb");
    FILE *fout = fopen("max.txt", "w");

    if (fin == NULL) {
        return 1;
    }

    int num;
    int count = 0;
    int current_max;

    while (fread(&num, sizeof(int), 1, fin) == 1) {
        if (count == 0) {
            current_max = num;
        } else {
            if (num > current_max) {
                current_max = num;
            }
        }
        
        count++;

        if (count == 4) {
            fprintf(fout, "%d ", current_max);
            count = 0;
        }
    }

    if (count > 0) {
        fprintf(fout, "%d ", current_max);
    }

    fclose(fin);
    fclose(fout);

    return 0;
}