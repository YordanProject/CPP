#include <iostream>
using namespace std;

// Prototype
int fibonacci(int n);

int main(){
    int angka, hasil;

   cout<<"Menghitung Fibonacci ke: ";
    cin>>angka;
    hasil = fibonacci(angka);
    cout<<"Nilainya adalah: "<<hasil<<endl;
}

int fibonacci(int n){
    // cout<<n<<endl;
    if((n == 0)||(n == 1)){
        return n;
    } else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}