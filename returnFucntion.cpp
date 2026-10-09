#include <iostream>

using namespace std;

int tambah(int firstNum, int secondNum){
    int hasil;
    hasil = firstNum + secondNum;
    return hasil;
}

int kali(int firstNum, int secondNum){
    int hasil;
    hasil = firstNum * secondNum;
    return hasil;
}

int main(){
    int a, b, hasil;
    char c;
    cout<<"Masukan nilai pertama : ";
    cin>>a;

    cout<<"Masukan perkalian atau pengurangan: (*/+) ";
    cin>>c;

    cout<<"Masukan niai kedua : ";
    cin>>b;

    
    if(c == '+'){
        cout<<"Hasil pertambahan = "<<tambah(a,b);
    } else if(c == '*'){
        cout<<"Hasil perkalian = "<<kali(a,b);
    }else{
        cout<<"Masukan penjumlahan atau perkalian ya!"<<endl;
    }
    
    cout<<"Program Selesai!"<<endl;
    
    return 0;
}