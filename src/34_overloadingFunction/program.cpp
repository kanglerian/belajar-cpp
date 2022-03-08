#include <iostream>
using namespace std;
// overloading = menimpa

// basic function
int luas_kotak(int panjang, int lebar){ 
    int luas = panjang * lebar;
    return luas;
}

// overloading function: bakalan milih sendiri
int luas_kotak(int sisi){
    int luas = sisi * sisi;
    return luas;
}

// ditimpa karena no.3 adalah double. Milih sendiri
double luas_kotak(double sisi){
    double luas = sisi * sisi;
    return luas;
}

int main(){

    cout << "Luas tanah 2x3: " << luas_kotak(2,3) << endl;
    cout << "Luas tanah 2x2: " << luas_kotak(2) << endl;
    cout << "Luas tanah 2x2: " << luas_kotak(2.5) << endl;
    return 0;
}