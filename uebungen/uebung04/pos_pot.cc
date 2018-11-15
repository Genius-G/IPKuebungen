#include <iostream>
using namespace std;

int iterative(int q, int n){
	
	
	int result = 1;
	for(int i=0; i < n; i++){
		if(n == 0){
			return 1;
			}
		else if(n > 0){
			result *= q;
			}
		else{
			result *= -q;
			}
		return result;
		}
	}

int main(){
	int q; 
	int n;
	do{
		cout << "In q^n ist q= " << flush;
		cin >> q;
		cout << " und n= " << flush;
		cin >> n;
		if(q){}
	}while(false);
	iterative(q,n);
	return 0;
}
