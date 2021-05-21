#include "List.hpp"
#include <list>
#include <iterator>
#include <iostream>
#include <exception>
// COLORS 
#define RED "\033[0;31m"
#define	GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define OFF "\033[0m"
// END COLORS

bool compareINT(int const &n1, int const &n2)
{
	return (n1 > n2);
}

template <class T>
static void print_sys(std::list<T> &list)
{
	std::list<int>::iterator sys_it_begin = list.begin();
	std::list<int>::iterator  sys_it_end = list.end();

	while (sys_it_begin != sys_it_end)
	{
		std::cout << *sys_it_begin << " ";
		++sys_it_begin;	
	}
	std::cout << std::endl;
}

template <class T>
static void print_our(ft::list<T> &list)
{
	ft::listIterator<T> our_it_begin = list.begin();
	ft::listIterator<T> our_it_end = list.end();

	while (our_it_begin != our_it_end)
	{
		std::cout << *our_it_begin << " ";
		++our_it_begin;	
	}
	std::cout << std::endl;
}

template <class T>
static bool equalSysFt(std::list<T> &sys_list, ft::list<T> &our_list)
{
	if (sys_list.size() != our_list.size())
	{
		std::cout << "BACK " << sys_list.back() << " != " << our_list.back() << " ";
		return false;
	}
	if (sys_list.empty() != our_list.empty())
	{
		std::cout << "EMPTY " << sys_list.empty() << " != " << our_list.empty() << " ";
		return false;
	}
	if (sys_list.max_size() != our_list.max_size())
	{
		std::cout << "MAX SIZE " << sys_list.max_size() << " != " << our_list.max_size() << " ";
		return false;
	}
	ft::listIterator<T> our_it_begin = our_list.begin();
	std::list<int>::iterator sys_it_begin = sys_list.begin();
	ft::listIterator<T> our_it_end = our_list.end();
	std::list<int>::iterator  sys_it_end = sys_list.end();

	while(sys_it_begin != sys_it_end)
	{
		if (*sys_it_begin != *our_it_begin)
		{
			print_sys(sys_list);
			print_our(our_list);
			return false;
		}
		sys_it_begin++;
		our_it_begin++;
	}

	our_it_begin = our_list.begin();
	sys_it_begin = sys_list.begin();

	while (our_it_begin != our_it_end)
	{
		if (*sys_it_begin != *our_it_begin)
		{
			print_sys(sys_list);
			print_our(our_list);
			return false;
		}
		sys_it_begin++;
		our_it_begin++;
	}

	return true;
}

