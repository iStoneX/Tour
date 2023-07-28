#include <iostream>
#include <stdexcept>
class Vector{
	public:
		Vector() :data{nullptr}, sz{0}{};
		Vector(int s) :data{new double[s]}, sz{s}{
			for(int i=0;i!=sz;i++){
				data[i] = i;
			}
		} 
		double& operator[](int index){
			if(index<0 || index>=sz)
				throw std::out_of_range("Out of bounds stupid");

			return data[index];
		}
		~Vector(){delete[] data;}
	private:
		double* data;
		int sz;
};

int main(){
	
		std::cout << "Big Brain\n";
		Vector vec(3);
		std::cout << vec[2] << '\n';
}
