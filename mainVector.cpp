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
	my_vec.push_back(5);
	my_vec.push_back(6);
	my_vec.push_back(2);
	my_vec.push_back(4);
	my_vec.push_back(7);
	//ft::vector<int> const vect(my_vec);
	std::vector<int> vec;
	vec.push_back(5);
	vec.push_back(6);
	vec.push_back(2);
	vec.push_back(4);
	vec.push_back(7);

	std::vector<int> vec2;

	ft::vector<int> my_vec2;
	my_vec2.push_back(5);
	my_vec2.push_back(6);
	my_vec2.push_back(2);
	ft::VectorIterator<int> it2(my_vec.begin());
	it2++;
	// it2++;
	// it2++;
	// it2++;
	ft::VectorIterator<int> it3(my_vec.end());
	it3--;
	std::cout << *it2 << " " << *it3 << std::endl;
	my_vec2.insert(my_vec2.end(), it2, it3);

	for (size_t i = 0; i < my_vec2.size(); i++)
	{
		std::cout <<my_vec2[i] << " ";
	}
	std::cout<< std::endl;

	std::vector<int> vec3;
	vec3.push_back(5);
	vec3.push_back(6);
	vec3.push_back(2);
	std::vector<int>::iterator it4(vec.begin());
	it4++;
	// it4++;
	// it4++;
	// it4++;
	std::vector<int>::iterator it5(vec.end());
	it5--;
	std::cout << *it4 << " " << *it5 << std::endl;
	vec3.insert(vec3.end(), it4, it5);

	for (size_t i = 0; i < vec3.size(); i++)
	{
		std::cout <<vec3[i] << " ";
	}
	std::cout << std::endl;
	
	// ft::VectorIterator<int> it(my_vec.begin());
	// it++;
	// it++;
	// // it++;
	// // it++;
	// // it++;
	// it = my_vec.insert(it, 100);
	// it = my_vec.insert(it, 100);
	// it = my_vec.insert(it, 100);
	// it = my_vec.insert(it, 100);
	// it = my_vec.insert(it, 100);
	//my_vec.resize(100);
	//std::cout << "end " << my_vec.capacity() << std::endl;
	//std::cout << my_vec[0] << std::endl;

	// for (size_t i = 0; i < my_vec.size(); i++)
	// {
	// 	std::cout << my_vec[i] << std::endl;
	// }



	vec.pop_back();
	//std::cout << "end " << vec.size() << std::endl;
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