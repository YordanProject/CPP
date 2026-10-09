#include <iostream>

using namespace std;

int main(){

    /*
        for(Inisialisasi; loop kondisi; increment){
            statement
        }
    */

    cout<<"Loop 1"<<endl;
    for(int counter = 1; counter <= 10; counter++){
        cout<<counter<<endl;
    }

    cout<<"Loop 2"<<endl;
    for(int i = 1; i <= 10; i += 2){
        cout<<i<<endl;
    }

    cout<<"Loop 3"<<endl;
    for(int i = 1; i >= -10; i--){
        cout<<i<<endl;
    }

    cout<<"Loop 4"<<endl;
    int total = 0;
    for(int i = 1; i <= 10; total += i, i++){
        cout<<i<<" || "<<total<<endl;
    }
    
   return 0; 
}