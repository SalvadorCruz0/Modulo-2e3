#include <iostream>
#include <locale.h>
#include <time.h>
#include <string>
void main()
{
	int a;
	using namespace std;
	srand(time(0));
	string Foram[5] = {"Umbolo","canibalismo","sex0","coisas","Gayzisses"};
	string Pessoas[5] = {"Joao","TiagoBoss","UlissesRacista","JP","Sigma"};
	string lugar[5] = {"Cama","Motel","Hotel","Parque","Toilet"};
	cout << "O "<< Pessoas[rand() % 5];
	cout << "Foi ao "<< lugar[rand() % 5] <<" ter um encontro com o "<<Pessoas[rand() % 5]<<"\n";
	cout << "Queres saber oque eles fizeram?>:)(1)ou(2)";
	cin >> a;
	switch (a)
	
	{
	case 1:
		cout << "Eles fizeram " << Foram[rand() % 5];
		break;
	case 2:
		cout << "Tambem nao queria te dizer";
		break;
	}
	
}