#include <iostream>
using namespace std;

int main (){
	int b;
	cout<<"PROGRAM MENENTUKAN GANJIL GENAP\n\n";
	cout<<"Masukkan bilangan : ";
	cin>>b;
	
	if (b % 2 == 0) {
		cout<<endl;
	    cout <<b<< " adalah bilangan genap";
	}
	else {
	  	cout<<endl;
	    cout <<b<< " adalah bilangan ganjil";
	}
	return 0;
}
