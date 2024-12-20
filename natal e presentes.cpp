#include <iostream>
#include <string>
void main()
{
	using namespace std;
	string produtos[6] = { "batatasfrita","ParDemeias","chocolateComGinja","Pijama","BoloRei","Perfume" };
	string pessoas[22] = { "Clara","Abdula","Andre","Andrei","Hugo","Paloma","Joao","Leonardo","Miguel","Pedro","Pierre","Rafael","Ricardo","Salvador","Sartaj","Tiago","TomasFilipe","Ulisses","Henrise","Heros","Tomas","Tukir" };
	int a[6][22], i, j;
	for (i = 0; i < 22; i++)
	{
		for (j = 0; j < 6; j++)
		{
			cout << "Diz me quanto de " << produtos[j] << " que a " << pessoas[i] << " trouxe ? ";
			cin >> a[j][i];
		}
	}
	int resultado = 0;
	for (i = 0; i < 22; i++)
	{
		for (j = 0; j < 6; j++)
		{
			cout << pessoas[i] << " trouxe " << a[i][j] << produtos[j] << "\n";
		}
	}
	int media1;

	for (i = 0; i < 22; i++)
	{
		for (j = 0; j < 6; j++)
		{
			resultado += a[j][i];
		}
		media1 = resultado / 6;
		cout << "A media de produtos trazidos por " << pessoas[i] << " e " << media1 << "\n";
	}
	for (j = 0; j < 6; j++)
	{
		int soma = 0;
		for (i = 0; i < 22; i++)
		{
			soma += a[j][i];
		}
		int media = soma / 22;
		cout << "A média de " << produtos[j] << " é " << media << "\n";
	}
}
