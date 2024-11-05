#include <iostream>

using namespace std;

int penjumlahan(int a, int b);

void pengurangan(int a, int b);

int main() {
    int num1, num2;

    cout << "MASUKKAN ANGKA PERTAMA: ";
    cin >> num1;
    cout << "MASUKKAN ANGKA KEDUA : ";
    cin >> num2;

    int sum = penjumlahan(num1, num2);
    cout << "PENJUMLAHAN: " << sum << endl;

    pengurangan(num1, num2);

    return 0;

}

int penjumlahan(int a, int b) {
    return a + b;
}

void pengurangan(int a, int b) {
    int result = a - b;
    cout << "PENGURANGAN: " << result << endl;
}

void pembagian(int a, int b) {
    int result = a / b;
    cout << "PEMBAGIAN: "
}
