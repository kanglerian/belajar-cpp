#include <iostream>
using namespace std;

/*
Void (tipe data) itu kosong.
Tidak ada apa-apa.
Tidak memiliki return.
Tidak mengembalikan nilai.
Worker.
*/ 
int kuadrat(int x){
    int y;
    y = x * x;
    return y;
}

void tampilkan(int input){
    cout << "Menampilkan dengan void: ";
    cout << input << endl;
}

int main(int argc, const char** argv) {

    int input, hasil;

    cout << "Masukan kuadrat: ";
    cin >> input;

    hasil = kuadrat(input);
    tampilkan(hasil);

    return 0;
}
