#include "List.hpp"
#include "Vector.hpp"
#include <list>
#include <vector>
#include <iterator>
#include <iostream>
#include <exception>
// COLORS 
#define RED "\033[0;31m"
#define	GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define OFF "\033[0m"
// END COLORS

static bool binaryINT (int const &n1, int const &n2)
{ 
	return ( n1 > n2 );
}

static bool singleINT (const int &n1)
{ 
	return (n1 > 100);
}

template <class T>
static void print_sys(std::list<T> &list)
{
	std::list<int>::iterator sys_it_begin = list.begin();
	std::list<int>::iterator  sys_it_end = list.end();
	std::cout << "SYS: ";
	while (sys_it_begin != sys_it_end)
	{
		std::cout << *sys_it_begin << " ";
		++sys_it_begin;	
	}
	std::cout << std::endl;
}

template <class T>
static void print_sys(std::vector<T> &vector)
{
	std::vector<int>::iterator sys_it_begin = vector.begin();
	std::vector<int>::iterator sys_it_end = vector.end();
	std::cout << "SYS: ";
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
	ft::list<int>::iterator our_it_begin = list.begin();
	ft::list<int>::iterator our_it_end = list.end();
	std::cout << "OUR: ";
	while (our_it_begin != our_it_end)
	{
		std::cout << *our_it_begin << " ";
		++our_it_begin;	
	}
	std::cout << std::endl;
}

template <class T>
static void print_our(ft::vector<T> &vector)
{
	ft::vector<int>::iterator our_it_begin = vector.begin();
	ft::vector<int>::iterator our_it_end = vector.end();
	std::cout << "OUR: ";
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
	ft::list<int>::iterator our_it_begin = our_list.begin();
	std::list<int>::iterator sys_it_begin = sys_list.begin();
	ft::list<int>::iterator our_it_end = our_list.end();
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

	if (sys_list.size() != our_list.size())
	{
		std::cout << "SIZE " << sys_list.size() << " != " << our_list.size() << " ";
		return false;
	}
	if (sys_list.empty() != our_list.empty())
	{
		std::cout << "EMPTY " << sys_list.empty() << " != " << our_list.empty() << " ";
		return false;
	}
	if (sys_list.front() != our_list.front())
	{
		std::cout << "FRONT " << sys_list.front() << " != " << our_list.front() << " ";
		return false;
	}
	if (sys_list.back() != our_list.back())
	{
		std::cout << "BACK " << sys_list.back() << " != " << our_list.back() << " ";
		return false;
	}
	if (sys_list.max_size() != our_list.max_size())
	{
		std::cout << "MAX SIZE " << sys_list.max_size() << " != " << our_list.max_size() << " ";
		return false;
	}
	return true;
}

template <class T>
static bool equalSysFt(std::vector<T> &sys_vector, ft::vector<T> &our_vector)
{
	ft::vector<int>::iterator our_it_begin = our_vector.begin();
	std::vector<int>::iterator sys_it_begin = sys_vector.begin();
	ft::vector<int>::iterator our_it_end = our_vector.end();
	std::vector<int>::iterator  sys_it_end = sys_vector.end();

	while(sys_it_begin != sys_it_end)
	{
		if (*sys_it_begin != *our_it_begin)
		{
			print_sys(sys_vector);
			print_our(our_vector);
			return false;
		}
		sys_it_begin++;
		our_it_begin++;
	}
	for (int i = 0; i < sys_vector.size(); i++)
	{
		if (sys_vector[i] != our_vector[i] || sys_vector.at(i) != our_vector.at(i))
		{
			print_sys(sys_vector);
			print_our(our_vector);
			return false;
		}	
	}

	our_it_begin = our_vector.begin();
	sys_it_begin = sys_vector.begin();

	while (our_it_begin != our_it_end)
	{
		if (*sys_it_begin != *our_it_begin)
		{
			print_sys(sys_vector);
			print_our(our_vector);
			return false;
		}
		sys_it_begin++;
		our_it_begin++;
	}
	for (int i = 0; i < our_vector.size(); i++)
	{
		if (our_vector[i] != sys_vector[i] || sys_vector.at(i) != our_vector.at(i))
		{
			print_sys(sys_vector);
			print_our(our_vector);
			return false;
		}	
	}

	if (sys_vector.size() != our_vector.size())
	{
		std::cout << "SIZE " << sys_vector.size() << " != " << our_vector.size() << " ";
		return false;
	}
	if (sys_vector.empty() != our_vector.empty())
	{
		std::cout << "EMPTY " << sys_vector.empty() << " != " << our_vector.empty() << " ";
		return false;
	}
	if (sys_vector.capacity() != our_vector.capacity())
	{
		std::cout << "CAPACITY " << sys_vector.capacity() << " != " << our_vector.capacity() << " ";
		return false;
	}
	if (sys_vector.size() > 0 &&  sys_vector.front() != our_vector.front())
	{
		std::cout << "FRONT " << sys_vector.front() << " != " << our_vector.front() << " ";
		return false;
	}
	if (sys_vector.size() > 0 && sys_vector.back() != our_vector.back())
	{
		std::cout << "BACK " << sys_vector.back() << " != " << our_vector.back() << " ";
		return false;
	}
	if (sys_vector.max_size() != our_vector.max_size())
	{
		std::cout << "MAX SIZE " << sys_vector.max_size() << " != " << our_vector.max_size() << " ";
		return false;
	}
	return true;
}


