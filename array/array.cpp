#include <iostream>
using namespace std;

const int MAXpanjangArray = 100;
int angka[MAXpanjangArray];
int panjangarray = 0;

void tampilkanNilai() {
    cout << "NILAI PADA ARRAY SAAT INI : " << endl;
    for(int i = 0; i < panjangarray ; i++) {
        cout << angka[i]<< " ";
    }
    cout << endl << endl;
}

// fungsi tampil menu
void tampilMenu() {
    cout << "==== MENU ====" << endl;
    cout << "1. TENTUKAN PANJANG ARRAY" << endl;
    cout << "2. MASUKKAN NILAI PADA ARRAY" << endl;
    cout << "3. GANTI NILAI ARRAY" << endl;
    cout << "4. KELUAR DARI PROGRAM" << endl << endl;

    cout << "MASUKKAN PILIHAN: ";
}

// fungsi menetukan panjang array
void cusPanjangArray() {
    cout << "MASUKKAN PANJANG ARRAY YANG DIINGINKAN : ";
    cin >> panjangarray;

    if (panjangarray > MAXpanjangArray) {
        cout << "PANJANG ARRAY YANG ANDA INPUT MELEBIHI BATAS MAKSIMUM ARRAY" << endl;
    } else {
        cout << "PANJANG ARRAY BERHASIL DITENTUKAN, PANJANG ARRAY SEKARANG ADALAH: " << panjangarray << endl;
    }
    cout << endl;
}

// fungsi input nilai pada array
void inputNilai() {
    cout << "MASUKKAN " << panjangarray << " NILAI PADA ARRAY, SEBAGAI BERIKUT: " << endl;
    for(int i = 0; i < panjangarray; i++) {
        cout << "NILAI KE- " << i + 1 << " : ";
        cin >> angka[i];
    }
    cout << endl << "NILAI BERHASIL DIINPUTKAN" << endl << endl;
    tampilkanNilai();
}

// fungsi ganti nilai pada array
void gantiNilai() {
    int element, nilaibaru;

    cout << "MASUKKAN ELEMENT KE BERAPA YANG MAU DIGANTI: ";
    cin >> element;

    cout << endl;

    cout << "MASUKKAN NILAI BARU PADA ELEMENT KE-" << element << " : ";
    cin >> nilaibaru;

    cout << endl;

    angka[element - 1] = nilaibaru;
    cout << "NILAI PADA ELEMENT KE-" << element << " BERHASIL DIGANTI DENGAN " << nilaibaru << endl;
    tampilkanNilai();
}

// codingan inti
int main() {
    int pilihan;
    do {
        tampilMenu();
        cin >> pilihan;
        cout << endl;


        switch (pilihan)
        {
        case 1 :
            cusPanjangArray();
            break;
        
        case 2 :
            inputNilai();
            break;

        case 3 :
            gantiNilai();
            break;

        case 4 :
            cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;
            break;
        default:
            cout << "INPUT TIDAK VALID" << endl;
        }
    } while (pilihan != 4);
    

    return 0;
}
