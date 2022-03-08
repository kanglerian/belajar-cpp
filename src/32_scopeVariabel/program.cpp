#include <iostream>
using namespace std;

int x = 10; // variabel global

int ambil_global(){
    return x; // ambil variabel global
}

int x_local(){
    int x = 3;
    return x; // variabel scope local x_global
}

int main(){

    cout << "1. Ambil variabel global: " << x << endl;
    int x = 8; // variabel local untuk main
    cout << "2. Ambil variabel local main: " << x << endl;
    cout << "3. Ambil variabel ambil_global: " << ambil_global() << endl;
    cout << "4. Ambil variabel x_local: " << x_local() << endl;
    cout << "5. Ambil variabel local main: " << x << endl;

    if(true){
        cout << "6. Ambil variabel local main: " << x << endl;
        int x = 1; // block scope
        cout << "7. Ambil variabel local block: " << x << endl;
    }
    cout << "8. Ambil local main: " << x << endl;

    return 0;
}