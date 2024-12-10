#include <iostream>

using namespace std;

struct nilaiInput {
    int a;
    int b;
};

nilaiInput tukarAngka(int *a, int *b) {
    nilaiInput hasil;
    hasil.a = *b;
    hasil.b = *a;
    return hasil;
}

void gantiNilaiPointer(int *num) {
    *num = *num * 5;
}


void menuSection(int& pilihan) {
    cout << "===== MENU =====" << endl;
    cout << "1. TUKAR ANGKA POINTER" << endl;
    cout << "2. GANTI NILAI POINTER" << endl;
    cout << "MASUKKAN PILIHAN : ";
    cin >> pilihan;
}


int main() {
    int pilihan;
    int lanjut;

    while (true) {
        menuSection(pilihan);

        switch (pilihan) {
            case 1: {
                int a, b;
                cout << "MASUKKAN NILAI A : ";
                cin >> a;
                cout << "MASUKKAN NILAI B : ";
                cin >> b;

                cout << "SEBELUM DITUKAR : " << endl;
                cout << "A : " << a << " B : " << b << endl << endl;

                cout << "SESUDAH DITUKAR DENGAN MENGGUNAKAN POINTER : " << endl;
                nilaiInput hasil = tukarAngka(&a, &b);
                cout << "A : " << hasil.a << " B : " << hasil.b <<  endl << endl;
                break;
            }

            case 2 : {
                int num;

                cout << "MASUKKAN ANGKA : ";
                cin >> num;

                cout << "SEKARANG ANDA MEMILIKI NILAI : " << num << endl << endl;

                gantiNilaiPointer(&num);

                cout << "NILAI ANDA SETELAH DIRUBAH DENGAN POINTER (DIKALIKAN DENGAN ANGKA 5): " << num << endl << endl;
                break;
            }
            
            default: {
                cout << "PILIHAN ANDA TIDAK VALID" << endl;
                break;
            }
        }

        cout << "APAKAH ANDA INGIN LANJUT ? (1 =  YA / 0 = TIDAK)";
        cout << "MASUKKAN PILIHAN : ";
        cin >> lanjut;
        if (lanjut == 0) {
            break;
        }
    }
    return 0;   
}