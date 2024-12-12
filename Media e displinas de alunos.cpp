#include <iostream>
#include <string>
void main ()
{
	using namespace std;
	string b[999],disciplina[999];
	int nota=0,i,a,r=0,c;
	cout << "Quantas pessoas tem a turma? ";
	cin >> a;
	
	for (i = 0; i < a; i++)
	{
		cout << "Qual o nome da " << i+1<<" pessoa""\n";
		cin >> b[i];
	}
	cout << "Quantas disciplinas eles tem  ";
	cin >> c;
	for (i = 0; i < c; i++)
	{
		cout << "Qual a " << i + 1 << " disciplina";
		cin >> disciplina[i];
	}
	int f, j;
	for (j = 0; j < c; j++); 
	{
	for (i = 0; i < c; i++)
	{
		cout << "Qual foi a nota da" << disciplina[i];
		cin >> f;
	}
	}
	int final=0;
	for (i = 0; i < c; i++){
	final = final + f;
    }cout << "A media das disciplinas " << final / c<<"\n";
	for (i = 0; i < a; i++) {
		cout << "qual foi a nota do" << b[i];
		cin >> nota;
		r = r+nota;
	}
	cout << "A media seria" << r / a;

}