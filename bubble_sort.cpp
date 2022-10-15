#include <iostream>
using namespace std;

void swap(int* angka1, int* angka2) {
    int temp = *angka1;
    *angka1 = *angka2;
    *angka2 = temp;
}

int main()
{
    int angka[] = {60, 31, 11, 24, 55, 100};
    int sizeAngka = 6;

    cout << "Urutan angka sebelum bubble sort: " << endl;
   
    for (int a = 0; a < sizeAngka; a++) {
       cout << angka[a] << " ";
    }
   
    cout << endl;

    for (int i = 0; i < sizeAngka; i++) {
        for (int j = 0; j < sizeAngka - i; j++) {
            if (angka[j] > angka[j + 1]) {
                swap(&angka[j], &angka[j + 1]);
            }
        }
    }

    cout << "Urutan angka sesudah bubble sort: " << endl;

    for (int a = 0; a < sizeAngka; a++) {
        cout << angka[a] << " ";
    }

    cout << endl;

    return 0;
}

