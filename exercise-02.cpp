/*
Nama	: tyko zidane badhawi
NPM		: 140810180031
Kelas	: A
Program	: move zero to end
*/
#include<iostream>
#include<string.h>
using namespace std;

struct theater {
	int room;
	char seat[3];
	char mt[30];		// Movie title		
};

int main()
{
	theater data;
	data.room=7;
	strcpy(data.seat, "J9");
	strcpy(data.mt, "Adit&Jarwo");
	cout << "Room		: " << data.room << endl;
	cout << "Seat		: " << data.seat << endl;
	cout << "MovieTitle	: " << data.mt << endl;
}
