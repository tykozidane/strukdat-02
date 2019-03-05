/*
Nama	: tyko zidane badhawi
NPM		: 140810180031
Kelas	: A
Program	: move zero to end
*/
#include<iostream>
using namespace std;

void movezerotoend(int arr[], int n)
{
	for (int i=0; i<n; i++)
	{
	
		if (arr[i]==0)
		{
			swap(arr[i],arr[i+1]);
		}
	}
}
void input (int (&arr)[100], int& n)
{
	cout << "berapa angka	: ";
	cin >> n;
	cout << "input angka	: ";
	for (int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	
}
void output (int arr[], int n)
{
	for (int i=0; i<n; i++)
	{
		cout << arr[i] << ", ";
	}
}

int main()
{
	int arr[100];
	int n;
	input (arr, n);
	movezerotoend (arr, n);
	output (arr, n);
}
