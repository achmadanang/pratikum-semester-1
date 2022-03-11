#include <conio.h>
#include <iostream>
#include <string>
using namespace std;
main()
{
	int jumlah_07417;
	int ipa_07417[100],ips_07417[100],mtk_07417[100],rata_rata_07417[100];
	string nama_07417[100];
	
	cout<<"masukan input ";
	cin>>jumlah_07417; 
	
	for (int i=0;i<jumlah_07417;i++)
	{
		cout<<"hahasiswa ke "<<i+1<<endl;
		cout<<"nama mahasiswa ";
		cin>>nama_07417[i];
		cout<<"ipa: ";
		cin>>ipa_07417[i];
		cout<<"ips: ";
		cin>>ips_07417[i];
		cout<<"mtk: ";
		cin>>mtk_07417[i];
		rata_rata_07417[i]=(ipa_07417[i]+ips_07417[i]+mtk_07417[i])/3;
	}
	cout<<endl;
	cout<<"rata-rata setiap mahasiswa "<<endl;
	for (int i=0;i<jumlah_07417;i++)
	{
		cout<<"rata-rata "<<nama_07417[i]<<" :"<<rata_rata_07417[i]<<endl;
	}
}
