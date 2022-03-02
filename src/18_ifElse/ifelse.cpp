#include <iostream>

using namespace std;

int main(){

    int a, b, c;
    char aritmatika;
    
    cout << "Masukan angka pertama: ";
    cin >> a;
    cout << "Masukan operator: ";
    cin >> aritmatika;
    cout << "Masukan angka kedua: ";
    cin >> b;

    if( aritmatika == '+'){
        c = a + b;
        cout << "Hasil dari " << a << " + " << b << " adalah: " << c << endl;
    }else if( aritmatika == '-'){
        c = a - b;
        cout << "Hasil dari " << a << " - " << b << " adalah: " << c << endl;
    }else if( aritmatika == '*'){
        c = a * b;
        cout << "Hasil dari " << a << " * " << b << " adalah: " << c << endl;
    }else if( aritmatika == '/'){
        c = a / b;
        cout << "Hasil dari " << a << " / " << b << " adalah: " << c << endl;
    }else{
        cout << "Maaf, operator aritmatika salah" << endl;
    }

    return 0;
}