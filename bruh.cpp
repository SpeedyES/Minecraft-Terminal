//szablon kodu
#include <iostream>

using namespace std;

int main()
{
    
}

// powtórz kod określoną przez użytkownika ilość razy
#include <iostream>

using namespace std;

string imie; int liczba;

int main()
{
    cout << "Podaj imie:";
    cin >> imie;
    cout << "Podaj dodatnia liczbe calkowita:";
    cin >> liczba;

    for (int i = 1; i <= liczba; i++)
    {
        cout << i << ". " << imie << endl;
    }
}

// powtórz kod aż zmienna wyniesie liczbę określoną przez programistę
#include <iostream>

using namespace std;

int populacja = 1; int godzin = 0;

int main()
{
    while (populacja <= 1000000000) //powtarzaj aż zmienna "populacja" osiągnię liczbę mniejszą lub równą miliard
    //do
    {
        godzin++; //godzin + 1
        populacja = populacja * 2;

        cout << "minelo godzin: " << godzin;
        cout << " liczba bakterii: " << populacja << endl;

    } //while(populacja<=x);

    return 0;
}

//losowanie liczb i wyliczanie prob trafienia liczby przez uzytkownika
#include <iostream>
#include <cstdlib>
#include <time.h> //ctime
//#include <stdio.h>

using namespace std;

int liczba, strzal, prob = 0;

int main()
{
	cout << "Witaj! Pomyslalem sobie liczbe 1..100" << endl;
	srand(time(NULL));
	liczba = rand() % 100 + 1; //liczba zawsze musi być o 1 większa by uzyskać np. 1..100
	cout << liczba << endl;

	while (strzal != liczba) //petla zakonczy sie po zrownaniu sie dwoch zmiennych
	{
		prob++;

		cout << "Zgadnij jaka (to twoja " << prob << " proba):" << endl;
		cin >> strzal;

		if (strzal == liczba)
			cout << "Udalo sie! Wygrywasz w " << prob << " probie." << endl;
		else if (strzal < liczba)
			cout << "To za malo." << endl;
		else if (strzal > liczba)
			cout << "To za duzo." << endl;
	}

	system("pause"); //getchar()

	return 0;
}
//losowanie z timerem i audio
#include <iostream>
#include <windows.h>

using namespace std;

int liczba;

int main()
{
	cout << "Witaj w losowaniu! Za 3 sakundy nastapi zwolnienie blokady.";
	Sleep(3000);
	cout << endl;

	srand(time(NULL));

	for (int i = 1; i <= 6; i++)
	{
		liczba = rand() % 49 + 1;
		Sleep(1000);
		cout << liczba << "\a" << endl;
	}
	return 0;
}
