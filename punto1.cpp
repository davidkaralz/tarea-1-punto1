#include <iostream>
#include <string>

int main()
{
int a;
float b;
std::cout<< "ingrese un numero entero:\n";
std::cin>>a;
b=a;//Conversion Implicita
std::cout<< "El numero entero es:" <<a <<"\n";
std::cout<<"Se mantiene el numero a pesar del cambio de entero a float:" <<b <<"\n\n";

std::cout<< "ingrese un numero con decimales:\n";
std::cin>>b;
std::cout<< "el numero en float es:" <<b<<"\n";
a = (int)b;//Conversion explicita
std::cout<<"El número pierde informacion cuando cambia de float a entero y queda asi:" <<a <<"\n";

return 0;
}
