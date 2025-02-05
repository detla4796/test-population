#include <iostream>
#include <filesystem>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	ifstream f1("Population.txt");
	vector <string> country;
	string s;
	if (f1.is_open())
	{
		while (getline(f1, s))
		{
			country.push_back(s);
		}
	}
	f1.close();

	for (int i = 65; i < 91; i++)
	{
		ofstream alphabet("Country\\" + string(1, char(i)) + ".txt", ios::app);
		for (auto v : country)
		{
			if (v[0] == char(i))
			{
				alphabet << v << endl;
			}
		}
	}

	for (int i = 65; i < 91; i++)
	{
		long long smp{ 0 };
		int count = 0;
		int k = 0;
		string strana;
		ifstream alphabet_in("Country\\" + string(1, char(i)) + ".txt", ios::app);
		while (alphabet_in >> strana)
		{
			if ((strana[0] >= 48) && (strana[0] <= 57))
			{
				count++;
				smp += stol(strana);
				if (stol(strana) > 100000000)
				{
					k++;
				}
			}
		}
		ofstream alphabet_out("Country\\" + string(1, char(i)) + ".txt", ios::app);
		alphabet_out << "\nTotal population: " << smp << endl;
		alphabet_out << "\nNumber of countries: " << count << endl;
		alphabet_out << "\nAverage population: " << (count ? smp / count : 0) << endl;
		alphabet_out << "\nNumber of countries with a population of more than 100 million: " << k;
	}
}
