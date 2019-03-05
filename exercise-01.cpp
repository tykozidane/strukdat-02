/*
Nama	: tyko zidane badhawi
NPM		: 140810180031
Kelas	: A
Program	: move zero to end
*/
#include<iostream>
#include<string.h>
using namespace std;

struct orang{
	int umur;
	char nama[30];
	char jk;
	char gd;
};

main()
{
	orang orang;
	orang.umur=10;
	strcpy(orang.nama, "fahmi");
	orang.jk='L';
	orang.gd='O';
	
	cout << orang.umur << endl;
	cout << orang.nama << endl;
	cout << orang.gd << endl;
	cout << orang.jk << endl;
}
