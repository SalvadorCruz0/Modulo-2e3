#include <iostream>
#include <string>
#include <ctime>
#include <random>
#include <cstdlib>
void main()
{
	srand(time(0));
	using namespace std;
	int	algarismos[4], i, respostas[4], acertar = 0,vezes=0;
	for (i = 0; i < 4; i++)
	{
		respostas[i] = rand() % 2;
	}
	do {
		acertar = 0;

			for (i = 0; i < 4; i++)
			{
				cout << "Qual o " << 1 + i << " Numero?";
				cin >> algarismos[i];
			}
	
	for (i = 0; i < 4; i++)
	{
		if (respostas[i] ==algarismos[i] )
		{
			acertar++;
		}
	}
	cout << "Acertaste" << acertar;
	vezes++;
        } while (acertar != 4);
      cout << "e demoraste" << vezes << "tentativas a acertar";
}