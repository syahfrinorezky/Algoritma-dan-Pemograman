#include <iostream>

using namespace std;

void polaFOR (int n) {
    cout << "MENGGUNAKAN PERULANGAN FOR : " << endl;

    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void polaWHILE (int n) {
    cout << "MENGGUNAKAN PERULANGAN WHILE : " << endl;

    int i = n;
        while( i > 0 ) {
            int j = 0;
        while( j < i ) {
            cout << "*";
            j++;
        }
        cout << endl;
        i--;
    }
    cout << endl;
}

void polaDOWHILE (int n) {
    cout << "MENGGUNAKAN PERULANGAN DO-WHILE: " << endl;

    int i = n;
    do {
        int j = 0;
        do {
            cout << "*";
            j++;
        } while ( j < i );
        cout << endl;
        i--;
    } while ( i > 0 );
    cout << endl;
}

int main() {
    int n;

    cout << "MASUKKAN JUMLAH BINTANG DI BARIS PERTAMA : ";
    cin >> n;

    //SAYA MENGGABUNGKAN 3 CODE SEKALIGUS
    polaFOR(n);
    polaWHILE(n);
    polaDOWHILE(n);

    return 0;
}
