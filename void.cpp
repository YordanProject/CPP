#include <iostream>

using namespace std;

// Reporter (Fungsi yang mengembalikan nilai)
int kuadrat(int x){
    int y;
    y = x * x;
    return y;
}

// Worker (Fungsi yang tidak mengembalikan)
void tampilkan(int input){
    cout<<"Menampilkan hasil dengan VOID\n";
    cout<<"Hasil kuadrat = "<<input<<endl;
}

int main(){
    int x, hasil;
    
    cout<<"Masukan nilai kuadrat: ";
    cin>>x;
    hasil = kuadrat(x);
    tampilkan(hasil);


}