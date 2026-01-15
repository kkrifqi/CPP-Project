#include <iostream>
using namespace std;

int main(){
	int program;
	cout<<"Program hitung luas dan volume bangun ruang\n\n";
	cout<<"1. Program hitung luas\n";
	cout<<"2. Program hitung volume\n";
	cout<<"Pilih program yang ingin dijalankan : ";
	cin>>program;
	
	if(program==1){
		cout<<endl;
		int bangun;
		cout<<"Program hitung luas\n\n";
		cout<<"1. Tabung\n";
		cout<<"2. Kerucut\n";
		cout<<"3. Bola\n";
		cout<<"4. Trapesium\n";
		cout<<"Pilih bangun yang ingin dihitung luas nya : ";
		cin>>bangun;
		
		if (bangun==1){
			cout<<endl;
			int r,t;
			float l;
			cout<<"Hitung luas permukan tabung\n";
			cout<<"Input jari-jari ";
			cin>>r;
			cout<<"Input tinggi ";
			cin>>t;
			l=2*3.14*r*(r+t);
			cout<<"Luas permukaan tabung adalah "<<l;
		}
		else if(bangun==2){
			cout<<endl;
			int r,s;
			float l;
			cout<<"Hitung luas permukaan kerucut\n";
			cout<<"Input jari-jari ";
			cin>>r;
			cout<<"Input garis pelukis ";
			cin>>s;
			l=3.14*r*(r+s);
			cout<<"Luas permukaan kerucut adalah "<<l;
		}
		else if(bangun==3){
			cout<<endl;
			int r;
			float l;
			cout<<"Hitung luas permukaan bola\n";
			cout<<"Input jari-jari ";
			cin>>r;
			l=4*3.14*r*r;
			cout<<"Luas permukaan bola adalah "<<l;
		}
		else if(bangun==4){
			cout<<endl;
			int a,b,t,k,tp;
			float l;
			cout<<"Hitung luas permukaan prisma trapesium\n";
			cout<<"Input panjang alas 1 ";
			cin>>a;
			cout<<"Input panjang alas 2 ";
			cin>>b;
			cout<<"Input tinggi trapesium ";
			cin>>t;
			cout<<"Input keliling trapesium ";
			cin>>k;
			cout<<"Input tinggi prisma ";
			cin>>tp;
			l=(a+b)*t+k*tp;
			cout<<"Luas permukaan trapesium adalah "<<l;
		}
	}
	else if(program==2){
		cout<<endl;
		int bangun;
		cout<<"Program hitung volume bangun ruang\n\n";
		cout<<"1. Tabung\n";
		cout<<"2. Kerucut\n";
		cout<<"3. Bola\n";
		cout<<"4. Trapesium\n";
		cout<<"Pilih bangun ruang ";
		cin>>bangun;
		
		if(bangun==1){
			cout<<endl;
			int r, t;
			float v;
			cout<<"program hitung volume tabung \n\n";
			cout<<"input jari jari tabung: ";
			cin>>r;
			cout<<"input tinggi tabung: ";
			cin>>t;
			v=3.14*r*r*t;
			cout<<"volume tabung adalah "<<v;
		}
		else if(bangun==2){
			cout<<endl;
			int r, t;
			float v;
			cout<<"program hitung volume kerucut \n\n";
			cout<<"input jari jari: ";
			cin>>r;
			cout<<"input tinggi: ";
			cin>>t;
			v=1*3.14*r*r*t/3;
			cout<<"volume kerucut adalah: "<<v;
		}
		else if(bangun==3){
			cout<<endl;
			int r, v;
			cout <<"program hitung volume bola \n\n";	
			cout<<"input jari jari: ";
			cin>>r;
			v=3.14*4/3*r*r*r;
			cout<<"volume bola adalah: "<< v;
		}
		else if(bangun==4){
			cout<<endl;
			int  a, b, h, l;
			float v;
			cout << "program hitung volume prisma trapesium \n\n";
			cout << "input sisi trapesium 1 : ";
			cin >>a;
			cout << "input sisi trapesium 2 : ";
			cin >>b;
			cout<< "input tinggi trapesium : ";
			cin>> h;
			cout<< "input panjang trapesium : ";
			cin>>l;
			v=(a+b)*h*l/2;
			cout << "volume prisma trapesium adalah: "<<v;
		}
	}
	else{
		cout<<endl;
		cout<<"APALAH";
	}
	return 0;
}
