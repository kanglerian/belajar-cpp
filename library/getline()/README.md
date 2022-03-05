# **Program C++ Sederhana - Ucapan salam**

> Membuat form input sederhana menggunakan `getline()`. `getline()` ini digunakan untuk mendapatkan hasil input berupa spasi. Dan jika halnya `cin` saja maka `space` tidak akan tersimpan.

1. Program Basic Input String
Disini kita mencoba untuk memasukan kalimat salam dan nama lengkap.

```cpp
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string salam, nama;
 
    cout << "Masukan salam: ";
    getline(cin, salam); // digunakan untuk menampung salam
    cout << "Masukan nama lengkap: ";
    getline(cin, nama); // digunakan untuk menampung nama
    cout << salam << " " << nama << endl;
 
    return 0;
}
```

2. Program Function Input String
Disini kita mencoba untuk memasukan kalimat salam dan nama, dengan menggunakan `function` dan `getline()`;


```cpp
#include <iostream>
#include <string>

using namespace std;

void ucapan_salam(string salam, string nama){
    cout << salam << ", " << nama << endl;
};

int main(){

    string salam, nama;
    cout << "Salam: ";
    getline(cin, salam);
    cout << "Nama: ";
    getline(cin, nama);
    ucapan_salam(salam,nama);
    
    return 0;
}
```