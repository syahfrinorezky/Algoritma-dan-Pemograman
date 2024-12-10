#include <iostream>
#include <string>

using namespace std;

int soalPertama(int a, int b) {
    return a * b;
}

int soalKedua(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

string soalKetiga(int a) {
    if (a % 2 == 0) {
        return "GENAP";
    } else {
        return "GANJIL";
    }
}

void menuSection(int& pilih) {
    cout << "====== MENU ======" << endl;
    cout << "1. PERKALIAN" << endl;
    cout << "2. NILAI TERBESAR" << endl;
    cout << "3. GANJIL GENAP" << endl;
    cout << "MASUKKAN PILIHAN : ";
    cin >> pilih;
}

int main() {
    int pilih;
    int lanjut;
    
    while (true) {
        menuSection(pilih);

        switch (pilih)
        {
        case 1: {
            int num1, num2;

            cout << "MASUKKAN ANGKA YANG PERTAMA : ";
            cin >> num1;
            cout << "MASUKKAN ANGKA YANG KEDUA : ";
            cin >> num2;

            int perkalian = soalPertama(num1, num2);
            cout << "HASIL DARI PERKALIAN ANGKA PERTAMA DAN ANGKA KEDUA ADALAH : " << perkalian << endl;
            break;
        }

        case 2 : {
            int num1, num2;

            cout << "MASUKKAN ANGKA YANG PERTAMA : ";
            cin >> num1;
            cout << "MASUKKAN ANGKA YANG KEDUA : ";
            cin >> num2;

            int perbandingan = soalKedua(num1, num2);
            cout << "NILAI YANG PALING BESAR ADALAH : " << perbandingan << endl;
            break;
        }
        
        case 3 : {
            int num;

            cout << "MASUKKAN ANGKA : ";
            cin >> num;

            string ganjilGenap = soalKetiga(num);
            cout << "ANGKA " << num << " ADALAH " << ganjilGenap << endl;
            break;
        }

        default: { 
            cout << "PILIHAN TIDAK TERSEDIA" << endl;
            break;
        }
        }

        cout << "INGIN MELANJUTKAN? (1 = YA, 0 = TIDAK): ";
        cin >> lanjut;
        if (lanjut == 0) {
            break;
        }
    }

    return 0;
}
