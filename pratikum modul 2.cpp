#include <iostream>
using namespace std;

int main ()
{

   int angka1_07417,angka2_07417,bintang_07417,plus_07417,n;
   
   cout<<"angka = ";
    cin>>n;
    
   for (angka1_07417=1;angka1_07417<=n;angka1_07417++)
   {
     cout<<""<<angka1_07417;
   }
   cout<<endl;
    for (angka2_07417=2;angka2_07417<n;angka2_07417++)
	{
     cout<<" "<<angka2_07417;

        for (bintang_07417=2;bintang_07417<=n;bintang_07417++)
		{
		if (bintang_07417>=2 && bintang_07417<=n-1)
             cout<<" *";
        if (bintang_07417==n)
             cout<<" +";
        }
        cout<<endl;
    }
    cout<<" "<<n;
    
       for (plus_07417=1;plus_07417<n;plus_07417++)
	{
             cout<<" +";
    }
}
