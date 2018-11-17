#include <iostream>

namespace power{
	 /* Namespace for operations like q^n 
	  * */
	 
	double iterative(double q, int n){
		/* This funtion returns the result of q^n
		 * The first argument q -- is the Basis and
		 * The second argument n -- is the Exponent
		 *  */
		 
		double result = 1;
		if(n == 0){
				//return 1, because any number raised by 0 is 1
				return 1;
				}
		else if(n < 0){
				//return of an Error message
				std::cout << "Error! n must be a positive Integer" << std::endl;
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
	}

double root_iterative(double q, double n, int steps){
	/* This function returns the result of q^1/n
	 * The first argument q -- is the Basis and
	 * The second argument n -- is the Exponent seen as (1/n) and
	 * The third argument steps -- is the number of steps for this approximation.
	 * */
	
	double result = 1;
	if(n <= 0){
		//return of an Error message
		std::cout << "Error! n must be a positive Number" << std::endl;
		return 0;
			}
	else if(n > 0){
		double increment;
		for(int i = 0; i < steps; i++){
		//calculating q^1/n iterativly by adding an increment each step
		
		increment = (1/n) * (q * 1/power::iterative(result, n - 1) - result);
		result += increment;
			}
		}
	else{
		std::cout << "Error! Wrong input." << std::endl;
		}
	return result;
	}

void test_root(double q, int n, int steps){
	/* This function does test the level of the approximation and returns 
	 * The Basis q -- 
	 * The Exponent n --
	 * The Approximation â -- relativly q^1/n 
	 * The Inverse â^n -- 
	 * The Difference between q - â^n
	 * 
	 * The first argument q -- is the Basis and
	 * The second argument n -- is the Exponent seen as (1/n) and
	 * The third argument steps -- is the number of steps for this approximation.
	 * */
	 
	 
	}

int main(int argc, char** argv){
	//reading input
	int q; 
	int n;
	std::cout << "In q^(1/n) ist q = " << std::flush;
	std::cin >> q;
	std::cout << "und n = " << std::flush;
	std::cin >> n;
	
	//output via shell
	std::cout << "The result of " << q << "^1/" << n << " = ";
	std::cout << root_iterative(q,n,5) << std::endl << std::endl;
	}
