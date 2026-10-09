#include <iostream>
using namespace std;

// Prototype
int faktorial(int n);

int main(){
    int angka, hasil;
    cout<<"Menghitung faktorial dari: ";
    cin>>angka;

    hasil = faktorial(angka);
    cout<<"Nilai faktorialnya adalah: "<<hasil<<endl;

    return 0;
}

int faktorial(int n){
    if(n <= 1){
        cout<< n<<endl;
        return n;
    } else{
        cout<< n <<" x ";
        return n * faktorial(n - 1);
    }
}