#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;
int main(int argc, char* argv[], char**env){
	for(int i=0; i<argc; i++){
		std::cout<<argv[i]<<std::endl;
	}
	//constexpr int x; //here is the error because x is unintialized
	int y=10;
	//constexpr int k = y;// here y is not a constant
	const int l=3;
	constexpr int t = 48*l;
	std::cout<<"t = "<<t<<std::endl;
	return 0;
}
