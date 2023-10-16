#include <iostream>

using namespace std;

int main() {
	
	int arreglo[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  	int mayor=0;
	
   
  
  for (int i=1;i<15;i++){
  	cout<<"Ingrese el numero que quiere para la posicion: "<<i<<": ";
  	cin>>arreglo[i];
  	
  	 
  	
  	if (arreglo[i]>mayor){
  		mayor=arreglo[i];
	  }
  }
 cout<<"El numero mayor del arreglo es: "<<mayor<<endl;
  return 0;
}
