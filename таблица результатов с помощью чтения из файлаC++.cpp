#include <iostream>
#include<string>
#include <windows.h>
#include <fstream>
#include <vector>

using namespace std;

struct game
{
	int num[20];
	int zab[20];
	int prop[20];

};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream f1("1.txt");
	if (!f1.is_open())
	{
		cout << "нЕ МОГУ  ";
		return 0;
	}
	game obj;
	int n = 0;
	while (!f1.eof())
	{
		for (int i = 0; i < 20; i++)
			f1 >> obj.num[i];
		for (int i = 0; i < 20; i++)
			f1 >> obj.zab[i];
		for (int i = 0; i < 20; i++)
			f1 >> obj.prop[i];
	}

	for (int i = 0; i < 20; i++)
	{
		cout << obj.num[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << obj.zab[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << obj.prop[i] << "\t";
	}

	vector <int> zabb;
	vector <int> propp;
	for (int i = 0; i < 20; i++)
		zabb.push_back(obj.zab[i]);
	for (int i = 0; i < 20; i++)
		propp.push_back(obj.prop[i]);
	cout << endl;
	cout << "Результаты: " << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << "Команда " << obj.num[i] << ": " << obj.zab[i] << " - забито; " << obj.prop[i] << " - пропущено; ";


		if (zabb[n] > propp[n])
			cout << "ВЫИГРАЛИ" << endl;
		if (zabb[n] < propp[n])
			cout << "вы играли." << endl;
		if (zabb[n] == propp[n])
			cout << "ПОБЕДИЛА ДРУЖБА" << endl;
		n++;

	}