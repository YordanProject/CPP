#include <iostream>
#include <cstdlib>  // Fungsi random

using namespace std;

int main(){

    char lanjut;

    cout<<"=== Selamat datang di program lempar dadu! ==="<<endl;

    while(true){
        cout<<"Apakah ingin melempar dadu ? (y/n) ";
        cin>>lanjut;
        if(lanjut == 'y'){
            cout<< 1 + (rand() % 6)<<endl;
        }else if(lanjut == 'n'){
            break;
        }else{
            cout<<"Mohon memilih y atau n !!"<<endl;
        }
    }

    cout<<"=== Program lempar dadu selesai!! ==="<<endl;

    return 0;
}