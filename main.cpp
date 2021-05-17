#include "List.hpp"
#include <list>
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
	/* TESTER LIST */
	std::cout << YELLOW <<"TEST LIST" << OFF <<std::endl;   
	try {
		std::cout << YELLOW <<"* INIZIALIZZA LISTA" << OFF <<std::endl;
		std::list<int> sys_list;
		ft::list<int> list;
		if (*sys_list.begin() != *list.begin())
			throw  "BEGIN";
		if (*sys_list.end() != *list.end())
			throw  "END";
		if (sys_list.size() != list.size())
			throw  "SIZE";
		if (sys_list.max_size() != list.max_size())
			throw  "MAX SIZE";
		std::cout << GREEN << "PASSATO" << std::endl;
	} catch (const char* msg) {
		std::cout << RED << "FALLITO - " << msg <<OFF << std::endl;
	}
	try {
		std::cout << YELLOW <<"* INIZIALIZZA ITERATORE" << OFF <<std::endl;
		std::list<int> sys_list;
		std::list<int>::iterator sys_it = sys_list.begin();
		ft::list<int> list;
		ft::list<int>::iterator it = list.begin();
		if (*sys_it != *it)
			throw  "ITER BEGIN";
		std::cout << GREEN << "PASSATO" << std::endl;
	} catch (const char* msg) {
		std::cout << RED << "FALLITO - " << msg <<OFF << std::endl;
	}
}
