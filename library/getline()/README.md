# **Program C++ Sederhana - Ucapan salam**

> Membuat form input sederhana menggunakan `getline()`. `getline()` ini digunakan untuk mendapatkan hasil input berupa spasi. Dan jika halnya `cin` saja maka `space` tidak akan tersimpan.

```cpp
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string salam, nama;
 
    cout << "Masukan salam: ";
    getline(cin, salam);
    cout << "Masukan nama lengkap: ";
    getline(cin, nama);
    cout << salam << " " << nama << endl;
 
    return 0;
}
```