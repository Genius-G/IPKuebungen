

#include <iostream>
#include <cmath>
using namespace std;

void quadratic()
{
	double a;
	double b;
	double c;
	cout << "Please enter here the coefficients \nfor the solution to the quadratic equation: " << endl;
	cout << "a = " << flush;
	cin >> a;
	cout << "b = " << flush;
	cin >> b;
	cout << "c = " << flush;
	cin >> c;
	double disc = (b*b)-(4*a*c);
	if (disc < 0){
		cout << "Error!\n Negative Discriminant. This function only gives real solutions." << endl;
	}
	else if (disc == 0){
		cout << "The one solution is: " << -b/(2*a) << endl;
	}
	else{
		float x1 = -b + sqrt(b*b - 4*a*c)/(2*a);
		float x2 = -b - sqrt(b*b - 4*a*c)/(2*a);
		 cout << "The two solutions are: " << x1 << " and " << x2 << endl;
		}
}

int main(){
	quadratic();
}
