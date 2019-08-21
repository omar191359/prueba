#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float primer_numero,segundo_numero,tercer_numero;

    cout << "Introduce primer numero" << endl;
    cin>>primer_numero;
    cout << "Introduce segundo numero" << endl;
    cin>>segundo_numero;
    cout << "Introduce tercer numero" << endl;
    cin>>tercer_numero;

    if (primer_numero>segundo_numero&&segundo_numero>tercer_numero)
    {
        cout<<"El numero menor es:"<<tercer_numero;
    }

    if (primer_numero>tercer_numero&&tercer_numero>segundo_numero)
    {
        cout<<"El numero menor es:"<<segundo_numero;
    }



    if (segundo_numero>primer_numero&&primer_numero>tercer_numero)
    {
        cout<<"El numero menor es:"<<tercer_numero;
    }

    if (segundo_numero>tercer_numero&&tercer_numero>primer_numero)
    {
        cout<<"El numero menor es:"<<primer_numero;
    }



    if (tercer_numero>primer_numero&&primer_numero>segundo_numero)
    {
        cout<<"El numero menor es:"<<segundo_numero;
    }

    if (tercer_numero>segundo_numero&&segundo_numero>primer_numero)
    {
        cout<<"El numero menor es:"<<primer_numero;
    }
    return 0;
}
