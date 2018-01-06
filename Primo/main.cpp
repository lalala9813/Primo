#include <iostream>

using namespace std;

int main()
{
    int numero, res, cont = 0;
    cout << "Digite su numero a comprobar -> ";
    cin >> numero;

    for(int i = 1; i <= numero; i++)
    {
        if((numero % i) == 0)
        {
            cont += 1;
        }
        else
        {
            cont += 0;
        }
    }

    if(cont == 2)
    {
        cout << "Es un numero primo" << endl;
    }
    else
    {
        cout << "No es un numero primo" << endl;
    }

    return 0;
}
