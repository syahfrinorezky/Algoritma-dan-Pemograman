#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 20;

    cout << "Before swap : x = " << x << ", y = " << y << endl;

    int temp = x;

    x = y;
    y = temp;//PENAMBAHAN TITIK KOMA (;) AKHIR BARIS

    cout << "After swap : x = " << x << ", y = " << y << endl;

    return 0;
}

