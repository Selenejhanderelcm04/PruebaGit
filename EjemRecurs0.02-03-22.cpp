//Descenso-> Creciente
#include <iostream>
using namespace std;

void nNat(int n){
	if(n>0){
		nNat(n-1);
		cout << n << " ";
	}
}
int main(int argc, char *argv[]) {
	nNat(5);
	return 0;  
}
