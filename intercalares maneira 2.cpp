#include <iostream>
void main()
{
	using namespace std;
	int n1[10], n2[10], i, n3[20];
	for (i = 0; i < 10; i++)
	{
		cout << "Diz me o teu " << i + 1 << " numero";
		cin >> n1[i];
	}
	for (i = 0; i < 10; i++)
	{
		cout << "Diz me o teu " << i + 1 << " numero(para o segundo vetor)";
		cin >> n2[i];
	}
	for (i = 0; i < 10; i++)
	{
		n3 = [i * 2] = n1[i]
		n3 = [i*2+1]=n2[i]
	}
	for (i = 0; i < 20; i++)
	{
		cout << n3;
	}
}
