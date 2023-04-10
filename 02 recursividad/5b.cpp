#include <iostream> 
using namespace std;

//funcion que devuelve el numero que ira en cada posicion del triángulo 
int pascal(int fila,int col){
	if ( fila <= 0 ||  col <= 0 || col > fila) 
			return 0;
	else 
		if (fila == 1 &&  col == 1) {
			return 1;
		} else {
				return pascal(fila-1,  col) + pascal(fila-1,  col-1);
			}
	
	
} 


int main(int argc, char *argv[]) {
	cout << endl << "Triangulo de Pascal :" << endl;
	
	
	cout << pascal(1,1)<<endl;
	cout << pascal(4,2)<<endl;
	cout << pascal(1,3)<<endl;
	cout << pascal(1,1)<<endl;
	cout << pascal(6,4)<<endl;
	return 0;
}

/*if(col > fila + 1 || col + 1 < fila)
{
cout << "Error no se puede fuera de indice";
return 0;
}
if(fila==0)
return 1;//en el pico del triángulo es 1     
else{
if(col == fila)//en los costados del triángulo siempre es 1             
return 1;
else
return llenar_pos(fila-1,col-1)+llenar_pos(fila-1,col);
}
*/
