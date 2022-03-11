#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{
	char kata1[100],kata2[100];
    int jumlah,n;
	
	cout<<"masukan kata1 "; 
	cin.getline(kata1, sizeof (kata1));
	cout<<"masukan kata2 ";
	
	cin.getline(kata2, sizeof (kata2));
	strcat(kata1,kata2);
	jumlah=strlen(kata1);
	cout<<endl;
	cout<<" hasil "<<kata1<<endl;
	
	cout<<"total "<<jumlah;
}
