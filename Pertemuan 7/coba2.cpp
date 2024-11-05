#include <iostream>

using namespace std;

void perhitungan(int a, int b);

int main() {
    int num1, num2;

    cout << "MASUKKAN ANGKA PERTAMA: ";
    cin >> num1;
    cout << "MASUKKAN ANGKA KEDUA : ";
    cin >> num2;

    perhitungan(num1, num2); //MENGGUNAKAN FUNCTION

    return 0;

}

//MENGGUNAKAN SEMUA PERHITUNGAN DALAM SATU FUNCTION
void perhitungan(int a, int b) {
    int penjumlahan = a + b;
    cout << "PENJUMLAHAN: " <<  penjumlahan << endl;

    int pengurangan = a - b;
    cout << "PENGURANGAN: " << pengurangan << endl;

    int perkalian = a * b;
    cout << "PERKALIAN : " << perkalian << endl;

    int pembagian = a / b;
    cout << "PEMBAGIAN : " << pembagian << endl;
}

