#include <iostream>
using namespace std;

main()
{
	int hadiah_07417,jumlah_07417,hasil_07417,siswa_07417;
	float pajak_07417=0.20;
	hadiah_07417=10500000;
	
	cout<<"banyak siswa "; cin>>siswa_07417;
	jumlah_07417=hadiah_07417-(10500000*0.20);
	hasil_07417=jumlah_07417/siswa_07417;
	
	cout<<"hadiah yang di menangkan "<<hadiah_07417<<endl;
	cout<<"hadiah setelah potong pajak "<<jumlah_07417<<endl;
	cout<<"masing-masing siswa mendapatkan "<<hasil_07417;
}
