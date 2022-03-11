#include <iostream>
using namespace std;

int main()
{
	int angka_07417;
	char a_07417='A';
	cout<<"masukan ";
	cin>>angka_07417;
	cout<<"* ";
	
	for(int baris_07417=1; baris_07417<=angka_07417; baris_07417++){
		cout<<a_07417++<<" ";
	}
	cout<<endl;
	for(int baris1_07417=1; baris1_07417<=angka_07417; baris1_07417++){
		
	for(char a_07417='A', kolom_07417=1; kolom_07417<=angka_07417+1; kolom_07417++)
	{
		if(kolom_07417==1){
			cout<<baris1_07417<<" ";}
		else{
			cout<<baris1_07417<<a_07417++<<" ";
		}
	}
	cout<<endl;}
}

