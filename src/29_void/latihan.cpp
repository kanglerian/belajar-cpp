#include <iostream>

using namespace std;

int kuadrat(int x){
    int y;
    y = x * x;
    return y;
}

void tampilkan(int input, int hasil){
    cout << "Hasil dari kuadrat " << input << " adalah: " << hasil << endl;
}

int main(){

    int a, b, hasil, input;

    cout << "Nilai kuadrat dari: ";
    cin >> input;

    hasil = kuadrat(input);
    tampilkan(input,hasil);


    return 0;
}