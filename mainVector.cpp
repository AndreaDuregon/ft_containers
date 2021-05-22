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
	//std::cout << "new " << my_vec.size() << std::endl;
	my_vec.push_back(5);
	my_vec.push_back(6);
	my_vec.push_back(2);
	my_vec.push_back(5);
	my_vec.push_back(6);
	my_vec.push_back(2);
	my_vec.push_back(4);
	my_vec.push_back(7);

	//ft::vector<int> my_vec3;
	ft::vector<int> my_vec2;
	my_vec2.push_back(1);
	my_vec2.push_back(2);
	my_vec2.push_back(3);
	my_vec2.push_back(8);
	// my_vec2.push_back(9);
	// my_vec2.push_back(1);
	// my_vec2.push_back(2);
	// my_vec2.push_back(3);
	// my_vec2.push_back(8);
	// my_vec2.push_back(9);
	//std::cout << "new " << my_vec2.size() << std::endl;

	//ft::vector<int> const vect(my_vec);
	// std::vector<int> vec;
	// vec.push_back(5);
	// vec.push_back(6);
	// vec.push_back(2);
	// vec.push_back(4);
	// vec.push_back(7);

	my_vec.swap(my_vec2);
	for (int i = 0; i < my_vec.size(); i++)
		std::cout << my_vec[i] << " ";
	std::cout << std::endl;
	std::cout << my_vec.size() << std::endl;
	for (int i = 0; i < my_vec2.size(); i++)
		std::cout << my_vec2[i] << " ";
	std::cout << std::endl;
	std::cout << my_vec2.size() << std::endl;

	// std::vector<int>::iterator it1 = vec.begin();
	// std::vector<int>::iterator it3 = vec.end();
	// it1++;
	// it3--;
	// it3--;
	// it3--;
	// vec.erase(it1,it3);
	// for (int i = 0; i < vec.size(); i++)
	// 	std::cout << vec[i] << " ";
	// std::cout << std::endl;
	// std::cout << *it1 << std::endl;
}