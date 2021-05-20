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
	try {
	std::cout << YELLOW <<"INIT LISTA VUOTA [SYS vs OUR]" << OFF <<std::endl;   
	std::list<int> sys_list;
	ft::list<int> our_list;

	/* BEGIN */
	if (*sys_list.begin() == *our_list.begin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "BEGIN: " << *sys_list.begin() << " == " << *our_list.begin() << OFF << std::endl;

	/* RBEGIN */
	if (*sys_list.rbegin() == *our_list.rbegin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "RBEGIN: " << *sys_list.rbegin() << " == " << *our_list.rbegin() << OFF << std::endl;

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
	}  catch (std::exception &e){}

	/* ---------------------------------------- */

	try {
	std::cout << YELLOW <<"INIT LISTA 1 PARAMETRO (20) [SYS vs OUR]" << OFF <<std::endl;
	std::list<int> sys_list(20);
	ft::list<int> our_list(20);

	/* BEGIN */
	if (*sys_list.begin() == *our_list.begin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "BEGIN: " << *sys_list.begin() << " == " << *our_list.begin() << OFF << std::endl;

	/* RBEGIN */
	if (*sys_list.rbegin() == *our_list.rbegin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "RBEGIN: " << *sys_list.rbegin() << " == " << *our_list.rbegin() << OFF << std::endl;

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
	}  catch (std::exception &e){}

	/* ---------------------------------------- */

	try {
	std::cout << YELLOW <<"INIT LISTA 2 PARAMETRI (20,100) [SYS vs OUR]" << OFF <<std::endl;
	std::list<int> sys_list(20, 100);
	ft::list<int> our_list(20, 100);

	/* BEGIN */
	if (*sys_list.begin() == *our_list.begin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "BEGIN: " << *sys_list.begin() << " == " << *our_list.begin() << OFF << std::endl;

	/* RBEGIN */
	if (*sys_list.rbegin() == *our_list.rbegin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "RBEGIN: " << *sys_list.rbegin() << " == " << *our_list.rbegin() << OFF << std::endl;

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
	} catch (std::exception &e){}

	/* ---------------------------------------- */

	try {
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

	/* RBEGIN */
	if (*sys_list.rbegin() == *our_list.rbegin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "RBEGIN: " << *sys_list.rbegin() << " == " << *our_list.rbegin() << OFF << std::endl;

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
	} catch (std::exception &e){}

	/* ---------------------------------------- */

	try	{
	std::cout << YELLOW <<"* LIST METHODS [SYS vs OUR]" << OFF <<std::endl;
	std::list<int> sys_list;
	ft::list<int> our_list;

	/* EMPTY */
	if (sys_list.empty() == our_list.empty())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "EMPTY: " << sys_list.empty() << " == " << our_list.empty() << OFF << std::endl;

	sys_list.push_back(99);
	sys_list.push_back(78);
	sys_list.push_back(33);
	our_list.push_back(99);
	our_list.push_back(78);	
	our_list.push_back(33);	
	/* PUSH BACK */
	if (*sys_list.begin() == *our_list.begin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "PUSH BACK 99, 78, 33 [99, 78, 33] (BEGIN): " << *sys_list.begin() << " == " << *our_list.begin() << OFF << std::endl;

	/* SIZE AFTER PUSH */
	if (sys_list.size() == our_list.size())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "SIZE AFTER PUSH: " << sys_list.size() << " == " << our_list.size() << OFF << std::endl;

	/* EMPTY */
	if (sys_list.empty() == our_list.empty())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "EMPTY: " << sys_list.empty() << " == " << our_list.empty() << OFF << std::endl;

	sys_list.push_front(12);
	our_list.push_front(12);
	/* PUSH FRONT */
	if (*sys_list.begin() == *our_list.begin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "PUSH FRONT 12 [12, 99, 78, 33](BEGIN): " << *sys_list.begin() << " == " << *our_list.begin() << OFF << std::endl;

	/* SIZE AFTER PUSH */
	if (sys_list.size() == our_list.size())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "SIZE AFTER PUSH: " << sys_list.size() << " == " << our_list.size() << OFF << std::endl;

	sys_list.pop_front();
	our_list.pop_front();	
	/* POP FRONT */
	if (*sys_list.begin() == *our_list.begin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "POP FRONT [99, 78, 33] (BEGIN): " << *sys_list.begin() << " == " << *our_list.begin() << OFF << std::endl;

	/* SIZE AFTER POP */
	if (sys_list.size() == our_list.size())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "SIZE AFTER POP: " << sys_list.size() << " == " << our_list.size() << OFF << std::endl;

	/* BEGIN */
	if (*sys_list.begin() == *our_list.begin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "BEGIN: " << *sys_list.begin() << " == " << *our_list.begin() << OFF << std::endl;	

	/* FRONT */
	if (sys_list.front() == our_list.front())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "FRONT: " << sys_list.front() << " == " << our_list.front() << OFF << std::endl;

	/* BACK */
	if (sys_list.back() == our_list.back())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "BACK: " << sys_list.back() << " == " << our_list.back() << OFF << std::endl;



	/* INSERT at 0 */
	sys_list.insert(sys_list.begin(), 999);
	our_list.insert(our_list.begin(), 999);
	if (*sys_list.begin() == *our_list.begin() && sys_list.size() == our_list.size())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "INSERT at 0 [(999), 99, 78, 33]: " << *sys_list.begin() << " == " << *our_list.begin() << OFF << std::endl;

	/* INSERT at 1 */
	sys_list.insert(++sys_list.begin(), 5);
	our_list.insert(++our_list.begin(), 5);
	if (*++sys_list.begin() == *++our_list.begin() && sys_list.size() == our_list.size())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "INSERT at 1 [999, (5), 99, 78, 33]: " << *++sys_list.begin() << " == " << *++our_list.begin() << OFF << std::endl;

	/* INSERT x */
	sys_list.insert(sys_list.begin(), 3, 66);
	our_list.insert(our_list.begin(), 3, 66);
	if (sys_list.size() == our_list.size() && *sys_list.begin() == *our_list.begin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "INSERT 5 times 66 at 0 [(66, 66, 66), 999, 5, 99, 78, 33]: " << sys_list.size() << " == " << our_list.size() << OFF << std::endl;

	/* INSERT x */
	sys_list.reverse();
	our_list.reverse();
	if (*sys_list.begin() == *our_list.begin())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "REVERSE (BEGIN): " << *sys_list.begin() << " == " << *our_list.begin() << OFF << std::endl;

	sys_list.push_back(1);
	our_list.push_back(1);
	sys_list.push_back(1);
	our_list.push_back(1);
	sys_list.push_back(1);
	our_list.push_back(1);
	sys_list.push_front(1);
	our_list.push_front(1);
	sys_list.unique();
	our_list.unique();
	/* UNIQUE */
	if (sys_list.size() == our_list.size())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "UNIQUE [1, 66, 66, 66, 999, 5, 99, 78, 33, 1, 1, 1]: " << sys_list.size() << " == " << our_list.size() << OFF << std::endl;

	/* CLEAR */
	sys_list.clear();
	our_list.clear();
	if (sys_list.size() == our_list.size())
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "CLEAR: " << sys_list.size() << " == " << our_list.size() << OFF << std::endl;



	} catch (std::exception &e){}

	/* ---------------------------------------- */

	try {
	std::cout << YELLOW <<"* LIST ITERATOR OPERATOR [SYS vs OUR]" << OFF <<std::endl;
	std::list<int> sys_list;
	ft::list<int> our_list;
	std::list<int>::iterator sys_it = sys_list.begin();
	ft::list<int>::iterator our_it = our_list.begin();

	/* BEGIN EMPTY */
	if (*sys_it == *our_it)
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "BEGIN EMPTY: " << *sys_it << " == " << *our_it << OFF << std::endl;

	sys_list.push_back(1);
	sys_list.push_back(2);
	sys_list.push_back(32);
	our_list.push_back(1);
	our_list.push_back(2);
	our_list.push_back(32);

	sys_it = sys_list.begin();
	our_it = our_list.begin();
	/* BEGIN [1,2,3] */
	if (*sys_it == *our_it)
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "BEGIN [1, 2, 32]: " << *sys_it << " == " << *our_it << OFF << std::endl;

	++sys_it;
	++our_it;
	/* ++BEGIN [1,2,3] */
	if (*sys_it == *our_it)
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "++BEGIN [1, 2, 32]: " << *sys_it << " == " << *our_it << OFF << std::endl;

	sys_it = sys_list.begin();
	our_it = our_list.begin();
	/* BEGIN++ [1,2,3] */
	if (*sys_it++ == *our_it++)
		std::cout << GREEN;
	else
		std::cout << RED;
	sys_it = sys_list.begin();
	our_it = our_list.begin();
	std::cout << "BEGIN++ (1 time) [1, 2, 32]: " << *sys_it++ << " == " << *our_it++ << OFF << std::endl;

	/* BEGIN++ [1,2,3] */
	if (*sys_it == *our_it)
		std::cout << GREEN;
	else
		std::cout << RED;	
	std::cout << "BEGIN++ (2 time) [1, 2, 32]: " << *sys_it++ << " == " << *our_it++ << OFF << std::endl;

	/* BEGIN++ [1,2,3] */
	if (*sys_it == *our_it)
		std::cout << GREEN;
	else
		std::cout << RED;	
	std::cout << "BEGIN++ (3 time) [1, 2, 32]: " << *sys_it++ << " == " << *our_it++ << OFF << std::endl;

	sys_it = sys_list.end();
	our_it = our_list.end();

	--sys_it;
	--our_it;
	/* --END [1, 2, 32] */
	if (*sys_it == *our_it)
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "--END [1, 2, 32]: " << *sys_it << " == " << *our_it << OFF << std::endl;

	sys_it = sys_list.end();
	our_it = our_list.end();
	++sys_it;
	++our_it;
	/* END++ [1, 2, 32] */
	if (*sys_it == *our_it)
		std::cout << GREEN;
	else
		std::cout << RED;
	std::cout << "++END [1, 2, 32]: " << *sys_it << " == " << *our_it << OFF << std::endl;

	} catch (std::exception &e){}
}
