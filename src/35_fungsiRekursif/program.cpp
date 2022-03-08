#include <iostream>
using namespace std;

// rekursif: recurtion atau pengulangan.
// fungsi rekursif: fungsi yang memanggil dirinya sendiri

// fungsi rekursif terbatas dibawah ini
int pangkatIterasi(int a, int b){
    int hasil = a;
    for (int i = 1; i < b; i++){
        hasil = hasil * a;
    }
    return hasil;
}

int pangkatRekursif(int a, int b){

    if(b <= 1){
        cout << "Akhir dari rekursif\n";
        return a;
    }else{
        cout << "Rekursif\n";
        return a * pangkatRekursif(a,(b - 1));
    }
}

int main(){
    int a;
    int b;
    cout << "Angka: ";
    cin >> a;
    cout << "Pangkat: ";
    cin >> b;
    cout << "Hasil iterasi: " << pangkatIterasi(a,b) << endl;
    cout << "Hasil rekursif: " << pangkatRekursif(a,b) << endl;
    return 0;
}