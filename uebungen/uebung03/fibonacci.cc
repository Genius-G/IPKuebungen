#include <iostream>
using namespace std;

void fibonacci(){
	int N;
	cout << "Berechne die ersten N Fibonacci Zahlen:" << endl;
	cout << "N = " << flush;
	cin >> N;
	cout << endl;
	long double a[N];
	a[0] = 0;
	a[1] = 1;
	for(int i = 2; i < N; i++){
		a[i] = a[i-1] + a[i-2];
	}
	for(int i = 0; i < N; i++){
		cout << a[i] << endl;
	}
	
}

int main(){
	fibonacci();
	return 0;
}
