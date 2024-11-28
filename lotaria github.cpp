#include <iostream>
#include <string>
#include <ctime>
#include <random>
#include <locale.h>
#include <cstdlib>
void main()
{
	setlocale(LC_ALL, "Portuguese");
	using namespace std;
	srand(time(0));	
	int randoms[5],apostas[5], i, j, contador = 0; //(professora preciso de ajuda)//
	/*string numeros[5];*/
	for (i = 0; i < 5; i++) {
		randoms[i] = rand() % 50 + 1;
			/*cout << randoms[i] << "\n";*/
	}
	for (i = 1; i < 6; i++) {
		cout << "Diz me a aposta\n";
		cin >> apostas[i];
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (apostas[i] == randoms[j])
			{
				contador = contador + 1;
			}
		}
	}
	cout << contador;
}