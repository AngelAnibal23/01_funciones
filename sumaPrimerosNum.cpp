#include <iostream> 
using namespace std; 

int sumaPrimeNum(int); 

int main(){
	int n; 
	
	cout<<"Digite la cantidad de terminos a sumar: "; 
	cin>>n; 
	
	cout<<"La suma de los "<<n<<" primeros numeros es: "<<sumaPrimeNum(n)<<endl; 
	
	return 0; 
}

int sumaPrimeNum(int a){
	if(a==1){
		return 1; 
	}
	else{
		return a + sumaPrimeNum(a-1); 
	}
}