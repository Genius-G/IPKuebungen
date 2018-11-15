#include <iostream>	
/*Richtig waere <iostram>*/

int main(int argc, char** argv){		// Die "{" fehlt
  	std::cout << "Typing is difficult" << std::endl;	//Richtig waere std::cout und std::endl
	int ret = 0;
	return ret;	//Richtig waere return ret; da retv undefiniert
}
