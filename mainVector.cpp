#include "Vector.hpp"
#include <vector>
#include <iterator>
#include <iostream>
#include <exception>
/* COLORS */
#define RED "\033[0;31m"
#define	GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define OFF "\033[0m"
/* END COLORS */


int main(void)
{
	ft::vector<int> my_vec;
	std::vector<int> vec;

	my_vec.push_back(5);
	my_vec.push_back(6);
	my_vec.push_back(2);
	my_vec.push_back(4);
	
	ft::VectorIterator<int> it(my_vec.end());
	std::cout << "end " << my_vec.at(3) << std::endl;
	// for (size_t i = 4; i > 0; i--)
	// {
	// 	std::cout << *it.vec_p << std::endl;
	// 	it--;
	// }


	// vec.push_back(5);
	// vec.push_back(6);
	// vec.push_back(2);
	// vec.push_back(4);
	// vec.push_back(7);
	// std::vector<int>::iterator it1(vec.end());
	// std::cout << "end " << *it1 << std::endl;
	// std::cout << my_vec[0] << std::endl;
	// std::cout << my_vec[1] << std::endl;
	// my_vec.resize(2);
	// std::cout << my_vec.size() << std::endl;
	// std::cout << my_vec[0] << std::endl;
	// std::cout << my_vec[1] << std::endl;
	// std::cout << my_vec[13] << std::endl;
	// vec.push_back(1);
	// vec.capacity();
	// std::cout << vec.capacity() << std::endl;
}