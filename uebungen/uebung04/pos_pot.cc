#include <iostream>
#include <cmath>
using namespace std;

namespace power{
	 
	int iterative(int q, int n){
		/* This funtion returns the result of q^n
		 * The first argument q -- is the Basis and
		 * The second argument n -- is the Exponent
		 *  */
		 
		int result = 1;
		if(n == 0){
				//return 1, because any number raised by 0 is 1
				return 1;
				}
		else if(n < 0){
				//return of an Error message
				cout << "Error! n must be a positive Integer" << endl;
				return 0;
				}
				
		else{
			for(int i = 0; i < n; i++){
				//calculating q^n iterativly
				result *= q;
				}
			}
		return result;
		}

		
	int recursive(int q, int n){
		/* This function returns the result of q^n
		 * The first argument q -- is the Basis and
		 * The second argument n -- is the Exponent
		 *  */
		int result = 1;
		if(n == 0){
			//breaking the recursion
			return result;
		}
		else if(n > 0){
			//recursion
			return q * recursive(q, n-1);
			}
		else{
			//return of an Error message 
			cout << "Error! n must be a poitive Integer." << endl;
			return 0;
			}
		}
		
	}	

int main(int argc, char** argv){
	//reading in input
	int q; 
	int n;
	cout << "In q^n ist q = " << flush;
	cin >> q;
	cout << "und n = " << flush;
	cin >> n;
	
	//output via shell
	cout << "Calculating " << q << "^" << n << " = ";
	cout << power::iterative(q,n) << " iterativly." << endl;
	
	cout << "Calculating " << q << "^" << n << " = ";
	cout << power::recursive(q,n) << " recursivly." << endl;
	
	return 0;
}
