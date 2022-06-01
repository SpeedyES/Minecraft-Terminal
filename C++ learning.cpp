//minecraft?
#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

using namespace std;

string player_name;
string yesno;
float menu_num;
fstream file;

int game()
{
	system("cls");
	cout << "______game______" << endl;
	cout << " " << endl;
	cout << "Welcome " << player_name << "!" << endl;
	cout << "1. Play" << endl;
	cout << "2. Settings" << endl;
	cout << "3. Exit" << endl;
	cout << " " << endl;
	cin >> menu_num;
	if (menu_num == 1)
		cout << "Play" << endl;
	else if (menu_num == 2)
		cout << "Settings" << endl;
	else if (menu_num == 3)
		system("exit");

	return 0;
}

int name()
{
	cout << "name" << endl;
	cout << "welcome!" << endl;
	cout << "type in your username: ";
	cin >> player_name;
	cout << "your new username is " << player_name << endl;
	cout << "are you sure you want to keep this as your username? (yes/no)" << endl;
	cin >> yesno;
	if (yesno = 'y', 'ye', 'yes')
		game();
	else
		name();

	return 0;
}

int main()
{
	system("nul > lol.txt");
	file.open("lol.txt", ios::in);

	if (file.good() == false) //sprawdz czy program ma dostep do pliku
	{
		cout << "Plik nie istnieje lub program ma brakujace uprawnienia";
		exit(0);
	}
	cout << "main" << endl;
	name();

	return 0;
}
