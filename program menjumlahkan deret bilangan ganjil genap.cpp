#include <iostream>
using namespace std;

int main (){
	
	int a,data,hp,jd;
	hp=0;
	
	cout<<"Program Hitung\n\n";
	cout<<"1. Ganjil\n";
	cout<<"2. Genap\n";
	cout<<"Pilih data : ";
	cin>>data;
	
	if(data==1){
		cout<<endl;
		cout<<"Masukkan jumlah data : ";
		cin>>jd;
		cout<<endl;
		cout<<"Hasil penjumlahan dari ";
		
		for(a=1; a<=jd; a++){
			if(a%2==1){
			cout<<a<<" ";
			hp+=a;
		  }
	   }
	   cout<<"adalah "<<hp;
	}
	else if(data==2){
		cout<<endl;
		cout<<"Masukkan jumlah data : ";
		cin>>jd;
		cout<<endl;
		cout<<"Hasil penjumlahan dari ";
		
		for(a=1; a<=jd; a++){
			if(a%2==0){
			cout<<a<<" ";
			hp=hp+a;
		  }
	   }
	   cout<<"adalah "<<hp;
	}
	return 0;
}