int main(void)
{
	// -------------------INIT EMPTY--------------------- 
	std::cout << YELLOW <<"INIT LISTA VUOTA [SYS vs OUR]" << OFF <<std::endl;   
	{
		std::list<int> sys_list;
		ft::list<int> our_list;

		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	// --------------------INT 1 PARAMETRO-------------------- 
	std::cout << YELLOW <<"INIT LISTA 1 PARAMETRO (20) [SYS vs OUR]" << OFF <<std::endl;
	{
		std::list<int> sys_list(20);
		ft::list<int> our_list(20);

		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	// ----------------------INIT 2 PARAMETRI------------------ 
	std::cout << YELLOW <<"INIT LISTA 2 PARAMETRI (20,100) [SYS vs OUR]" << OFF <<std::endl;
	{
		std::list<int> sys_list(20, 100);
		ft::list<int> our_list(20, 100);

		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	// ----------------------INIT 2 ITERATORI------------------ 
	std::cout << YELLOW <<"INIT LISTA 2 ITERATORI (begin, end) [SYS vs OUR]" << OFF <<std::endl;
	{
		std::list<int> copy_sys_list(5,10);
		std::list<int> sys_list(copy_sys_list.begin(), copy_sys_list.end());
		ft::list<int> copy_our_list(5,10);
		ft::list<int> our_list(copy_our_list.begin(), copy_our_list.end());

		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	// --------------------LIST METHODS-------------------- 
	std::cout << YELLOW <<"LIST METHODS [SYS vs OUR]" << OFF <<std::endl;
	{
		// PUSH BACK 
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_back(99);
		sys_list.push_back(78);
		sys_list.push_back(33);
		our_list.push_back(99);
		our_list.push_back(78);	
		our_list.push_back(33);	
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "PUSH BACK" << OFF << std::endl;
	}
	{
		// PUSH FRONT 
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_front(12);
		our_list.push_front(12);
		sys_list.push_front(85);
		our_list.push_front(85);
		sys_list.push_front(1);
		our_list.push_front(1);
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "PUSH FRONT" << OFF << std::endl;
	}
	{
		// POP FRONT 
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_front(12);
		our_list.push_front(12);
		sys_list.push_back(85);
		our_list.push_back(85);
		sys_list.push_front(1);
		our_list.push_front(1);
		sys_list.pop_front();
		our_list.pop_front();
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "POP FRONT" << OFF << std::endl;
	}
	{
		// POP BACK 
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_front(12);
		our_list.push_front(12);
		sys_list.push_back(85);
		our_list.push_back(85);
		sys_list.push_front(1);
		our_list.push_front(1);
		sys_list.pop_back();
		our_list.pop_back();
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "POP BACK" << OFF << std::endl;
	}
	{
		// INSERT at 0 
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_front(33);
		our_list.push_front(33);
		sys_list.push_front(78);
		our_list.push_front(78);	
		sys_list.insert(sys_list.begin(), 999);
		our_list.insert(our_list.begin(), 999);
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "INSERT (ITERATOR, NUMBER) test 1" << OFF << std::endl;
	}
	{
		// INSERT at 1 
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_front(33);
		our_list.push_front(33);
		sys_list.push_front(78);
		our_list.push_front(78);
		sys_list.insert(++sys_list.begin(), 55);
		our_list.insert(++our_list.begin(), 55);
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "INSERT (ITERATOR, NUMBER) test 2 "  << OFF << std::endl;
	}
	{
		// INSERT x 
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_front(33);
		our_list.push_front(33);
		sys_list.push_front(78);
		our_list.push_front(78);
		sys_list.insert(sys_list.begin(), 3, 66);
		our_list.insert(our_list.begin(), 3, 66);
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "INSERT (ITERATOR, NUMBER, NUMBER)" <<  OFF << std::endl;
	}
	{
		// INSERT OTHER LIST
		std::list<int> sys_list;
		ft::list<int> our_list;
		std::list<int> sys_list2;
		ft::list<int> our_list2;
		sys_list2.push_back(100);
		our_list2.push_back(100);
		sys_list2.push_back(85);
		our_list2.push_back(85);
		sys_list2.push_back(12);
		our_list2.push_back(12);
		sys_list2.push_back(200);
		our_list2.push_back(200);
		sys_list.push_back(0);
		our_list.push_back(0);
		sys_list.push_back(56);
		our_list.push_back(56);
		sys_list.insert(++sys_list.begin(), sys_list2.begin(), sys_list2.end());
		our_list.insert(++our_list.begin(), our_list2.begin(), our_list2.end());
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "INSERT (ITERATOR, ITERATOR, ITERATOR)" <<  OFF << std::endl;
	}
	{
		// REVERSE 
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_front(33);
		our_list.push_front(33);
		sys_list.push_front(78);
		our_list.push_front(78);
		sys_list.push_front(12);
		our_list.push_front(12);
		sys_list.push_back(85);
		our_list.push_back(85);
		sys_list.push_front(1);
		our_list.push_front(1);
		sys_list.reverse();
		our_list.reverse();
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "REVERSE" <<  OFF << std::endl;
	}
	{
		// UNIQUE 
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_front(33);
		our_list.push_front(33);
		sys_list.push_front(78);
		our_list.push_front(78);
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
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "UNIQUE" <<  OFF << std::endl;
	}
	{
		//UNIQUE PREDICATE
	}
	{
		// SORT 
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_back(100);
		our_list.push_back(100);
		sys_list.push_back(85);
		our_list.push_back(85);
		sys_list.push_back(12);
		our_list.push_back(12);
		sys_list.push_back(200);
		our_list.push_back(200);
		sys_list.push_front(33);
		our_list.push_front(33);
		sys_list.push_front(78);
		our_list.push_front(78);
		sys_list.push_back(1);
		our_list.push_back(1);
		sys_list.sort();
		our_list.sort();
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "SORT" <<  OFF << std::endl;
	}
	{
		//SORT COMPARE
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_back(100);
		our_list.push_back(100);
		sys_list.push_back(85);
		our_list.push_back(85);
		sys_list.push_back(12);
		our_list.push_back(12);
		sys_list.push_back(200);
		our_list.push_back(200);
		sys_list.push_front(33);
		our_list.push_front(33);
		sys_list.push_front(78);
		our_list.push_front(78);
		sys_list.push_back(1);
		our_list.push_back(1);
		sys_list.sort(compareINT);
		our_list.sort(compareINT);
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "SORT COMPARE" <<  OFF << std::endl;
	}
	{
		// REMOVE 
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_back(100);
		our_list.push_back(100);
		sys_list.push_back(85);
		our_list.push_back(85);
		sys_list.push_back(12);
		our_list.push_back(12);
		sys_list.push_back(200);
		our_list.push_back(200);
		sys_list.push_back(200);
		our_list.push_back(200);
		sys_list.push_front(200);
		our_list.push_front(200);
		sys_list.remove(200);
		our_list.remove(200);
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "REMOVE" <<  OFF << std::endl;
	}
	{
		// REMOVE IF
	}
	{
		// RESIZE (10) 
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_back(100);
		our_list.push_back(100);
		sys_list.push_back(85);
		our_list.push_back(85);
		sys_list.push_back(12);
		our_list.push_back(12);
		sys_list.push_back(200);
		our_list.push_back(200);
		sys_list.resize(10);
		our_list.resize(10);
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "RESIZE (NUMBER)" <<  OFF << std::endl;
	}
	{
		// RESIZE (5, 100) 
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_back(100);
		our_list.push_back(100);
		sys_list.push_back(85);
		our_list.push_back(85);
		sys_list.push_back(12);
		our_list.push_back(12);
		sys_list.push_back(200);
		our_list.push_back(200);
		sys_list.resize(5, 100);
		our_list.resize(5, 100);
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "RESIZE (NUMBER, NUMBER)" <<  OFF << std::endl;
	}
	{
		// ERASE (BEGIN) 
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_back(100);
		our_list.push_back(100);
		sys_list.push_back(85);
		our_list.push_back(85);
		sys_list.push_back(12);
		our_list.push_back(12);
		sys_list.push_back(200);
		our_list.push_back(200);
		sys_list.erase(sys_list.begin());
		our_list.erase(our_list.begin());
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "ERASE (ITERATOR)" <<  OFF << std::endl;
	}
	{
		// ERASE (BEGIN, END) 
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_back(100);
		our_list.push_back(100);
		sys_list.push_back(85);
		our_list.push_back(85);
		sys_list.push_back(12);
		our_list.push_back(12);
		sys_list.push_back(200);
		our_list.push_back(200);
		sys_list.erase(sys_list.begin(), sys_list.end());
		our_list.erase(our_list.begin(), our_list.end());
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "ERASE (ITERATOR, ITERATOR)" <<  OFF << std::endl;
	}
	{
		// MERGE 
		std::list<int> sys_list;
		ft::list<int> our_list;
		std::list<int> sys_list2;
		ft::list<int> our_list2;
		sys_list.push_back(100);
		our_list.push_back(100);
		sys_list.push_back(85);
		our_list.push_back(85);
		sys_list.push_back(12);
		our_list.push_back(12);
		sys_list.push_back(200);
		our_list.push_back(200);
		sys_list2.push_back(0);
		our_list2.push_back(0);
		sys_list2.push_back(56);
		our_list2.push_back(56);
		sys_list.merge(sys_list2);
		our_list.merge(our_list2);
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "MERGE (OTHER LIST)" <<  OFF << std::endl;
	}
	{
		//MERGE LIST COMPARE
	}
	{
		// ASSIGN (IT, IT) test 2 
		std::list<int> sys_list;
		ft::list<int> our_list;
		std::list<int> sys_list2;
		ft::list<int> our_list2;
		sys_list.push_back(100);
		our_list.push_back(100);
		sys_list.push_back(85);
		our_list.push_back(85);
		sys_list.push_back(12);
		our_list.push_back(12);
		sys_list.push_back(200);
		our_list.push_back(200);
		sys_list2.push_back(0);
		our_list2.push_back(0);
		sys_list2.push_back(56);
		our_list2.push_back(56);
		sys_list.assign(sys_list2.begin(), sys_list2.end());
		our_list.assign(our_list2.begin(), our_list2.end());
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "ASSIGN (ITERATOR, ITERATOR) test 1" <<  OFF << std::endl;
	}
	{
		// ASSIGN (IT, IT) test 2 
		std::list<int> sys_list;
		ft::list<int> our_list;
		std::list<int> sys_list2;
		ft::list<int> our_list2;
		sys_list2.push_back(100);
		our_list2.push_back(100);
		sys_list2.push_back(85);
		our_list2.push_back(85);
		sys_list2.push_back(12);
		our_list2.push_back(12);
		sys_list2.push_back(200);
		our_list2.push_back(200);
		sys_list.push_back(0);
		our_list.push_back(0);
		sys_list.push_back(56);
		our_list.push_back(56);
		sys_list.assign(sys_list2.begin(), sys_list2.end());
		our_list.assign(our_list2.begin(), our_list2.end());
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "ASSIGN (ITERATOR, ITERATOR) test 2" <<  OFF << std::endl;
	}
	{
		// ASSIGN (N, N) test 1
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_back(100);
		our_list.push_back(100);
		sys_list.push_back(85);
		our_list.push_back(85);
		sys_list.push_back(12);
		our_list.push_back(12);
		sys_list.push_back(200);
		our_list.push_back(200);
		sys_list.assign(5, 99);
		our_list.assign(5, 99);
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "ASSIGN (NUMBER, NUMBER) test 1" <<  OFF << std::endl;
	}
	{
		// ASSIGN (N, N) test 2 
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_back(0);
		our_list.push_back(0);
		sys_list.push_back(56);
		our_list.push_back(56);
		sys_list.assign(10, -1);
		our_list.assign(10, -1);
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "ASSIGN (NUMBER, NUMBER) test 2" <<  OFF << std::endl;
	}
	{
		//SPLICE IT LIST 
	}
	{
		//SPLICE IT LIST IT
	}
	{
		//SPLICE IT LIST IT IT
	}
	{
		// SWAP 
		std::list<int> sys_list;
		ft::list<int> our_list;
		std::list<int> sys_list2;
		ft::list<int> our_list2;
		sys_list.push_back(0);
		our_list.push_back(0);
		sys_list.push_back(34);
		our_list.push_back(34);
		sys_list.push_back(56);
		our_list.push_back(56);
		sys_list2.push_back(100);
		our_list2.push_back(100);
		sys_list2.push_back(85);
		our_list2.push_back(85);
		sys_list2.push_back(12);
		our_list2.push_back(12);
		sys_list2.push_back(200);
		our_list2.push_back(200);
		sys_list.swap(sys_list2);
		our_list.swap(our_list2);
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "SWAP" <<  OFF << std::endl;
	}

	// ------------------ITERATOR METHODS---------------------- 
	std::cout << YELLOW <<"LIST ITERATOR OPERATOR [SYS vs OUR]" << OFF <<std::endl;
	{
		// BEGIN 
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_back(1);
		sys_list.push_back(2);
		sys_list.push_back(32);
		our_list.push_back(1);
		our_list.push_back(2);
		our_list.push_back(32);
		sys_list.push_back(1);
		sys_list.push_back(2);
		sys_list.push_back(32);
		our_list.push_back(1);
		our_list.push_back(2);
		our_list.push_back(32);
		std::list<int>::iterator sys_it = sys_list.begin();
		ft::list<int>::iterator our_it = our_list.begin();
		if (*sys_it == *our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "BEGIN" << OFF << std::endl;
	}
	{
		// ++BEGIN
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_back(1);
		sys_list.push_back(2);
		sys_list.push_back(32);
		our_list.push_back(1);
		our_list.push_back(2);
		our_list.push_back(32);
		sys_list.push_back(1);
		sys_list.push_back(2);
		sys_list.push_back(32);
		our_list.push_back(1);
		our_list.push_back(2);
		our_list.push_back(32);
		std::list<int>::iterator sys_it = sys_list.begin();
		ft::list<int>::iterator our_it = our_list.begin();
		if (*++sys_it == *++our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "++BEGIN test 1" << OFF << std::endl;
		if (*++sys_it == *++our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "++BEGIN test 2" << OFF << std::endl;
		if (*sys_it == *our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "++BEGIN test 3" << OFF << std::endl;
	}
	{
		// BEGIN++
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_back(1);
		sys_list.push_back(2);
		sys_list.push_back(32);
		our_list.push_back(1);
		our_list.push_back(2);
		our_list.push_back(32);
		sys_list.push_back(1);
		sys_list.push_back(2);
		sys_list.push_back(32);
		our_list.push_back(1);
		our_list.push_back(2);
		our_list.push_back(32);
		std::list<int>::iterator sys_it = sys_list.begin();
		ft::list<int>::iterator our_it = our_list.begin();
		if (*sys_it++ == *our_it++)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "BEGIN++ test 1" << OFF << std::endl;
		if (*sys_it++ == *our_it++)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "BEGIN++ test 2" << OFF << std::endl;
		if (*sys_it == *our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "BEGIN++ test 3" << OFF << std::endl;
	}
	{
		// --BEGIN
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_back(1);
		sys_list.push_back(2);
		sys_list.push_back(32);
		our_list.push_back(1);
		our_list.push_back(2);
		our_list.push_back(32);
		sys_list.push_back(1);
		sys_list.push_back(2);
		sys_list.push_back(32);
		our_list.push_back(1);
		our_list.push_back(2);
		our_list.push_back(32);
		std::list<int>::iterator sys_it = sys_list.begin();
		ft::list<int>::iterator our_it = our_list.begin();
		--sys_it;
		--our_it;		
		if (*--sys_it == *--our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "--BEGIN test 1" << OFF << std::endl;
		if (*--sys_it == *--our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "--BEGIN test 2" << OFF << std::endl;
		if (*sys_it == *our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "--BEGIN test 3" << OFF << std::endl;
	}
	{
		// BEGIN--
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_back(1);
		sys_list.push_back(2);
		sys_list.push_back(32);
		our_list.push_back(1);
		our_list.push_back(2);
		our_list.push_back(32);
		sys_list.push_back(1);
		sys_list.push_back(2);
		sys_list.push_back(32);
		our_list.push_back(1);
		our_list.push_back(2);
		our_list.push_back(32);
		std::list<int>::iterator sys_it = sys_list.begin();
		ft::list<int>::iterator our_it = our_list.begin();
		sys_it--;
		our_it--;
		sys_it--;
		our_it--;
		if (*sys_it-- == *our_it--)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "BEGIN-- test 1" << OFF << std::endl;
		if (*sys_it-- == *our_it--)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "BEGIN-- test 2" << OFF << std::endl;
		if (*sys_it == *our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "BEGIN-- test 3" << OFF << std::endl;
	}
	{
		// ++END
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_back(1);
		sys_list.push_back(2);
		sys_list.push_back(32);
		our_list.push_back(1);
		our_list.push_back(2);
		our_list.push_back(32);
		sys_list.push_back(1);
		sys_list.push_back(2);
		sys_list.push_back(32);
		our_list.push_back(1);
		our_list.push_back(2);
		our_list.push_back(32);
		std::list<int>::iterator sys_it = sys_list.end();
		ft::list<int>::iterator our_it = our_list.end();
		if (*++sys_it == *++our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "++END test 1" << OFF << std::endl;
		if (*++sys_it == *++our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "++END test 2" << OFF << std::endl;
		if (*sys_it == *our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "++END test 3" << OFF << std::endl;
	}
	{
		// END++
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_back(1);
		sys_list.push_back(2);
		sys_list.push_back(32);
		our_list.push_back(1);
		our_list.push_back(2);
		our_list.push_back(32);
		sys_list.push_back(1);
		sys_list.push_back(2);
		sys_list.push_back(32);
		our_list.push_back(1);
		our_list.push_back(2);
		our_list.push_back(32);
		std::list<int>::iterator sys_it = sys_list.end();
		ft::list<int>::iterator our_it = our_list.end();
		sys_it++;
		our_it++;
		if (*sys_it++ == *our_it++)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "END++ test 1" << OFF << std::endl;
		if (*--sys_it == *--our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "END++ test 2" << OFF << std::endl;
		if (*sys_it == *our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "END++ test 3" << OFF << std::endl;
	}
	{
		// --END
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_back(1);
		sys_list.push_back(2);
		sys_list.push_back(32);
		our_list.push_back(1);
		our_list.push_back(2);
		our_list.push_back(32);
		sys_list.push_back(1);
		sys_list.push_back(2);
		sys_list.push_back(32);
		our_list.push_back(1);
		our_list.push_back(2);
		our_list.push_back(32);
		std::list<int>::iterator sys_it = sys_list.end();
		ft::list<int>::iterator our_it = our_list.end();
		if (*--sys_it == *--our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "--END test 1" << OFF << std::endl;
		if (*--sys_it == *--our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "--END test 2" << OFF << std::endl;
		if (*sys_it == *our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "--END test 3" << OFF << std::endl;
	}
	{
		// END--
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_back(1);
		sys_list.push_back(2);
		sys_list.push_back(32);
		our_list.push_back(1);
		our_list.push_back(2);
		our_list.push_back(32);
		sys_list.push_back(1);
		sys_list.push_back(2);
		sys_list.push_back(32);
		our_list.push_back(1);
		our_list.push_back(2);
		our_list.push_back(32);
		std::list<int>::iterator sys_it = sys_list.end();
		ft::list<int>::iterator our_it = our_list.end();
		sys_it--;
		our_it--;
		if (*sys_it-- == *our_it--)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "END-- test 1" << OFF << std::endl;
		if (*sys_it-- == *our_it--)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "END-- test 2" << OFF << std::endl;
		if (*sys_it == *our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "END-- test 3" << OFF << std::endl;
	}
}
