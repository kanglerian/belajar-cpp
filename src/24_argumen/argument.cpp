
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