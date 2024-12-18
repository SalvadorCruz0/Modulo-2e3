#include <iostream>
#include <string>
void main()
{
	using namespace std;
	int tra, letras, i;
	char frase[130], abc[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	string morse[26] = {
	".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
	"-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
	"..-", "...-", ".--", "-..-", "-.--", "--.."
	}, morsas[26];
	cout << "Quantas letras tem a frase ";
	cin >> letras;
	cout << "Queres traduzir (1) para codigo morse,clica (2) para portugues.";
	cin >> tra;
	int j;
	switch (tra)
	{
	case 1:
		cout << "Diz me a frase que queres traduzir ";
		for (i = 0; i < letras; i++)
		{
			cin >> frase[i];
			for (j = 0; j < 26; j++)
			{
				if (frase[i] == abc[j])
				{
					cout << morse[j] << " ";
				}
			}
		}break;
	case 2:
		cout << "Diz me a frase que queres traduzir para portugues (amigo).";
		for (i = 0; i < letras; i++)
		{
			cin >> morsas[i];
			for (j = 0; j < 26; j++)
			{
				if (morsas[i] == morse[j])
				{
					cout << abc[j];
				}
			}
		}break;

	}
}