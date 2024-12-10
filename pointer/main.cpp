#include <iostream>

using namespace std;

int main() {
    int  a = 10;
    int *ptr = &a;


    cout << "NILAI DARI A ADALAH : " << a << endl;
    cout << "ALAMAT MEMORI DARI A ADALAH : " << &a << endl;

    cout << "PENGAMBILAN NILAI MENGGUNAKAN POINTER : " << *ptr << endl;

    *ptr = 97;

    cout << "MENGAMBIL NILAI AWAL DENGAN POINTER LALU POINTER MENGUBAH NILAI MENJADI : " << *ptr << endl;


    return 0;
}