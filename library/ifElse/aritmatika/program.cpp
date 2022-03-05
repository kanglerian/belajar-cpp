#include <iostream>

using namespace std;

int main(){

    int angka_1, angka_2, hasil;
    char aritmatika;

    cout << "Masukan angka pertama: ";
    cin >> angka_1;
    cout << "Masukan operator: ";
    cin >> aritmatika;
    cout << "Masukan angka kedua: ";
    cin >> angka_2;

    if(aritmatika == '+'){
        hasil = angka_1 + angka_2;
        cout << "Hasil dari " << angka_1 << " + " << angka_2 << " adalah " << hasil << endl;
    }else if (aritmatika == '-'){
        hasil = angka_1 - angka_2;
        cout << "Hasil dari " << angka_1 << " - " << angka_2 << " adalah " << hasil << endl;
    }else if (aritmatika == '*'){
        hasil = angka_1 * angka_2;
        cout << "Hasil dari " << angka_1 << " * " << angka_2 << " adalah " << hasil << endl;
    }else if (aritmatika == '/'){
        hasil = angka_1 / angka_2;
        cout << "Hasil dari " << angka_1 << " / " << angka_2 << " adalah " << hasil << endl;
    }else{
        cout << "Operator salah. Gunakan +, -, *, /" << endl;
    }

    return 0;
}