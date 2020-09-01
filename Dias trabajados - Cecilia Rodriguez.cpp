/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    float s,j,d;
    cout<< "Ingresar los dias trabajados: "<<endl;
    cin>> d;
    cout<< "El monto del jornal: "<<endl;
    cin>>j;
    s=d*j;
    cout<<"el salario es: "<<s;
    return 0;
}
