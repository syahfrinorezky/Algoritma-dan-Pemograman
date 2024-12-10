#include <iostream>

using namespace std;

float hitungLuas(float a) {
    return 3.14 * a * a;
}

float rataRata(float array[], float ukuran) {
    int total = 0;
    for (int i = 0; i < ukuran; i++) {
        total += array[i];
    }
    return total / ukuran;
}

int factorial(int a) {
    if (a == 0 || a == 1) {
        return 1;
    }
    return a * factorial(a - 1);
}


void menuSection (int& pilihan) {
    cout << "===== MENU =====" << endl;
    cout << "1. HITUNG LUAS LINGKARAN" << endl;
    cout << "2. HITUNG RATA-RATA" << endl;
    cout << "3. REKURSIF" << endl;
    cout << "PILIHAN : ";
    cin >> pilihan;
}

int main() {
    int pilihan, lanjut;

    while (true) {
        menuSection(pilihan);

        switch (pilihan) {
            case 1: {
                int jariLingkaran;

                cout << "MASUKKAN JARI-JARI LINGKARAN : ";
                cin >> jariLingkaran;

                float luasLingkaran = hitungLuas(jariLingkaran);
                cout << "LUAS DARI LINGKARANG ADALAH : " << luasLingkaran << endl;
                break;
            }

            case 2 : {
                int ukuran;

                cout << "MASUKKAN UKURAN ARRAY : ";
                cin >> ukuran;

                float angka[ukuran];

                cout << "MASUKKAN NILAI PADA ARRAY" <<  endl;
                for (int i = 0; i < ukuran; i++) {
                    cout << "MASUKKAN NILAI KE- " << i + 1;
                    cin >> angka[i];
                }
                

                float hasil = rataRata(angka, ukuran);
                cout << "TOTAL NILAI RATA-RATA PADA ARRAY : " << hasil << endl << endl;

                break;
            }

            case 3 : {
                int a;
                
                cout << "MASUKKAN BILANGAN :  ";
                cin >> a;

                int hasil = factorial(a);

                cout << "FAKTORIAL DARI " << a << " ADALAH " << factorial(a) << endl;
                break;
            }

            default: {
                cout << "PILIHAN TIDAK VALID";
                break;
            }
        }
        cout << "APAKAH ANDA INGIN LANJUT ? ( YA =  1 / TIDAK = 0)";
        cin >> lanjut;

        if (lanjut == 0) {
            break;
        }
        
    }
    return 0;   
}