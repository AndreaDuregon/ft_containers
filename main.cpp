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
	{
	std::cout << YELLOW <<"INIT LISTA VUOTA [SYS vs OUR]" << OFF <<std::endl;   
	std::list<int> sys_list;
	ft::list<int> our_list;

	/* BEGIN */
	if (*sys_list.begin() == *our_list.begin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "BEGIN: " << *sys_list.begin() << " == " << *our_list.begin() << OFF << std::endl;

	/* CBEGIN */
	if (*sys_list.cbegin() == *our_list.cbegin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "CBEGIN: " << *sys_list.cbegin() << " == " << *our_list.cbegin() << OFF << std::endl;

	/* RBEGIN */
	if (*sys_list.rbegin() == *our_list.rbegin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "RBEGIN: " << *sys_list.rbegin() << " == " << *our_list.rbegin() << OFF << std::endl;

	/* CRBEGIN */
	if (*sys_list.crbegin() == *our_list.crbegin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "CRBEGIN: " << *sys_list.crbegin() << " == " << *our_list.crbegin() << OFF << std::endl;

	/* END */
	if (*sys_list.end() == *our_list.end())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "END: " << *sys_list.end() << " == " << *our_list.end() << OFF << std::endl;

	/* CEND */
	if (*sys_list.cend() == *our_list.cend())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "CEND: " << *sys_list.cend() << " == " << *our_list.cend() << OFF << std::endl;

	/* REND */
	if (*sys_list.rend() == *our_list.rend())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "REND: " << *sys_list.rend() << " == " << *our_list.rend() << OFF << std::endl;

	/* CREND */
	if (*sys_list.crend() == *our_list.crend())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "CREND: " << *sys_list.crend() << " == " << *our_list.crend() << OFF << std::endl;

	/* SIZE */
	if (sys_list.size() == our_list.size())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "SIZE: " << sys_list.size() << " == " << our_list.size() << OFF << std::endl;

	/* MAX SIZE */
	if (sys_list.max_size() == our_list.max_size())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "MAX SIZE: " << sys_list.max_size() << " == " << our_list.max_size() << OFF << std::endl;
	}
	{
	std::cout << YELLOW <<"INIT LISTA 1 PARAMETRO (20) [SYS vs OUR]" << OFF <<std::endl;
	std::list<int> sys_list(20);
	ft::list<int> our_list(20);

	/* BEGIN */
	if (*sys_list.begin() == *our_list.begin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "BEGIN: " << *sys_list.begin() << " == " << *our_list.begin() << OFF << std::endl;

	/* CBEGIN */
	if (*sys_list.cbegin() == *our_list.cbegin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "CBEGIN: " << *sys_list.cbegin() << " == " << *our_list.cbegin() << OFF << std::endl;

	/* RBEGIN */
	if (*sys_list.rbegin() == *our_list.rbegin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "RBEGIN: " << *sys_list.rbegin() << " == " << *our_list.rbegin() << OFF << std::endl;

	/* CRBEGIN */
	if (*sys_list.crbegin() == *our_list.crbegin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "CRBEGIN: " << *sys_list.crbegin() << " == " << *our_list.crbegin() << OFF << std::endl;

	/* END */
	if (*sys_list.end() == *our_list.end())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "END: " << *sys_list.end() << " == " << *our_list.end() << OFF << std::endl;

	/* CEND */
	if (*sys_list.cend() == *our_list.cend())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "CEND: " << *sys_list.cend() << " == " << *our_list.cend() << OFF << std::endl;

	/* REND */
	if (*sys_list.rend() == *our_list.rend())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "REND: " << *sys_list.rend() << " == " << *our_list.rend() << OFF << std::endl;

	/* CREND */
	if (*sys_list.crend() == *our_list.crend())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "CREND: " << *sys_list.crend() << " == " << *our_list.crend() << OFF << std::endl;

	/* SIZE */
	if (sys_list.size() == our_list.size())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "SIZE: " << sys_list.size() << " == " << our_list.size() << OFF << std::endl;

	/* MAX SIZE */
	if (sys_list.max_size() == our_list.max_size())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "MAX SIZE: " << sys_list.max_size() << " == " << our_list.max_size() << OFF << std::endl;
	}
	{
	std::cout << YELLOW <<"INIT LISTA 2 PARAMETRI (20,100) [SYS vs OUR]" << OFF <<std::endl;
	std::list<int> sys_list(20, 100);
	ft::list<int> our_list(20, 100);

	/* BEGIN */
	if (*sys_list.begin() == *our_list.begin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "BEGIN: " << *sys_list.begin() << " == " << *our_list.begin() << OFF << std::endl;

	/* CBEGIN */
	if (*sys_list.cbegin() == *our_list.cbegin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "CBEGIN: " << *sys_list.cbegin() << " == " << *our_list.cbegin() << OFF << std::endl;

	/* RBEGIN */
	if (*sys_list.rbegin() == *our_list.rbegin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "RBEGIN: " << *sys_list.rbegin() << " == " << *our_list.rbegin() << OFF << std::endl;

	/* CRBEGIN */
	if (*sys_list.crbegin() == *our_list.crbegin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "CRBEGIN: " << *sys_list.crbegin() << " == " << *our_list.crbegin() << OFF << std::endl;

	/* END */
	if (*sys_list.end() == *our_list.end())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "END: " << *sys_list.end() << " == " << *our_list.end() << OFF << std::endl;

	/* CEND */
	if (*sys_list.cend() == *our_list.cend())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "CEND: " << *sys_list.cend() << " == " << *our_list.cend() << OFF << std::endl;

	/* REND */
	if (*sys_list.rend() == *our_list.rend())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "REND: " << *sys_list.rend() << " == " << *our_list.rend() << OFF << std::endl;

	/* CREND */
	if (*sys_list.crend() == *our_list.crend())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "CREND: " << *sys_list.crend() << " == " << *our_list.crend() << OFF << std::endl;

	/* SIZE */
	if (sys_list.size() == our_list.size())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "SIZE: " << sys_list.size() << " == " << our_list.size() << OFF << std::endl;

	/* MAX SIZE */
	if (sys_list.max_size() == our_list.max_size())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "MAX SIZE: " << sys_list.max_size() << " == " << our_list.max_size() << OFF << std::endl;
	}
	{
	std::cout << YELLOW <<"INIT LISTA 2 ITERATORI (begin, end) [SYS vs OUR]" << OFF <<std::endl;
	std::list<int> copy_sys_list(5,10);
	std::list<int> sys_list(copy_sys_list.begin(), copy_sys_list.end());
	ft::list<int> copy_our_list(5,10);
	ft::list<int> our_list(copy_our_list.begin(), copy_our_list.end());

	/* BEGIN */
	if (*sys_list.begin() == *our_list.begin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "BEGIN: " << *sys_list.begin() << " == " << *our_list.begin() << OFF << std::endl;

	/* CBEGIN */
	if (*sys_list.cbegin() == *our_list.cbegin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "CBEGIN: " << *sys_list.cbegin() << " == " << *our_list.cbegin() << OFF << std::endl;

	/* RBEGIN */
	if (*sys_list.rbegin() == *our_list.rbegin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "RBEGIN: " << *sys_list.rbegin() << " == " << *our_list.rbegin() << OFF << std::endl;

	/* CRBEGIN */
	if (*sys_list.crbegin() == *our_list.crbegin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "CRBEGIN: " << *sys_list.crbegin() << " == " << *our_list.crbegin() << OFF << std::endl;

	/* END */
	if (*sys_list.end() == *our_list.end())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "END: " << *sys_list.end() << " == " << *our_list.end() << OFF << std::endl;

	/* CEND */
	if (*sys_list.cend() == *our_list.cend())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "CEND: " << *sys_list.cend() << " == " << *our_list.cend() << OFF << std::endl;

	/* REND */
	if (*sys_list.rend() == *our_list.rend())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "REND: " << *sys_list.rend() << " == " << *our_list.rend() << OFF << std::endl;

	/* CREND */
	if (*sys_list.crend() == *our_list.crend())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "CREND: " << *sys_list.crend() << " == " << *our_list.crend() << OFF << std::endl;

	/* SIZE */
	if (sys_list.size() == our_list.size())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "SIZE: " << sys_list.size() << " == " << our_list.size() << OFF << std::endl;

	/* MAX SIZE */
	if (sys_list.max_size() == our_list.max_size())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "MAX SIZE: " << sys_list.max_size() << " == " << our_list.max_size() << OFF << std::endl;
	}
}
