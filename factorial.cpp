#include <iostream>
using namespace std; 

int a,b,factorial;

int main (void)
{
    cout << "el factorial del numero" <<endl;
    cin >> a;
    factorial=1;
    for (b=1 ; b<=a ; b++)
    {
         factorial=b*factorial;
    }
    
    cout << "El factorial del numero ingresado es " <<factorial<<endl;
    
    system("pause");
    return 0;
}
