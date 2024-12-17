#include <iostream>
#include <string>
using namespace std;

void main()
{
    string b[100], disciplina[100];
    int nota[100][100];
    int notaTotal, i, j, a, c;

    cout << "Quantas pessoas tem a turma? ";
    cin >> a;
    for (i = 0; i < a; i++) {
        cout << "Qual o nome da " << i + 1 << " pessoa?\n";
        cin >> b[i];
    }
    cout << "Quantas disciplinas eles tem? ";
    cin >> c;
    for (i = 0; i < c; i++) {
        cout << "Qual a " << i + 1 << " disciplina? ";
        cin >> disciplina[i];
    }
   for (j = 0; j < a; j++) {
        for (i = 0; i < c; i++) {
            cout << "Qual foi a nota do aluno " << b[j] << " na disciplina " << disciplina[i] << "?\n";
            cin >> nota[j][i];
        }
    } 
    for (j = 0; j < a; j++) {
        notaTotal = 0;
        for (i = 0; i < c; i++) {
            notaTotal += nota[j][i];
        }
        cout << "A media do aluno " << b[j] << " e " << notaTotal / c << "\n";
    }
    int r;
    for (i=0;i<notaTotal;i++)
    {
        r = 0;
            for (j = 0; j = a; j++) 
            {
                r = r + nota[j][i];
            }cout << "A media da disciplina" << disciplina[i] << "e" << r / a;
    }
}
