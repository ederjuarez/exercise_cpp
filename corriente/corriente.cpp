#include <iostream>

using namespace std;

int main (){


    int I,P,V;
	std::cout<<"Ingrese la corriente: ";
	std::cin>>I;
	
	int R=4;
	V = (R*I);
	P = (V*I);
	std::cout<<"La resistencia es: "<<R<<endl;
	std::cout<<"El voltaje es: "<<V<<endl;
	std::cout<<"La potencia es: "<<P<<endl;
	
	return 0;
}