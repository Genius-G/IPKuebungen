#include <iostream>
using namespace std;

void collatz(){
	int zahl;
	cout << "Zahl= " << flush;
	cin >> zahl;
	cout << endl;
	do{
		if (zahl % 2 == 0){
			zahl = zahl/2;
			}
		else{
			zahl = (zahl*3) + 1;
			}
		cout << "Das ist deine Zahl:" <<  zahl << endl;
	}while( zahl != 1 && zahl != 0 && zahl != -1 && zahl != -5 && zahl != -17);
}

int main(){
	collatz();
	return 0;
}
