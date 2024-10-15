#include <iostream>

using namespace std;

int main() {
     char num;

    //MENGGANTI INT DENGAN CHAR

    cout << "Enter a number: ";
    cin >> num;


    switch (num) {
    case '1':
        cout << "One" << endl;
        break;

    case '2':
        cout << "Two" << endl;
        break;

    default:
        cout << "Other number" << endl;
        break;

         //MENAMBAHKAN TANDA PETIK SATU (') PADA CASE
    }

    return 0;
}
