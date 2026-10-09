#include <iostream>
using namespace std;

double volume_kubus(double p = 1, double l = 1, double t = 1);

int main(){
    cout<<"Volume kubus: "<<volume_kubus(3,4,5)<<endl;
    cout<<"Volume kubus: "<<volume_kubus(3,4)<<endl;
    cout<<"Volume kubus: "<<volume_kubus(3)<<endl;
    cout<<"Volume kubus: "<<volume_kubus()<<endl;

    return 0;
}

// Default Argumen atau nilai standar
double volume_kubus(double p, double l, double t){
    return p * l * t;
}