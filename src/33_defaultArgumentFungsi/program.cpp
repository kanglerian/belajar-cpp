#include <iostream>
using namespace std;

double volume_kubus(double p = 1, double l = 1, double t = 2);

int main(){

    cout << "Volume kubus: " << volume_kubus() << endl;
    return 0;
}

// default argument atau nilai standarnya.
double volume_kubus(double p, double l, double t){
    return p * l * t; 
}