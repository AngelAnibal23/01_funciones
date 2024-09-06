#include <iostream> 
using namespace std; 

int factorial(int); 

int main(){
	int numero; 
	
	cout<<"Digite un numero para obtener su factorial: "; 
	cin>>numero; 

	cout<<"\nEl factorial del numero ingresado es: "<<factorial(numero)<<endl; 

	return 0; 
}

int factorial(int x){
	if(x==0){
		return 1; 
	}
	else{
		return x * factorial(x-1); 
	}
}