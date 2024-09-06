#include <iostream> 
using namespace std; 

int multiplica(int, int); 

int main(){
	int a, b; 
	
	cout<<"Digite el primer numero a multiplicar: "; 
	cin>>a; 
	cout<<"Digite el segundo numero a multiplicar: "; 
	cin>>b; 
	
	cout<<"\nLa multiplicacion de los 2 numeros brindados es: "<<multiplica(a,b)<<endl;
	
	return 0; 
}

int multiplica(int x, int y){
	if(y==0){
		return 0; 
	}
	else{
		return x + multiplica(x,y-1); 
	}
}