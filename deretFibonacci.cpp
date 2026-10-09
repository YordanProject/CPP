#include <iostream>

using namespace std;

int main(){
    // Deret fibonacci adalah angka setelahnya dijumlahkan dengan dua angka sebelumnya
    // f(n) = f(n-1) + f(n-2)

    int n;
    int f_n;
    int f_n1;
    int f_n2;

    cout<<"Deret Fibonacci"<<endl;
    cout<<"Masukan nilai n = ";
    cin>>n;

    f_n1 = 1;
    f_n2 = 0;
    cout<<f_n<<endl;
    for(int i = 1; i < n; i++){
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;

        cout<< f_n<<endl;
    }

    return 0;
}