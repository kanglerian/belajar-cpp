#include <iostream>

using namespace std;

double hitung_luas(double p, double l){
    double luas = p * l;
    return luas;
}

void tampilkan_luas(double p, double l){
    cout << "Hasilnya adalah: ";
    cout << hitung_luas(p,l) << endl;
}

int main(){

    double panjang, lebar;

    cout << "Hitung dari sekarang!" << endl;
    cout << "Panjang: ";
    cin >> panjang;
    cout << "Lebar: ";
    cin >> lebar;

    hitung_luas(panjang, lebar);


    return 0;
}