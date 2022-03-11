#include <iostream>
#include <string.h>
using namespace std;

main()
{
	char kata1_07417[100], kata2_07417[100];
	cout<<"Masukan Kalimat:";
	cin>>kata1_07417;
	strcpy(kata2_07417, kata1_07417);
	strrev(kata1_07417);
	cout<<"kalimat dibalik:"<<kata1_07417<<endl;
	cout<<"ejaan lama:";
	for (int i=0; i<strlen(kata2_07417); i++)
	{
		if (kata2_07417[i]=='u')
		{
			cout<<"oe";
		}
		else if (kata2_07417[i]=='j')
		{
			cout<<"dj";
		}
		else if (kata2_07417[i]=='y')
		{
			cout<<"j";
		}
		else if (kata2_07417[i]=='c')
		{
			cout<<"tj";
		}
		else
		{
			cout<<kata2_07417[i];
		}
	}
}
