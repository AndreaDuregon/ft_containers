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
	try
	{
		std::cout << YELLOW <<"* PUSH" << OFF <<std::endl;
		ft::list<int> lst1;
		ft::list<int> lst2;

		std::cout << "ok" << std::endl;
		lst1.push_front(99);
		lst1.push_back(199);
		lst1.push_front(9);
		lst1.push_back(10);
		lst1.print();
		std::cout << YELLOW <<"POP" << OFF <<std::endl;
		lst1.pop_back();
		lst1.pop_front();
		lst1.print();
		//lst2.assign(lst1.begin(), lst1.end());
		std::cout << YELLOW <<"* INSERT" << OFF <<std::endl;
		ft::list<int> lst3;
		ft::listIterator<int> it_start(lst1.begin());
		ft::listIterator<int> it_end(lst1.end());
		lst3.assign(it_start, it_end);
		ft::listIterator<int> it(lst3.begin());

		it++;
		lst3.insert(it, 909);
		lst3.print();
		//lst2.assign(lst1.begin(), lst1.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
