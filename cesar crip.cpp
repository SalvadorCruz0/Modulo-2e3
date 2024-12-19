#include <iostream>
int main()
{
	setlocale(LC_ALL, "portuguese");
	using namespace std;
	char alfa[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}, frase[134];
	int deslo, i, devol, pos = 0, letras, j, contar = 0;
	cout << "Diz me o numero de deslocamento que queres meter";
	cin >> deslo;

	cout << "Quantas letras tem essa frase ? ";
	cin >> letras;
    cout << "Diz me a frase que queres mandar para o traficante da professora";
for (i = 0; i < letras; i++)
{
	cin >> frase[i];
}
	for (i = 0; i < letras; i++)
	{
		for (j = 0; j < 26; j++) 
		{
			if (frase[i] == alfa[j]) 
			{
				if (j + deslo > 25)
				{
	               cout <<alfa[(j+deslo)%26];
				}
				else
				{
					cout << alfa[j + deslo];
				}
			}
		}
	}
}
