# **Program C++ Sederhana - If Else Program**

> Mencoba untuk membuat sebuah program sederhana yaitu menghitung angka seperti layaknya kalkulator.

### Program Kalkulator
> Disini kita mencoba untuk memasukan angka pertama, operator aritmatika dan angka kedua maka akan muncul hasilnya.

```cpp
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
```

### Program Login Sederhana
> Disini kita mencoba untuk memasukan username dan pin untuk aktivitas login.

```cpp
#include <iostream>
#include <string>

using namespace std;

int main(){

    string username, pin;

    cout << "Silahkan login:" << endl;
    cout << "Username: ";
    cin >> username;
    cout << "PIN: ";
    cin >> pin;

    if(username == "kanglerian" and pin == "55156" ){
        cout << "Selamat datang!" << endl;
    }else{
        cout << "Username atau PIN salah!" << endl;
    }


    return 0;
}
```