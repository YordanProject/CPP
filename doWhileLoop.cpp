#include <iostream>

using namespace std;

int main(){

        /*
            do {
                Aksi
            } while(Syarat boolean);

            Do while minimal melakukan perulangan sekali.
        */

    int a = 1;

    do{
        cout<<"Hore "<<a<<endl;
        a++;
    } while(a <= 10);

    cout<<"Selesai"<<endl;

    return 0;
}