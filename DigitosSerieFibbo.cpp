//6.	Dado un número natural, mostrar todos los dígitos que sean parte de la serie de Fibonacci.
#include <iostream>
#include <math.h>
using namespace std;

bool esFibo(int d){
	int a = -1, b = 1, f;
	bool flag= true, res= false;
	while(flag== true){
		f=a+b;
		if(f==d){
			res=true;
			flag=false;
		}
		else{
			if(f>d){
				res=false;
				flag=false;
			}
		}
		a=b;
		b=f;
	}
	return res;
	
}
void MostrarFibos(int n){
	int d;
	while(n>0){
				d= n % (10);
				n= (int)(n/10);	
				if(esFibo(d)== true){
					cout<<d<<" ";
				}
			}
} 
	
int main(int argc, char *argv[ ]) {
	int n;
	cout << "Ingresa un numero: ";   cin >> n;
	MostrarFibos(n);
	return 0;
}
