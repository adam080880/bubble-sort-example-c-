#include <iostream>
using namespace std;

int main() {
  int size_array = 10;
  int numbers[10] = {12, 14, 25, 1, 25, 5, 3, 2, 4, 5};
  int is_found_index = -1;
  int search_number = 0;

  cout << "Masukkan angka yang mau dicari: ";
  cin >> search_number;

  for (int a = 0; a < size_array; a++) {
    if (numbers[a] == search_number) {
      is_found_index = a; // found
      break;
    }
  }

  // if found
  if (is_found_index > -1) {
    cout << "Angka yang kamu cari ada di index " << is_found_index;
  } else {
    cout << "Angka yang kamu cari tidak ada";
  }

  cout << endl;

  return 0;
}
