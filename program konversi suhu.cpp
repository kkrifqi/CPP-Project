#include <iostream>
using namespace std;

int main(){
	int suhu;
	cout<<"Program konversi suhu\n\n";
	cout<<"1. Celsius\n";
	cout<<"2. Kelvin\n";
	cout<<"3. Reamur\n";
	cout<<"4. Fahrenheit\n";
	cout<<"Pilih suhu : ";
	cin>>suhu;
	
	if(suhu==1){
		int suhu;
		cout<<endl;
		cout<<"1. Kelvin\n";
		cout<<"2. Reamur\n";
		cout<<"3. Fahrenheit\n";
		cout<<"Celsius konversi ke ";
		cin>>suhu;
	
		if(suhu==1){
			int a,v;
			cout<<endl;
			cout<<"Input suhu celsius : ";
			cin>>a;
			v=a+273.15;
			cout<<a<<" celsius = "<<v<<" kelvin";
		}
		else if(suhu==2){
			cout<<endl;
			int a,v;
			cout<<"Input suhu celsius : ";
			cin>>a;
			v=a*4/5;
			cout<<a<<" celsius = "<<v<<" reamur";
		}
		else if(suhu==3){
			cout<<endl;
			int a,v;
			cout<<"Input suhu celsius : ";
			cin>>a;
			v=(a*9/5)+32;
			cout<<a<<" celsius = "<<v<<" fahrenheit";
		}
	}
	
	else if(suhu==2){
		int suhu;
		cout<<endl;
		cout<<"1. Celsius\n";
		cout<<"2. Reamur\n";
		cout<<"3. Fahrenheit\n";
		cout<<"Kelvin konversi ke ";
		cin>>suhu;
		
		if(suhu==1){
			int a,v;
			cout<<endl;
			cout<<"Input suhu kelvin : ";
			cin>>a;
			v=a-273.15;
			cout<<a<<" kelvin = "<<v<<" celsius";
		}
		else if(suhu==2){
			int a,v;
			cout<<endl;
			cout<<"Input suhu kelvin : ";
			cin>>a;
			v=(a-273.15)*4/5;
			cout<<a<<" kelvin = "<<v<<" reamur";
		}
		else if(suhu==3){
			int a,v;
			cout<<endl;
			cout<<"Input suhu kelvin : ";
			cin>>a;
			v=(a-273.15)*9/5+32;
			cout<<a<<" kelvin = "<<v<<" fahrenheit";
		}
	}
	else if(suhu==3){
		int suhu;
		cout<<endl;
		cout<<"1. Celsius\n";
		cout<<"2. Kelvin\n";
		cout<<"3. Fahrenheit\n";
		cout<<"Reamur konversi ke ";
		cin>>suhu;
		
		if(suhu==1){
			int a,v;
			cout<<endl;
			cout<<"Input suhu reamur : ";
			cin>>a;
			v=a*5/4;
			cout<<a<<" reamur = "<<v<<" celsius";
		}
		else if(suhu==2){
			int a,v;
			cout<<endl;
			cout<<"Input suhu reamur : ";
			cin>>a;
			v=a*5/4+273.15;
			cout<<a<<" reamur = "<<v<<" kelvin";
		}
		if(suhu==3){
			int a,v;
			cout<<endl;
			cout<<"Input suhu reamur : ";
			cin>>a;
			v=(a*9/4)+32;
			cout<<a<<" reamur = "<<v<<" fahrenheit";
		}
	}
	else if(suhu==4){
		int suhu;
		cout<<endl;
		cout<<"1. Celsius\n";
		cout<<"2. Kelvin\n";
		cout<<"3. Reamur\n";
		cout<<"Fahrenheit konversi ke ";
		cin>>suhu;
		if(suhu==1){
			int a,v;
			cout<<endl;
			cout<<"Input suhu fahrenheit : ";
			cin>>a;
			v=(a-32)*5/9;
			cout<<a<<" fahrenheit = "<<v<<" celsius";
		}
		else if(suhu==2){
			int a,v;
			cout<<endl;
			cout<<"Input suhu fahrenheit : ";
			cin>>a;
			v=(a+459.67)*5/9;
			cout<<a<<" fahrenheit = "<<v<<" kelvin";
		}
		else if(suhu==3){
			int a,v;
			cout<<endl;
			cout<<"Input suhu fahrenheit : ";
			cin>>a;
			v=(a-32)*4/9;
			cout<<a<<" fahrenheit = "<<v<<" reamur";
		}
	}
	else{
		cout<<endl;
		cout<<"Jaka sembung bawa golok";
	}
    
    return 0;
}
