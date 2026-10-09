#include <iostream>
using namespace std;

// Global Scope
int x = 10;

// Mengambil variable global
int ambil_global(){
    return x;
}

// Variable local scope x_local
int x_local(){
    int x = 5;
    return x;
}

int main(){
    cout<<"1. Variable global = "<<x<<endl;
    int x = 8; // Variable local untuk main function
    cout<<"2. Variable local main = "<<x<<endl;
    cout<<"3. Variable ambil_global = "<<ambil_global()<<endl;
    cout<<"4. Variable local main = "<<x<<endl;
    cout<<"5. Variable x_local = "<<x_local()<<endl;
    cout<<"6. Variable local main = "<<x<<endl;
    cout<<"7. Variable local main = "<<x<<endl;

    // Block Scope contoh : 
    if(true){
        cout<<"8. Variable local main = "<<x<<endl; // Mengambil lokal main
        int x = 1;
        cout<<"9. Variable local block = "<<x<<endl; // Mengeluarkan lokal block
        cout<<"10. Variable global = "<< ::x <<endl; // Mengambil variable global

    } // Block scope tidak bisa mengganti variable local main
    cout<<"11. Variable local main = "<<x<<endl;

    return 0;
}