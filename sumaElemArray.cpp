#include <iostream>
using namespace std;

int sumaArray(int[], int); 

int main(){
	int n; 
	
	cout<<"Digite cuantos elementos tendra el arreglo: "; 
	cin>>n; 
	
	int array[n];  

	for(int i=0; i<n; i++){
		cout<<"Digite el elemento ["<<i<<"]: "; 
		cin>>array[i];  
	} 
	
	cout<<"\nImprimiendo el arreglo: "; 
	for(int i=0; i<n; i++){
		cout<<array[i]<<" ";  
	} 
	
	cout<<endl; 
	cout<<"\nLa suma de los elementos del arreglo es: "<<sumaArray(array, n-1)<<endl; 
	return 0; 
}

int sumaArray(int A[], int cantidad){
	if(cantidad==0){
		return A[cantidad]; 
	}
	else{
		return A[cantidad] + sumaArray(A, cantidad-1); 
	}
}
