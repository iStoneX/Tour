#include <iostream>
#include <vector>

struct Person{
	int age = 0;
	int score = 0; 
}

int main(){

	std::cout << "Hello World!" << std::endl;

	for(auto x : {10,20,40,50}){
		std::cout << x << '\n';
	}

	return 0;
	
}
