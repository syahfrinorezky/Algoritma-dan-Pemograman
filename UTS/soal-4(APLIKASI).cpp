#include <iostream>

using namespace std;

void tampilanMenu() {
    cout << "===== MENU GAME SPORTS & RACING ======" << endl;

    cout << endl;

    cout << "1. NBA 2K25        - RP 556508" << endl;
    cout << "2. FC25            - RP 339500" << endl;
    cout << "3. WWE 2K24        - RP 556508" << endl;
    cout << "4. F1 2K24         - RP 759000" << endl;
    cout << "5. FORZA HORIZON 5 - RP 699000" << endl;
    cout << "6. MOTOGP 24       - RP 699000" << endl;
    cout << "7. BATAL" << endl;


}

int hargaGame (int pilihan) {
    switch (pilihan) {
    case 1:
        return 556508;
    case 2:
        return 339500;
    case 3:
        return 556508;
    case 4:
        return 759000;
    case 5:
        return 699000;
    case 6:
        return 699000;
    default:
        return -1;
    }
}

int main() {
    int pilihan, harga;
    bool lanjut = true;

    while (lanjut) {
        cout << endl;
        tampilanMenu();

        cout << "PILIH MENU GAME ATAU BATAL: ";
        cin >> pilihan;

        cout << endl;

        if (pilihan == 7) {
            break;
        } else if (pilihan <= 6){
            harga = hargaGame(pilihan);
            cout << "GAME YANG DIPILIH  : " << pilihan << endl;
            cout << "DENGAN HARGA       : RP " << harga << endl;
        } else {
            cout << "PILIH DENGAN BAIK" << endl;
        }
    }

    return 0;
}
