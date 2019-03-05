/*
Nama	: tyko zidane badhawi
NPM		: 140810180031
Kelas	: A
Program	: move zero to end
*/
#include<iostream>
using namespace std;

struct data{
	char nip[5];
	char nama[30];
	int gol;
	int gaji;
};

typedef data gaji;
void inputpegawai(int n, gaji& pegawai)
{
	for (int i=0; i<n; i++)
	{
		cout << "Nama	: "; cin.getline(pegawai[i].nama, 30);
		cout << "NIP	: " ; cin >> pegawai[i].nip;
		cout << "Gol	: " ; cin >> pegawai[i].gol;
	}
}
void cetakdaftar(int n, gaji pegawai)
{
	cout <<"--------------------------------------------------------\n";
	cout << "No.\tNIP\tNama\t\tGol\tGaji";
	cout << "-------------------------------------------------------\n";
	for (int i=0; i<n; i++)
	{
		cout << i+1 << "\t|" << pegawai[i].nip << "\t|" << pegawai[i].nama << "\t\t|" << pegawai[i].gol << "\t" << pegawai[i].gaji;
		cout << endl;  
	}
	
}
void carigaji(int n, gaji& pegawai)
{
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			if (pegawai[j].nip>pegawai[j+1].nip)
			swap(pegawai[j].gaji,pegawai[j+1].gaji)
			swap(pegawai[j].gol,pegawai[j+1].gol)
			swap(pegawai[j].nama,pegawai[j+1].nama)
			swap(pegawai[j].nip,pegawai[j+1].nip)
		}
		if (pegawai[i].gol==1)
		pegawai[i].gaji=2000000;
		else if (pegawai[i].gol==2)
		pegawai[i].gaji=3000000;
		else if (pegawai[i].gol==3)
		pegawai[i].gaji=5000000;
		else if (pegawai[i].gol==4)
		pegawai[i].gaji=8000000;
	}
}

void ratagaji(int n, gaji pegawai, int& rata)
{
	for (int i=0; i<n; i++)
	{
		rata+=pegawai[i].gaji;
	}
	cout << "rata-rata gaji	: " << rata/n << endl;
	
}
void gajiterendah(int n, gaji pegawai)
{
	int a=pegawai[0].gaji;
	for (int i=0; i<n; i++)
	{
		if (pegawai[i].gaji<pegawai[i+1].gaji)
		a=pegawai[i].gaji;
	}
	cout << "gaji terndah	: " << a << endl;
	
}
void gajitertinggi(int n, gaji pegawai)
{
	int a=pegawai[0].gaji;
	for (int i=0; i<n; i++)
	{
		if (pegawai[i].gaji>pegawai[i+1].gaji)
		a=pegawai[i].gaji;
	}
	cout << "gaji terndah	: " << a << endl;
	
	
}

int main()
{
	gaji pegawai;
	int n, rata;
	cout << "banyak data peawai	: "; 
	cin >> n;
	inputpegawai(n, pegawai);
	carigaji(n, pegawai);
	cetakdaftar(n, pegawai);
	ratagaji(n, pegawai, rata);
	gajiterendah(n, pegawai);
	gajitertinggi(n, pegawai);
}
