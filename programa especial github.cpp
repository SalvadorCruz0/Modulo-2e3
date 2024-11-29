#include <iostream>
void main()
{
	using namespace std;
	int n1[20], i, posicao = -32,maior=-20,posicao2=-33,n2,n3,contar=0;
	for (i = 0; i < 20; i++)
	{
		cout << "Diz me o " << i+1 << " numero";
		cin >> n1[i];
    }
	cout << "Diz me o numero que queres achar";
	cin >> n2;
	for (i = 0; i < 20; i++)
	{
		if (n1[i] == n2) 
		{
			contar++;
		}
	}
	if (contar > 0)
	{
		cout << "Advinhei""\n";
	}
	else
	{
		cout << "Nao havia nenhum igual a esse""\n";
	}
	for (i = 0; i < 20; i++) 
	{
		if (n1[i] > maior)
		{
			maior = n1[i];
			posicao = i;
		}
	}cout << "o maior numero esta na posicao " << posicao;
}