static void testLIST(void)
{

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
	// ----------------------INIT COPY CONSTRUCOT------------------ 
	std::cout << YELLOW <<"INIT LISTA COPY CONSTRUCTOR (LIST) [SYS vs OUR]" << OFF <<std::endl;
	{
		std::list<int> copy_sys_list(5,10);
		std::list<int> sys_list(copy_sys_list);
		ft::list<int> copy_our_list(5,10);
		ft::list<int> our_list(copy_our_list);

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
		our_list.unique(); //CRASH ON LINUX
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "UNIQUE" <<  OFF << std::endl;
	}
	{
		//UNIQUE PREDICATE
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
		sys_list.unique(binaryINT);
		our_list.unique(binaryINT);
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "UNIQUE PREDICATE" <<  OFF << std::endl;
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
		sys_list.sort(binaryINT);
		our_list.sort(binaryINT);
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
		our_list.remove(200); // CRASH ON LINUX
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "REMOVE" <<  OFF << std::endl;
	}
	{
		// REMOVE IF
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
		sys_list.remove_if(singleINT);
		our_list.remove_if(singleINT);
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "REMOVE_IF" <<  OFF << std::endl;
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
		std::cout << "MERGE (OTHER LIST) test 1" <<  OFF << std::endl;
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
		sys_list2.merge(sys_list);
		our_list2.merge(our_list);
		if (equalSysFt(sys_list2, our_list2))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "MERGE (OTHER LIST) test 2" <<  OFF << std::endl;
	}
	{
		// MERGE LIST COMPARE test 1
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
		sys_list.merge(sys_list2, binaryINT);
		our_list.merge(our_list2, binaryINT);
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "MERGE (OTHER LIST, COMPARE) test 1" <<  OFF << std::endl;
	}
	{
		//MERGE LIST COMPARE test 2
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
		sys_list2.merge(sys_list, binaryINT);
		our_list2.merge(our_list, binaryINT);
		if (equalSysFt(sys_list2, our_list2))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "MERGE (OTHER LIST, COMPARE) test 2" <<  OFF << std::endl;
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
		sys_list.splice(sys_list.begin(), sys_list2);
		our_list.splice(our_list.begin(), our_list2);
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "SPLICE (ITERATOR, LIST) test 1" <<  OFF << std::endl;
	}
	{
		//SPLICE IT LIST
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
		sys_list.splice(sys_list2.begin(), sys_list2);
		our_list.splice(our_list2.begin(), our_list2);
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "SPLICE (ITERATOR, LIST) test 2" <<  OFF << std::endl;
	}
	{
		//SPLICE IT LIST IT
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
		sys_list.splice(sys_list2.begin(), sys_list2, ++sys_list2.begin());
		our_list.splice(our_list2.begin(), our_list2, ++our_list2.begin());
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "SPLICE (ITERATOR, LIST, ITERATOR) test 1" <<  OFF << std::endl;
	}
	{
		//SPLICE IT LIST IT
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
		sys_list.splice(sys_list.begin(), sys_list2, ++sys_list2.begin());
		our_list.splice(our_list.begin(), our_list2, ++our_list2.begin());
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "SPLICE (ITERATOR, LIST, ITERATOR) test 2" <<  OFF << std::endl;
	}
	{
		//SPLICE IT LIST IT IT
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
		sys_list.splice(sys_list.begin(), sys_list2, ++sys_list2.begin(), sys_list2.end());
		our_list.splice(our_list.begin(), our_list2, ++our_list2.begin(), our_list.end());
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "SPLICE (ITERATOR, LIST, ITERATOR, ITERATOR) test 1" <<  OFF << std::endl;
	}
	{
		//SPLICE IT LIST IT IT
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
		sys_list.splice(sys_list2.begin(), sys_list2, sys_list2.begin(), sys_list2.end());
		our_list.splice(our_list2.begin(), our_list2, our_list2.begin(), our_list.end());
		if (equalSysFt(sys_list, our_list))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "SPLICE (ITERATOR, LIST, ITERATOR, ITERATOR) test 2" <<  OFF << std::endl;
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
}


static void testVECTOR(void)
{
	// ------------------ITERATOR METHODS---------------------- 
	std::cout << YELLOW <<"VECTOR ITERATOR OPERATOR [SYS vs OUR]" << OFF <<std::endl;
	{
		// BEGIN 
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.push_back(1);
		sys_vector.push_back(2);
		sys_vector.push_back(32);
		our_vector.push_back(1);
		our_vector.push_back(2);
		our_vector.push_back(32);
		sys_vector.push_back(1);
		sys_vector.push_back(2);
		sys_vector.push_back(32);
		our_vector.push_back(1);
		our_vector.push_back(2);
		our_vector.push_back(32);
		std::vector<int>::iterator sys_it = sys_vector.begin();
		ft::vector<int>::iterator our_it = our_vector.begin();
		if (*sys_it == *our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "BEGIN" << OFF << std::endl;
	}
	{
		// ++BEGIN
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.push_back(1);
		sys_vector.push_back(2);
		sys_vector.push_back(32);
		our_vector.push_back(1);
		our_vector.push_back(2);
		our_vector.push_back(32);
		sys_vector.push_back(1);
		sys_vector.push_back(2);
		sys_vector.push_back(32);
		our_vector.push_back(1);
		our_vector.push_back(2);
		our_vector.push_back(32);
		std::vector<int>::iterator sys_it = sys_vector.begin();
		ft::vector<int>::iterator our_it = our_vector.begin();
		if (*++sys_it == *++our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "++BEGIN test 1" << OFF << std::endl;
		if (*++sys_it == *++our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "++BEGIN test 2" << OFF << std::endl;
		if (*sys_it == *our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "++BEGIN test 3" << OFF << std::endl;
	}
	{
		// BEGIN++
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.push_back(1);
		sys_vector.push_back(2);
		sys_vector.push_back(32);
		our_vector.push_back(1);
		our_vector.push_back(2);
		our_vector.push_back(32);
		sys_vector.push_back(1);
		sys_vector.push_back(2);
		sys_vector.push_back(32);
		our_vector.push_back(1);
		our_vector.push_back(2);
		our_vector.push_back(32);
		std::vector<int>::iterator sys_it = sys_vector.begin();
		ft::vector<int>::iterator our_it = our_vector.begin();
		if (*sys_it++ == *our_it++)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "BEGIN++ test 1" << OFF << std::endl;
		if (*sys_it++ == *our_it++)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "BEGIN++ test 2" << OFF << std::endl;
		if (*sys_it == *our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "BEGIN++ test 3" << OFF << std::endl;
	}
	{
		// BEGIN--
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.push_back(1);
		sys_vector.push_back(2);
		sys_vector.push_back(32);
		our_vector.push_back(1);
		our_vector.push_back(2);
		our_vector.push_back(32);
		sys_vector.push_back(1);
		sys_vector.push_back(2);
		sys_vector.push_back(32);
		our_vector.push_back(1);
		our_vector.push_back(2);
		our_vector.push_back(32);
		std::vector<int>::iterator sys_it = sys_vector.begin();
		ft::vector<int>::iterator our_it = our_vector.begin();
		if (*sys_it-- == *our_it--)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "BEGIN--" << OFF << std::endl;
	}
	{
		// END++
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.push_back(1);
		sys_vector.push_back(2);
		sys_vector.push_back(32);
		our_vector.push_back(1);
		our_vector.push_back(2);
		our_vector.push_back(32);
		sys_vector.push_back(1);
		sys_vector.push_back(2);
		sys_vector.push_back(32);
		our_vector.push_back(1);
		our_vector.push_back(2);
		our_vector.push_back(32);
		std::vector<int>::iterator sys_it = sys_vector.begin();
		ft::vector<int>::iterator our_it = our_vector.begin();
		sys_it++;
		our_it++;
		if (*sys_it++ == *our_it++)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "END++" << OFF << std::endl;
	}
	{
		// --END
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.push_back(1);
		sys_vector.push_back(2);
		sys_vector.push_back(32);
		our_vector.push_back(1);
		our_vector.push_back(2);
		our_vector.push_back(32);
		sys_vector.push_back(1);
		sys_vector.push_back(2);
		sys_vector.push_back(32);
		our_vector.push_back(1);
		our_vector.push_back(2);
		our_vector.push_back(32);
		std::vector<int>::iterator sys_it = sys_vector.end();
		ft::vector<int>::iterator our_it = our_vector.end();
		if (*--sys_it == *--our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "--END test 1" << OFF << std::endl;
		if (*--sys_it == *--our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "--END test 2" << OFF << std::endl;
		if (*sys_it == *our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "--END test 3" << OFF << std::endl;
	}
	{
		// END--
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.push_back(1);
		sys_vector.push_back(2);
		sys_vector.push_back(32);
		our_vector.push_back(1);
		our_vector.push_back(2);
		our_vector.push_back(32);
		sys_vector.push_back(1);
		sys_vector.push_back(2);
		sys_vector.push_back(32);
		our_vector.push_back(1);
		our_vector.push_back(2);
		our_vector.push_back(32);
		std::vector<int>::iterator sys_it = sys_vector.end();
		ft::vector<int>::iterator our_it = our_vector.end();
		sys_it--;
		our_it--;
		if (*sys_it-- == *our_it--)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "END-- test 1" << OFF << std::endl;
		if (*sys_it-- == *our_it--)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "END-- test 2" << OFF << std::endl;
		if (*sys_it == *our_it)	std::cout << GREEN;	else std::cout << RED;
		std::cout << "END-- test 3" << OFF << std::endl;
	}
	// -------------------INIT EMPTY--------------------- 
	std::cout << YELLOW <<"INIT VECTOR VUOTO [SYS vs OUR]" << OFF <<std::endl;   
	{
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;

		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	// --------------------INT 1 PARAMETRO-------------------- 
	std::cout << YELLOW <<"INIT VECTOR 1 PARAMETRO (20) [SYS vs OUR]" << OFF <<std::endl;
	{
		std::vector<int> sys_vector(20);
		ft::vector<int> our_vector(20);

		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	// ----------------------INIT 2 PARAMETRI------------------ 
	std::cout << YELLOW <<"INIT VECTOR COPY CONSTRUCTOR [SYS vs OUR]" << OFF <<std::endl;
	{
		std::vector<int> sys_vector(100);
		ft::vector<int> our_vector(100);
		std::vector<int> sys_vector2(sys_vector);
		ft::vector<int> our_vector2(our_vector);

		if (equalSysFt(sys_vector2, our_vector2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	// --------------------LIST METHODS-------------------- 
	std::cout << YELLOW <<"VECTOR METHODS [SYS vs OUR]" << OFF <<std::endl;
	{
		// PUSH BACK 
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.push_back(99);
		sys_vector.push_back(78);
		sys_vector.push_back(33);
		our_vector.push_back(99);
		our_vector.push_back(78);	
		our_vector.push_back(33);	
		if (equalSysFt(sys_vector, our_vector))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "PUSH BACK" << OFF << std::endl;
	}
	{
		// POP BACK 
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.push_back(12);
		our_vector.push_back(12);
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector.push_back(1);
		our_vector.push_back(1);
		sys_vector.pop_back();
		our_vector.pop_back();
		if (equalSysFt(sys_vector, our_vector))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "POP BACK" << OFF << std::endl;
	}
	{
		// RESERVE
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.push_back(12);
		our_vector.push_back(12);
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector.push_back(1);
		our_vector.push_back(1);
		sys_vector.reserve(12);
		our_vector.reserve(12);
		if (equalSysFt(sys_vector, our_vector))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "RESERVE" << OFF << std::endl;
	}
	{
		// RESIZE
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.push_back(12);
		our_vector.push_back(12);
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector.push_back(1);
		our_vector.push_back(1);
		sys_vector.resize(12);
		our_vector.resize(12);
		if (equalSysFt(sys_vector, our_vector))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "RESIZE (INT)" << OFF << std::endl;
	}
	{
		// RESIZE
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.push_back(12);
		our_vector.push_back(12);
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector.push_back(1);
		our_vector.push_back(1);
		sys_vector.resize(12, 55);
		our_vector.resize(12, 55);
		if (equalSysFt(sys_vector, our_vector))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "RESIZE (INT, INT)" << OFF << std::endl;
	}
	{
		// RESIZE
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.push_back(12);
		our_vector.push_back(12);
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector.push_back(1);
		our_vector.push_back(1);
		sys_vector.push_back(12);
		our_vector.push_back(12);
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector.push_back(1);
		our_vector.push_back(1);
		if (equalSysFt(sys_vector, our_vector))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "RESIZE (INT, INT)" << OFF << std::endl;
	}
	{
		// ASSIGN
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		std::vector<int> sys_vector2;
		ft::vector<int> our_vector2;
		sys_vector.push_back(12);
		our_vector.push_back(12);
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector.push_back(1);
		our_vector.push_back(1);
		sys_vector.push_back(12);
		our_vector.push_back(12);
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector2.push_back(111);
		our_vector2.push_back(111);
		sys_vector2.push_back(120);
		our_vector2.push_back(120);
		sys_vector2.push_back(850);
		our_vector2.push_back(850);
		sys_vector.assign(sys_vector2.begin(), sys_vector2.end());
		our_vector.assign(our_vector2.begin(), our_vector2.end());
		if (equalSysFt(sys_vector, our_vector))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "ASSIGN (ITERATOR, ITERATOR)" << OFF << std::endl;
	}
	{
		// ASSIGN
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.push_back(12);
		our_vector.push_back(12);
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector.push_back(1);
		our_vector.push_back(1);
		sys_vector.push_back(12);
		our_vector.push_back(12);
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector.assign(5, 99);
		our_vector.assign(5, 99);
		if (equalSysFt(sys_vector, our_vector))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "ASSIGN (INT, INT)" << OFF << std::endl;
	}
	{
		// INSERT
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.insert(sys_vector.begin(), 99);
		our_vector.insert(our_vector.begin(), 99);
		if (equalSysFt(sys_vector, our_vector))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "INSERT (ITERATOR, INT) test 1" << OFF << std::endl;
	}
	{
		// INSERT
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector.push_back(1);
		our_vector.push_back(1);
		sys_vector.push_back(12);
		our_vector.push_back(12);
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector.insert(++sys_vector.begin(), 99);
		our_vector.insert(++our_vector.begin(), 99);
		if (equalSysFt(sys_vector, our_vector))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "INSERT (ITERATOR, INT) test 2" << OFF << std::endl;
	}
	{
		// INSERT
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.insert(sys_vector.begin(), 6, 85);
		our_vector.insert(our_vector.begin(), 6, 85);
		if (equalSysFt(sys_vector, our_vector))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "INSERT (ITERATOR, INT, INT) test 1" << OFF << std::endl;
	}
	{
		// INSERT
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector.push_back(1);
		our_vector.push_back(1);
		sys_vector.push_back(12);
		our_vector.push_back(12);
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector.insert(++sys_vector.begin(), 6, 85);
		our_vector.insert(++our_vector.begin(), 6, 85);
		if (equalSysFt(sys_vector, our_vector))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "INSERT (ITERATOR, INT, INT) test 2" << OFF << std::endl;
	}
	{
		// INSERT
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		std::vector<int> sys_vector2;
		ft::vector<int> our_vector2;
		sys_vector2.push_back(111);
		our_vector2.push_back(111);
		sys_vector2.push_back(120);
		our_vector2.push_back(120);
		sys_vector2.push_back(850);
		our_vector2.push_back(850);
		sys_vector.insert(sys_vector.begin(), sys_vector2.begin(), sys_vector2.end());
		our_vector.insert(our_vector.begin(), our_vector2.begin(), our_vector2.end());
		if (equalSysFt(sys_vector, our_vector))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "INSERT (ITERATOR, ITERATOR, ITERATOR) test 1" << OFF << std::endl;
	}
	{
		// INSERT
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		std::vector<int> sys_vector2;
		ft::vector<int> our_vector2;
		sys_vector.push_back(12);
		our_vector.push_back(12);
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector.push_back(1);
		our_vector.push_back(1);
		sys_vector.push_back(12);
		our_vector.push_back(12);
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector2.push_back(111);
		our_vector2.push_back(111);
		sys_vector2.push_back(120);
		our_vector2.push_back(120);
		sys_vector2.push_back(850);
		our_vector2.push_back(850);
		sys_vector.insert(++sys_vector.begin(), sys_vector2.begin(), sys_vector2.end());
		our_vector.insert(++our_vector.begin(), our_vector2.begin(), our_vector2.end());
		if (equalSysFt(sys_vector, our_vector))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "INSERT (ITERATOR, ITERATOR, ITERATOR) test 2" << OFF << std::endl;
	}
	{
		// ERASE
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector.push_back(1);
		our_vector.push_back(1);
		sys_vector.push_back(12);
		our_vector.push_back(12);
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector.erase(++sys_vector.begin());
		our_vector.erase(++our_vector.begin());
		if (equalSysFt(sys_vector, our_vector))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "ERASE (ITERATOR)" << OFF << std::endl;
	}
	{
		// ERASE
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector.push_back(1);
		our_vector.push_back(1);
		sys_vector.push_back(12);
		our_vector.push_back(12);
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector.erase(++sys_vector.begin(), sys_vector.end());
		our_vector.erase(++our_vector.begin(), our_vector.end());
		if (equalSysFt(sys_vector, our_vector))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "ERASE (ITERATOR, ITERATOR)" << OFF << std::endl;
	}
	{
		// SWAP
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		std::vector<int> sys_vector2;
		ft::vector<int> our_vector2;
		sys_vector.push_back(12);
		our_vector.push_back(12);
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector.push_back(1);
		our_vector.push_back(1);
		sys_vector.push_back(12);
		our_vector.push_back(12);
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector2.push_back(111);
		our_vector2.push_back(111);
		sys_vector2.push_back(120);
		our_vector2.push_back(120);
		sys_vector2.push_back(850);
		our_vector2.push_back(850);
		sys_vector.swap(sys_vector2);
		our_vector.swap(our_vector2);
		if (equalSysFt(sys_vector, our_vector))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "SWAP" << OFF << std::endl;
	}

	{
		// CLEAR
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector.push_back(1);
		our_vector.push_back(1);
		sys_vector.push_back(12);
		our_vector.push_back(12);
		sys_vector.push_back(85);
		our_vector.push_back(85);
		sys_vector.clear();
		our_vector.clear();
		if (equalSysFt(sys_vector, our_vector))	std::cout << GREEN;	else std::cout << RED;
		std::cout << "CLEAR" << OFF << std::endl;
	}
}

// -----------------------------MAIN------------------
int main (int argc, char **argv)
{
	if (argc == 1)
	{
		testLIST();
		testVECTOR();
		return 0;
	}
	std::string test = argv[1];

	if (test == "list")
		testLIST();
	if (test == "vector")
		testVECTOR();
}
