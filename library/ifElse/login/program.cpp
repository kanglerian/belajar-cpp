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