#include <iostream> 
using namespace std; 

int combinatoria(int, int); 

int main(){
	int n, k; 
	
	cout<<"Digite el primer elemento de la combinatoria: "; 
	cin>>n; 
	cout<<"Digite el segundo elemento de la combinatoria: "; 
	cin>>k; 
	
	cout<<"\nEl resultado de la combinatoria es: "<<combinatoria(n,k)<<endl; 
	
	return 0; 
}

int combinatoria(int a, int b){
	if(a==b){
		return 1; 
	}
	else if(b==1){
		return a; 
	}
	else{
		return combinatoria(a-1,b-1) + combinatoria(a-1, b); 
	}
}