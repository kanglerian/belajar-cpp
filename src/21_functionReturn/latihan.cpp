#include <iostream>

using namespace std;

int tambah(int a, int b){
    int c;
    c = a + b;
    return c;
}

int main(int argc, const char** argv) {

    int a, b, hasil;

    cout << "Masukan nilai a: ";
    cin >> a;
    cout << "Masukan nilai b: ";
    cin >> b;

    hasil = tambah(a,b);

    cout << "Hasil dari " << a << " + " << b << " adalah: " << hasil << endl;

    return 0;
}