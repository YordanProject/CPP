#include <iostream>
using namespace std;

double hitung_luas(double p, double l){
    double luas = p * l;
    return luas;
}

double hitung_keliling(double p, double l){
    double keliling = 2 * (p * l);
    return keliling;
}

void tampilkanLuas(double p, double l){
    cout<<"Luasnya adalah = ";
    cout<<hitung_luas(p,l)<<endl;
}

void tampilkanKeliling(double p, double l){
    cout<<"kelilingnya adalah = ";
    cout<<hitung_keliling(p,l)<<endl;
}

int main(){
    double panjang, lebar;
    cout<<"Panjang: ";
    cin>>panjang;

    cout<<"Lebar: ";
    cin>>lebar;

    tampilkanLuas(panjang, lebar);
    tampilkanKeliling(panjang,lebar);

    return 0;
}