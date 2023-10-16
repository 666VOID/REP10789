#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
		   
    double nota1, nota2, nota3, nota4;


    cout << "Primeira nota:" << endl;
    cin >> nota1;

    cout << "Segunda nota:" << endl;
    cin >> nota2;

    cout << "Terceira nota:" << endl;
    cin >> nota3;

    cout << "Quarta nota:" << endl;
    cin >> nota4;

 
    double media = (nota1 + nota2 + nota3 + nota4) / 4;

    cout << "Notas inseridas: " << nota1 << ", " << nota2 << ", " << nota3 << ", " << nota4 << endl;
    cout << "Média das notas: " << media << endl;

    return 0;
}
