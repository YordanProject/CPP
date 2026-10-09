#include <iostream>

using namespace std;

int main(){
	float a,b,hasil;
	char aritmatika;
	
	cout<<"Selamat Datang di Program Kalkulator"<<endl;
	
	//	Masukan input user
	cout<<"Masukan nilai pertama = ";
	cin>>a;
	cout<<"Pilih operator +,-,*,/,* = ";
	cin>>aritmatika;
	cout<<"Masukan nilai kedua = ";
	cin>>b;
			
	// Contoh dengan IF Statement
//	if(aritmatika == '+'){
//		hasil = a+b;
//		cout<<"Hasil perhitungan = ";
//		cout<<a<<aritmatika<<b<< " = "<<hasil<<endl;
//	} else if(aritmatika == '-'){
//		hasil = a-b;
//		cout<<"Hasil perhitungan = ";
//		cout<<a<<aritmatika<<b<<" = "<<hasil<<endl;
//	} else if(aritmatika == '*'){
//		hasil = a*b;
//		cout<<"Hasil perhitungan = ";
//		cout<<a<<aritmatika<<b<<" = "<<hasil<<endl;
//	} else if(aritmatika == '/'){
//		hasil = a/b;
//		cout<<"Hasil perhitungan = ";
//		cout<<a<<aritmatika<<b<<" = "<<hasil<<endl;
//	} else{
//		cout<<"Operator anda salah!!"<<endl;
//	}


//	PR Kalkulator
	switch(aritmatika){
		case '+':
			hasil = a+b;
			cout<<"Hasil perhitungan = ";
			cout<<a<<aritmatika<<b<<" = "<<hasil<<endl;
			break;
		case '-':
			hasil = a-b;
			cout<<"Hasil perhitungan = ";
			cout<<a<<aritmatika<<b<<" = "<<hasil<<endl;
			break;
		case '*':
			hasil = a*b;
			cout<<"Hasil perhitungan = ";
			cout<<a<<aritmatika<<b<<" = "<<hasil<<endl;
			break;
		case '/':
			hasil = a/b;
			cout<<"Hasil perhitungan = ";
			cout<<a<<aritmatika<<b<<" = "<<hasil<<endl;
			break;
		default:
			cout<<"Operator anda SALAH!!!"<<endl;
	}
	
	cin.get();
	return 0;	
}
