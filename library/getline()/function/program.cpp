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