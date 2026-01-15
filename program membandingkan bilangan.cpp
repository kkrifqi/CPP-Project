#include <iostream>
using namespace std;

int main (){
	int bil1,bil2,bil3;
	cout<<"Program untuk menentukan\n\n";
	cout<<"input bilangan 1 ";
	cin>>bil1;
	cout<<"input bilangan 2 ";
	cin>>bil2;
	cout<<"input bilangan 3 ";
	cin>>bil3;
	
	if(bil1<bil2&bil1>bil3){
		cout<<endl;
		cout<<"bilangan "<<bil1<<" lebih kecil dari "<<bil2<<" dan lebih besar dari "<<bil3;
	}
	if(bil1<bil2&bil1<bil3){
		cout<<endl;
		cout<<"bilangan "<<bil1<<" lebih kecil dari "<<bil2<<" dan lebih kecil dari "<<bil3;
	}
	if(bil1<bil2&bil1==bil3){
		cout<<endl;
		cout<<"bilangan "<<bil1<<" lebih kecil dari "<<bil2<<" dan sama dengan "<<bil3;
	}
	if(bil1>bil2&bil1<bil3){
		cout<<endl;
		cout<<"bilangan "<<bil1<<" lebih besar dari "<<bil2<<" dan lebih kecil dari "<<bil3;
	}
	if(bil1>bil2&bil1>bil3){
		cout<<endl;
		cout<<"bilangan "<<bil1<<" lebih besar dari "<<bil2<<" dan lebih besar dari "<<bil3;
	}
	if(bil1>bil2&bil1==bil3){
		cout<<endl;
		cout<<"bilangan "<<bil1<<" lebih besar dari "<<bil2<<" dan sama dengan "<<bil3;
	}
	if(bil1==bil2&bil1<bil3){
		cout<<endl;
		cout<<"bilangan "<<bil1<<" sama dengan "<<bil2<<" dan lebih kecil dari "<<bil3;
	}
	if(bil1==bil2&bil1>bil3){
		cout<<endl;
		cout<<"bilangan "<<bil1<<" sama dengan "<<bil2<<" dan lebih besar dari "<<bil3;
	}
	if(bil1==bil2&bil1==bil3){
		cout<<endl;
		cout<<"bilangan "<<bil1<<" sama dengan "<<bil2<<" dan sama dengan "<<bil3;
	}
	
	return 0;
}
