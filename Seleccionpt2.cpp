#include <iostream>
using namespace std;
main(){
	/*
	int i=0;
	while (i<5){
		cout<<i<<endl; //error de novato, ciclo infinito 
		i++;
	}*/
	char respuesta='s';
	do{
		cout<<"Desea ingresar otro valor (s/n): ";
		cin>>respuesta;
	}while (respuesta =='s'|| respuesta =='S');
	
	system ("pause");
}
