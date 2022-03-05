#include <iostream>
#include <string>
using namespace std;
//Nama  : MUHAMMAD ARYA BINTANG PRATAMA
//NPM   : G1A021006
//Kelas : Informatika B
//Soal 1 Pointer SDA

void tabel(int a, int b, int c, int *p1, int *p2, int *p3) {
    cout << "|a: " << a << "| b: " << b << "| c: " << c  << "| p1: " << p1 << "| p2: " << p2 << "| p3: " << p3 << endl;
}
int main(){
    //deklarasi variabel & nilai awal variabel
    int a = 10, b = 15, c = 27; 
    int *p1 = 0, *p2 = 0, *p3 = 0;

    p1 = &a;
    tabel(a, b, c, p1, p2, p3);
    p2 = &b;
    tabel(a, b, c, p1, p2, p3);
    *p1 = c;
    tabel(a, b, c, p1, p2, p3);
    a = *p2;
    tabel(a, b, c, p1, p2, p3);
    b = 6;
    tabel(a, b, c, p1, p2, p3);
    p3 = &b;
    tabel(a, b, c, p1, p2, p3);
    p3 = &c;
    tabel(a, b, c, p1, p2, p3);
    *p1 = *p3;
    tabel(a, b, c, p1, p2, p3);
} 