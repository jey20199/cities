#include <iostream>
#include <map>
#include <string>
#include <exception>

using namespace std;

void main()
{
	map <string, string> cities;

	cities["Rivne"] = "33001";
	cities["Lviv"] = "55321";
	cities["Dnipro"] = "79854";
	cities["Kyiv"] = "64531";
	
	for (auto el : cities)
	{
		cout << el.first << "_____" << el.second << endl;
	}
	try {
		string city;
		cout << "Enter city";
		cin >> city;
		cout << "value" << cities[city] << endl;
	}
	catch (exception &msg) {
		cout << msg.what() << endl;
	}
	auto it = cities.find("Lviv");
	if (it != cities.end())
	{
		cout << "Found!!!" << it->second << endl;
	}
	else
		cout << "Not" << endl;
	cities["Lviv"] = "12345";
	for (auto el : cities)
	{
		cout << el.first << "_____" << el.second << endl;
	}
	system("pause");
}
