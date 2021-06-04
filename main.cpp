#include "List.hpp"
#include "Vector.hpp"
#include "Stack.hpp"
#include "Queue.hpp"
#include "Map.hpp"
#include "Set.hpp"
#include "MultiSet.hpp"
#include "MultiMap.hpp"
#include "Deque.hpp"
#include <list>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <iostream>

// COLORS
#define BLUE "\033[44m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define OFF "\033[0m"
// END COLORS

static bool binaryINT(int const &n1, int const &n2)
{
	return (n1 > n2);
}

static bool singleINT(const int &n1)
{
	return (n1 > 100);
}

static void print_sys(std::list<int> &list)
{
	std::list<int>::iterator sys_it_begin = list.begin();
	std::list<int>::iterator sys_it_end = list.end();
	std::cout << "SYS: ";
	while (sys_it_begin != sys_it_end)
	{
		std::cout << *sys_it_begin << " ";
		++sys_it_begin;
	}
	std::cout << std::endl;
}

static void print_sys(std::vector<int> &vector)
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

static void print_sys(std::deque<int> &vector)
{
	std::deque<int>::iterator sys_it_begin = vector.begin();
	std::deque<int>::iterator sys_it_end = vector.end();
	std::cout << "SYS: ";
	while (sys_it_begin != sys_it_end)
	{
		std::cout << *sys_it_begin << " ";
		++sys_it_begin;
	}
	std::cout << std::endl;
}

static void print_sys(std::map<int, int> &map)
{
	std::map<int, int>::iterator sys_it_begin = map.begin();
	std::map<int, int>::iterator sys_it_end = map.end();
	std::cout << "SYS: ";
	while (sys_it_begin != sys_it_end)
	{
		std::cout << sys_it_begin->first << " ";
		++sys_it_begin;
	}
	std::cout << std::endl;
}

static void print_sys(std::multimap<int, int> &map)
{
	std::multimap<int, int>::iterator sys_it_begin = map.begin();
	std::multimap<int, int>::iterator sys_it_end = map.end();
	std::cout << "SYS: ";
	while (sys_it_begin != sys_it_end)
	{
		std::cout << sys_it_begin->first << " ";
		++sys_it_begin;
	}
	std::cout << std::endl;
}

static void print_sys(std::set<int> &set)
{
	std::set<int>::iterator sys_it_begin = set.begin();
	std::set<int>::iterator sys_it_end = set.end();
	std::cout << "SYS: ";
	while (sys_it_begin != sys_it_end)
	{
		std::cout << *sys_it_begin << " ";
		++sys_it_begin;
	}
	std::cout << std::endl;
}

static void print_sys(std::multiset<int> &set)
{
	std::multiset<int>::iterator sys_it_begin = set.begin();
	std::multiset<int>::iterator sys_it_end = set.end();
	std::cout << "SYS: ";
	while (sys_it_begin != sys_it_end)
	{
		std::cout << *sys_it_begin << " ";
		++sys_it_begin;
	}
	std::cout << std::endl;
}

static void print_our(ft::list<int> &list)
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

static void print_our(ft::vector<int> &vector)
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

static void print_our(ft::deque<int> &vector)
{
	ft::deque<int>::iterator our_it_begin = vector.begin();
	ft::deque<int>::iterator our_it_end = vector.end();
	std::cout << "OUR: ";
	while (our_it_begin != our_it_end)
	{
		std::cout << *our_it_begin << " ";
		++our_it_begin;
	}
	std::cout << std::endl;
}

static void print_our(ft::map<int, int> &map)
{
	ft::map<int, int>::iterator our_it_begin = map.begin();
	ft::map<int, int>::iterator our_it_end = map.end();
	std::cout << "OUR: ";
	while (our_it_begin != our_it_end)
	{
		std::cout << our_it_begin->first << " ";
		++our_it_begin;
	}
	std::cout << std::endl;
}

static void print_our(ft::multimap<int, int> &map)
{
	ft::multimap<int, int>::iterator our_it_begin = map.begin();
	ft::multimap<int, int>::iterator our_it_end = map.end();
	std::cout << "OUR: ";
	while (our_it_begin != our_it_end)
	{
		std::cout << our_it_begin->first << " ";
		++our_it_begin;
	}
	std::cout << std::endl;
}

static void print_our(ft::set<int> &set)
{
	ft::set<int>::iterator our_it_begin = set.begin();
	ft::set<int>::iterator our_it_end = set.end();
	std::cout << "OUR: ";
	while (our_it_begin != our_it_end)
	{
		std::cout << *our_it_begin << " ";
		++our_it_begin;
	}
	std::cout << std::endl;
}

static void print_our(ft::multiset<int> &set)
{
	ft::multiset<int>::iterator our_it_begin = set.begin();
	ft::multiset<int>::iterator our_it_end = set.end();
	std::cout << "OUR: ";
	while (our_it_begin != our_it_end)
	{
		std::cout << *our_it_begin << " ";
		++our_it_begin;
	}
	std::cout << std::endl;
}

static bool equalSysFt(std::list<int> &sys_list, ft::list<int> &our_list)
{
	ft::list<int>::iterator our_it_begin = our_list.begin();
	std::list<int>::iterator sys_it_begin = sys_list.begin();
	ft::list<int>::iterator our_it_end = our_list.end();
	std::list<int>::iterator sys_it_end = sys_list.end();

	while (sys_it_begin != sys_it_end)
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

static bool equalSysFt(std::vector<int> &sys_vector, ft::vector<int> &our_vector)
{
	ft::vector<int>::iterator our_it_begin = our_vector.begin();
	std::vector<int>::iterator sys_it_begin = sys_vector.begin();
	ft::vector<int>::iterator our_it_end = our_vector.end();
	std::vector<int>::iterator sys_it_end = sys_vector.end();

	while (sys_it_begin != sys_it_end)
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
	for (size_t i = 0; i < sys_vector.size(); i++)
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
	for (size_t i = 0; i < our_vector.size(); i++)
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
	if (sys_vector.size() > 0 && sys_vector.front() != our_vector.front())
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


static bool equalSysFt(std::deque<int> &sys_deque, ft::deque<int> &our_deque)
{
	ft::deque<int>::iterator our_it_begin = our_deque.begin();
	std::deque<int>::iterator sys_it_begin = sys_deque.begin();
	ft::deque<int>::iterator our_it_end = our_deque.end();
	std::deque<int>::iterator sys_it_end = sys_deque.end();

	while (sys_it_begin != sys_it_end)
	{
		if (*sys_it_begin != *our_it_begin)
		{
			print_sys(sys_deque);
			print_our(our_deque);
			return false;
		}
		sys_it_begin++;
		our_it_begin++;
	}
	for (size_t i = 0; i < sys_deque.size(); i++)
	{
		if (sys_deque[i] != our_deque[i] || sys_deque.at(i) != our_deque.at(i))
		{
			print_sys(sys_deque);
			print_our(our_deque);
			return false;
		}
	}

	our_it_begin = our_deque.begin();
	sys_it_begin = sys_deque.begin();

	while (our_it_begin != our_it_end)
	{
		if (*sys_it_begin != *our_it_begin)
		{
			print_sys(sys_deque);
			print_our(our_deque);
			return false;
		}
		sys_it_begin++;
		our_it_begin++;
	}
	for (size_t i = 0; i < our_deque.size(); i++)
	{
		if (our_deque[i] != sys_deque[i] || sys_deque.at(i) != our_deque.at(i))
		{
			print_sys(sys_deque);
			print_our(our_deque);
			return false;
		}
	}

	if (sys_deque.size() != our_deque.size())
	{
		std::cout << "SIZE " << sys_deque.size() << " != " << our_deque.size() << " ";
		return false;
	}
	if (sys_deque.empty() != our_deque.empty())
	{
		std::cout << "EMPTY " << sys_deque.empty() << " != " << our_deque.empty() << " ";
		return false;
	}
	if (sys_deque.size() > 0 && sys_deque.front() != our_deque.front())
	{
		std::cout << "FRONT " << sys_deque.front() << " != " << our_deque.front() << " ";
		return false;
	}
	if (sys_deque.size() > 0 && sys_deque.back() != our_deque.back())
	{
		std::cout << "BACK " << sys_deque.back() << " != " << our_deque.back() << " ";
		return false;
	}
	if (sys_deque.max_size() != our_deque.max_size())
	{
		std::cout << "MAX SIZE " << sys_deque.max_size() << " != " << our_deque.max_size() << " ";
		return false;
	}
	return true;
}

static bool equalSysFt(std::stack<int> &sys_stack, ft::stack<int> &our_stack)
{
	if (sys_stack.size() > 0 && sys_stack.top() != our_stack.top())
	{
		std::cout << "TOP " << sys_stack.top() << " != " << our_stack.top() << " ";
		return false;
	}
	if (sys_stack.size() != our_stack.size())
	{
		std::cout << "SIZE " << sys_stack.size() << " != " << our_stack.size() << " ";
		return false;
	}
	if (sys_stack.empty() != our_stack.empty())
	{
		std::cout << "EMPTY " << sys_stack.empty() << " != " << our_stack.empty() << " ";
		return false;
	}

	while (sys_stack.size() > 0)
	{
		if (sys_stack.top() != our_stack.top())
		{
			std::cout << "VALUE DIFFERENT INSIDE " << sys_stack.top() << " != " << our_stack.top();
			return false;
		}
		sys_stack.pop();
		our_stack.pop();
	}
	return true;
}

static bool equalSysFt(std::queue<int> &sys_queue, ft::queue<int> &our_queue)
{
	if (sys_queue.size() > 0 && sys_queue.front() != our_queue.front())
	{
		std::cout << "FRONT " << sys_queue.front() << " != " << our_queue.front() << " ";
		return false;
	}
	if (sys_queue.size() > 0 && sys_queue.back() != our_queue.back())
	{
		std::cout << "BACK " << sys_queue.back() << " != " << our_queue.back() << " ";
		return false;
	}
	if (sys_queue.size() != our_queue.size())
	{
		std::cout << "SIZE " << sys_queue.size() << " != " << our_queue.size() << " ";
		return false;
	}
	if (sys_queue.empty() != our_queue.empty())
	{
		std::cout << "EMPTY " << sys_queue.empty() << " != " << our_queue.empty() << " ";
		return false;
	}

	while (sys_queue.size() > 0)
	{
		if (sys_queue.front() != our_queue.front())
		{
			std::cout << "VALUE DIFFERENT INSIDE " << sys_queue.front() << " != " << our_queue.front();
			return false;
		}
		sys_queue.pop();
		our_queue.pop();
	}
	return true;
}

static bool equalSysFt(std::map<int, int> &sys_map, ft::map<int, int> &our_map)
{
	if (sys_map.size() > 0)
	{
		ft::map<int, int>::iterator our_it_begin = our_map.begin();
		std::map<int, int>::iterator sys_it_begin = sys_map.begin();
		ft::map<int, int>::iterator our_it_end = our_map.end();
		std::map<int, int>::iterator sys_it_end = sys_map.end();

		while (sys_it_begin != sys_it_end)
		{
			if (sys_it_begin->first != our_it_begin->first || sys_it_begin->second != our_it_begin->second)
			{
				print_our(our_map);
				print_sys(sys_map);
				return false;
			}
			++sys_it_begin;
			++our_it_begin;
		}

		our_it_begin = our_map.begin();
		sys_it_begin = sys_map.begin();

		while (our_it_begin != our_it_end)
		{
			if (sys_it_begin->first != our_it_begin->first || sys_it_begin->second != our_it_begin->second)
			{
				print_our(our_map);
				print_sys(sys_map);
				return false;
			}
			++sys_it_begin;
			++our_it_begin;
		}
	}

	if (sys_map.size() != our_map.size())
	{
		std::cout << "SIZE " << sys_map.size() << " != " << our_map.size() << " ";
		return false;
	}
	if (sys_map.empty() != our_map.empty())
	{
		std::cout << "EMPTY " << sys_map.empty() << " != " << our_map.empty() << " ";
		return false;
	}
	if (our_map._tree.isValid() != 1)
	{
		our_map._tree.printTree();
		return false;
	}
	return true;
}


static bool equalSysFt(std::multimap<int, int> &sys_map, ft::multimap<int, int> &our_map)
{
	if (sys_map.size() > 0)
	{
		ft::multimap<int, int>::iterator our_it_begin = our_map.begin();
		std::multimap<int, int>::iterator sys_it_begin = sys_map.begin();
		ft::multimap<int, int>::iterator our_it_end = our_map.end();
		std::multimap<int, int>::iterator sys_it_end = sys_map.end();

		while (sys_it_begin != sys_it_end)
		{
			if (sys_it_begin->first != our_it_begin->first || sys_it_begin->second != our_it_begin->second)
			{
				print_our(our_map);
				print_sys(sys_map);
				return false;
			}
			++sys_it_begin;
			++our_it_begin;
		}

		our_it_begin = our_map.begin();
		sys_it_begin = sys_map.begin();

		while (our_it_begin != our_it_end)
		{
			if (sys_it_begin->first != our_it_begin->first || sys_it_begin->second != our_it_begin->second)
			{
				print_our(our_map);
				print_sys(sys_map);
				return false;
			}
			++sys_it_begin;
			++our_it_begin;
		}
	}

	if (sys_map.size() != our_map.size())
	{
		std::cout << "SIZE " << sys_map.size() << " != " << our_map.size() << " ";
		return false;
	}
	if (sys_map.empty() != our_map.empty())
	{
		std::cout << "EMPTY " << sys_map.empty() << " != " << our_map.empty() << " ";
		return false;
	}
	if (our_map._tree.isValid() != 1)
	{
		our_map._tree.printTree();
		return false;
	}
	return true;
}


static bool equalSysFt(std::set<int> &sys_set, ft::set<int> &our_set)
{
	if (sys_set.size() > 0)
	{
		ft::set<int>::iterator our_it_begin = our_set.begin();
		std::set<int>::iterator sys_it_begin = sys_set.begin();
		ft::set<int>::iterator our_it_end = our_set.end();
		std::set<int>::iterator sys_it_end = sys_set.end();

		while (sys_it_begin != sys_it_end)
		{
			if (*sys_it_begin != *our_it_begin)
			{
				print_our(our_set);
				print_sys(sys_set);
				return false;
			}
			++sys_it_begin;
			++our_it_begin;
		}

		our_it_begin = our_set.begin();
		sys_it_begin = sys_set.begin();

		while (our_it_begin != our_it_end)
		{
			if (*sys_it_begin != *our_it_begin)
			{
				print_our(our_set);
				print_sys(sys_set);
				return false;
			}
			++sys_it_begin;
			++our_it_begin;
		}
	}

	if (sys_set.size() != our_set.size())
	{
		std::cout << "SIZE " << sys_set.size() << " != " << our_set.size() << " ";
		return false;
	}
	if (sys_set.empty() != our_set.empty())
	{
		std::cout << "EMPTY " << sys_set.empty() << " != " << our_set.empty() << " ";
		return false;
	}
	if (our_set._tree.isValid() != 1)
	{
		our_set._tree.printTree();
		return false;
	}
	return true;
}


static bool equalSysFt(std::multiset<int> &sys_set, ft::multiset<int> &our_set)
{
	if (sys_set.size() > 0)
	{
		ft::multiset<int>::iterator our_it_begin = our_set.begin();
		std::multiset<int>::iterator sys_it_begin = sys_set.begin();
		ft::multiset<int>::iterator our_it_end = our_set.end();
		std::multiset<int>::iterator sys_it_end = sys_set.end();

		while (sys_it_begin != sys_it_end)
		{
			if (*sys_it_begin != *our_it_begin)
			{
				print_our(our_set);
				print_sys(sys_set);
				return false;
			}
			++sys_it_begin;
			++our_it_begin;
		}

		our_it_begin = our_set.begin();
		sys_it_begin = sys_set.begin();

		while (our_it_begin != our_it_end)
		{
			if (*sys_it_begin != *our_it_begin)
			{
				print_our(our_set);
				print_sys(sys_set);
				return false;
			}
			++sys_it_begin;
			++our_it_begin;
		}
	}

	if (sys_set.size() != our_set.size())
	{
		std::cout << "SIZE " << sys_set.size() << " != " << our_set.size() << " ";
		return false;
	}
	if (sys_set.empty() != our_set.empty())
	{
		std::cout << "EMPTY " << sys_set.empty() << " != " << our_set.empty() << " ";
		return false;
	}
	if (our_set._tree.isValid() != 1)
	{
		our_set._tree.printTree();
		return false;
	}
	return true;
}

static void testLIST(void)
{
	std::cout << BLUE << "**** TEST LIST ****" << OFF << std::endl;
	// ------------------ITERATOR METHODS----------------------
	std::cout << YELLOW << "LIST ITERATOR OPERATOR [SYS vs OUR]" << OFF << std::endl;
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
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (*++sys_it == *++our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++BEGIN test 1" << OFF << std::endl;
		if (*++sys_it == *++our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++BEGIN test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (*sys_it++ == *our_it++)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN++ test 1" << OFF << std::endl;
		if (*sys_it++ == *our_it++)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN++ test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (*--sys_it == *--our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--BEGIN test 1" << OFF << std::endl;
		if (*--sys_it == *--our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--BEGIN test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (*sys_it-- == *our_it--)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN-- test 1" << OFF << std::endl;
		if (*sys_it-- == *our_it--)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN-- test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN-- test 3" << OFF << std::endl;
	}
	{
		// RBEGIN
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
		std::list<int>::reverse_iterator sys_it = sys_list.rbegin();
		ft::list<int>::reverse_iterator our_it = our_list.rbegin();
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN" << OFF << std::endl;
	}
	{
		// ++RBEGIN
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
		std::list<int>::reverse_iterator sys_it = sys_list.rbegin();
		ft::list<int>::reverse_iterator our_it = our_list.rbegin();
		if (*++sys_it == *++our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++RBEGIN test 1" << OFF << std::endl;
		if (*++sys_it == *++our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++RBEGIN test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++RBEGIN test 3" << OFF << std::endl;
	}
	{
		// RBEGIN++
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
		std::list<int>::reverse_iterator sys_it = sys_list.rbegin();
		ft::list<int>::reverse_iterator our_it = our_list.rbegin();
		if (*sys_it++ == *our_it++)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN++ test 1" << OFF << std::endl;
		if (*sys_it++ == *our_it++)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN++ test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN++ test 3" << OFF << std::endl;
	}
	{
		// --RBEGIN
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
		std::list<int>::reverse_iterator sys_it = sys_list.rbegin();
		ft::list<int>::reverse_iterator our_it = our_list.rbegin();
		--sys_it;
		--our_it;
		if (*--sys_it == *--our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--RBEGIN test 1" << OFF << std::endl;
		if (*--sys_it == *--our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--RBEGIN test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--RBEGIN test 3" << OFF << std::endl;
	}
	{
		// RBEGIN--
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
		std::list<int>::reverse_iterator sys_it = sys_list.rbegin();
		ft::list<int>::reverse_iterator our_it = our_list.rbegin();
		sys_it--;
		our_it--;
		sys_it--;
		our_it--;
		if (*sys_it-- == *our_it--)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN-- test 1" << OFF << std::endl;
		if (*sys_it-- == *our_it--)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN-- test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN-- test 3" << OFF << std::endl;
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
		if (*++sys_it == *++our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++END test 1" << OFF << std::endl;
		if (*++sys_it == *++our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++END test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (*sys_it++ == *our_it++)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END++ test 1" << OFF << std::endl;
		if (*--sys_it == *--our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END++ test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (*--sys_it == *--our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--END test 1" << OFF << std::endl;
		if (*--sys_it == *--our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--END test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (*sys_it-- == *our_it--)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END-- test 1" << OFF << std::endl;
		if (*sys_it-- == *our_it--)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END-- test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END-- test 3" << OFF << std::endl;
	}
	{
		// ++REND
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
		std::list<int>::reverse_iterator sys_it = sys_list.rend();
		ft::list<int>::reverse_iterator our_it = our_list.rend();
		if (*++sys_it == *++our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++REND test 1" << OFF << std::endl;
		if (*++sys_it == *++our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++REND test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++REND test 3" << OFF << std::endl;
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
		std::list<int>::reverse_iterator sys_it = sys_list.rend();
		ft::list<int>::reverse_iterator our_it = our_list.rend();
		sys_it++;
		our_it++;
		if (*sys_it++ == *our_it++)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND++ test 1" << OFF << std::endl;
		if (*--sys_it == *--our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND++ test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND++ test 3" << OFF << std::endl;
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
		if (*--sys_it == *--our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--REND test 1" << OFF << std::endl;
		if (*--sys_it == *--our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--REND test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--REND test 3" << OFF << std::endl;
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
		if (*sys_it-- == *our_it--)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND-- test 1" << OFF << std::endl;
		if (*sys_it-- == *our_it--)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND-- test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND-- test 3" << OFF << std::endl;
	}
	// ------------------OPERATORI----------------------
	std::cout << YELLOW << "LIST OPERATORE == [SYS vs OUR]" << OFF << std::endl;
	{
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

		if ((sys_list == sys_list2) == (our_list == our_list2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "LIST OPERATORE != [SYS vs OUR]" << OFF << std::endl;
	{
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

		if ((sys_list != sys_list2) == (our_list != our_list2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "LIST OPERATORE < [SYS vs OUR] test 1" << OFF << std::endl;
	{
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
		sys_list.push_back(50000);
		our_list.push_back(50000);

		if ((sys_list < sys_list2) == (our_list < our_list2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "LIST OPERATORE < [SYS vs OUR] test 2" << OFF << std::endl;
	{
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
		sys_list.push_back(-50);
		our_list.push_back(-50);

		if ((sys_list < sys_list2) == (our_list < our_list2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "LIST OPERATORE < [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::list<int> sys_list;
		ft::list<int> our_list;
		std::list<int> sys_list2;
		ft::list<int> our_list2;
		sys_list2.push_back(100);
		our_list2.push_back(100);
		sys_list2.push_back(85);
		our_list2.push_back(85);
		sys_list.push_back(100);
		our_list.push_back(100);
		sys_list.push_back(85);
		our_list.push_back(85);

		if ((sys_list < sys_list2) == (our_list < our_list2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "LIST OPERATORE > [SYS vs OUR] test 1" << OFF << std::endl;
	{
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
		sys_list.push_back(50000);
		our_list.push_back(50000);

		if ((sys_list > sys_list2) == (our_list > our_list2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "LIST OPERATORE > [SYS vs OUR] test 2" << OFF << std::endl;
	{
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
		sys_list.push_back(-50);
		our_list.push_back(-50);

		if ((sys_list > sys_list2) == (our_list > our_list2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "LIST OPERATORE > [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::list<int> sys_list;
		ft::list<int> our_list;
		std::list<int> sys_list2;
		ft::list<int> our_list2;
		sys_list2.push_back(100);
		our_list2.push_back(100);
		sys_list2.push_back(85);
		our_list2.push_back(85);
		sys_list.push_back(100);
		our_list.push_back(100);
		sys_list.push_back(85);
		our_list.push_back(85);

		if ((sys_list > sys_list2) == (our_list > our_list2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "LIST OPERATORE <= [SYS vs OUR] test 1" << OFF << std::endl;
	{
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
		sys_list.push_back(50000);
		our_list.push_back(50000);

		if ((sys_list <= sys_list2) == (our_list <= our_list2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "LIST OPERATORE <= [SYS vs OUR] test 2" << OFF << std::endl;
	{
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
		sys_list.push_back(-50);
		our_list.push_back(-50);

		if ((sys_list <= sys_list2) == (our_list <= our_list2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "LIST OPERATORE <= [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::list<int> sys_list;
		ft::list<int> our_list;
		std::list<int> sys_list2;
		ft::list<int> our_list2;
		sys_list2.push_back(100);
		our_list2.push_back(100);
		sys_list2.push_back(85);
		our_list2.push_back(85);
		sys_list.push_back(100);
		our_list.push_back(100);
		sys_list.push_back(85);
		our_list.push_back(85);

		if ((sys_list <= sys_list2) == (our_list <= our_list2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "LIST OPERATORE >= [SYS vs OUR] test 1" << OFF << std::endl;
	{
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
		sys_list.push_back(50000);
		our_list.push_back(50000);

		if ((sys_list >= sys_list2) == (our_list >= our_list2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "LIST OPERATORE >= [SYS vs OUR] test 2" << OFF << std::endl;
	{
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
		sys_list.push_back(-50);
		our_list.push_back(-50);

		if ((sys_list >= sys_list2) == (our_list >= our_list2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "LIST OPERATORE >= [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::list<int> sys_list;
		ft::list<int> our_list;
		std::list<int> sys_list2;
		ft::list<int> our_list2;
		sys_list2.push_back(100);
		our_list2.push_back(100);
		sys_list2.push_back(85);
		our_list2.push_back(85);
		sys_list.push_back(100);
		our_list.push_back(100);
		sys_list.push_back(85);
		our_list.push_back(85);

		if ((sys_list >= sys_list2) == (our_list >= our_list2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// -------------------INIT EMPTY---------------------
	std::cout << YELLOW << "INIT LISTA VUOTA [SYS vs OUR]" << OFF << std::endl;
	{
		std::list<int> sys_list;
		ft::list<int> our_list;

		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	// --------------------INT 1 PARAMETRO--------------------
	std::cout << YELLOW << "INIT LISTA 1 PARAMETRO (20) [SYS vs OUR]" << OFF << std::endl;
	{
		std::list<int> sys_list(20);
		ft::list<int> our_list(20);

		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	// ----------------------INIT 2 PARAMETRI------------------
	std::cout << YELLOW << "INIT LISTA 2 PARAMETRI (20,100) [SYS vs OUR]" << OFF << std::endl;
	{
		std::list<int> sys_list(20, 100);
		ft::list<int> our_list(20, 100);

		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	// ----------------------INIT 2 ITERATORI------------------
	std::cout << YELLOW << "INIT LISTA 2 ITERATORI (begin, end) [SYS vs OUR]" << OFF << std::endl;
	{
		std::list<int> sys_list2(5, 10);
		std::list<int> sys_list(sys_list2.begin(), sys_list2.end());
		ft::list<int> our_list2(5, 10);
		ft::list<int> our_list(our_list2.begin(), our_list2.end());

		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// ----------------------INIT COPY CONSTRUCOT------------------
	std::cout << YELLOW << "INIT LISTA COPY CONSTRUCTOR (LIST) [SYS vs OUR]" << OFF << std::endl;
	{
		std::list<int> copy_sys_list(5, 10);
		std::list<int> sys_list(copy_sys_list);
		ft::list<int> copy_our_list(5, 10);
		ft::list<int> our_list(copy_our_list);

		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// ----------------------INIT COPY CONSTRUCOT------------------
	std::cout << YELLOW << "INIT LIST OPERATORE = [SYS vs OUR]" << OFF << std::endl;
	{
		std::list<int> sys_list;
		ft::list<int> our_list;
		std::list<int> copy_sys_list(5, 10);
		ft::list<int> copy_our_list(5, 10);
		sys_list = copy_sys_list;
		our_list = copy_our_list;

		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	// --------------------LIST METHODS--------------------
	std::cout << YELLOW << "LIST METHODS [SYS vs OUR]" << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (ITERATOR, NUMBER) test 2 " << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (ITERATOR, NUMBER, NUMBER)" << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (ITERATOR, ITERATOR, ITERATOR)" << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REVERSE" << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "UNIQUE" << OFF << std::endl;
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
		our_list.unique(binaryINT); //CRASH ON LINUX
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "UNIQUE PREDICATE" << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "SORT" << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "SORT COMPARE" << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REMOVE" << OFF << std::endl;
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
		our_list.remove_if(singleINT); //CRASH ON LINUX
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REMOVE_IF" << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RESIZE (NUMBER)" << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RESIZE (NUMBER, NUMBER)" << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (ITERATOR)" << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (ITERATOR, ITERATOR)" << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "MERGE (OTHER LIST) test 1" << OFF << std::endl;
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
		if (equalSysFt(sys_list2, our_list2))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "MERGE (OTHER LIST) test 2" << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "MERGE (OTHER LIST, COMPARE) test 1" << OFF << std::endl;
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
		if (equalSysFt(sys_list2, our_list2))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "MERGE (OTHER LIST, COMPARE) test 2" << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ASSIGN (ITERATOR, ITERATOR) test 1" << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ASSIGN (ITERATOR, ITERATOR) test 2" << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ASSIGN (NUMBER, NUMBER) test 1" << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ASSIGN (NUMBER, NUMBER) test 2" << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "SPLICE (ITERATOR, LIST) test 1" << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "SPLICE (ITERATOR, LIST) test 2" << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "SPLICE (ITERATOR, LIST, ITERATOR) test 1" << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "SPLICE (ITERATOR, LIST, ITERATOR) test 2" << OFF << std::endl;
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
		our_list.splice(our_list.begin(), our_list2, ++our_list2.begin(), our_list2.end());
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "SPLICE (ITERATOR, LIST, ITERATOR, ITERATOR) test 1" << OFF << std::endl;
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
		sys_list.splice(sys_list.begin(), sys_list2, sys_list2.begin(), sys_list2.end());
		our_list.splice(our_list.begin(), our_list2, our_list2.begin(), our_list2.end());
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "SPLICE (ITERATOR, LIST, ITERATOR, ITERATOR) test 2" << OFF << std::endl;
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
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "SWAP" << OFF << std::endl;
	}
	{
		// CLEAR
		std::list<int> sys_list;
		ft::list<int> our_list;
		sys_list.push_back(0);
		our_list.push_back(0);
		sys_list.push_back(34);
		our_list.push_back(34);
		sys_list.push_back(56);
		our_list.push_back(56);
		sys_list.clear();
		our_list.clear();
		if (equalSysFt(sys_list, our_list))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "CLEAR" << OFF << std::endl;
	}
}

static void testVECTOR(void)
{

	std::cout << BLUE << "**** TEST VECTOR ****" << OFF << std::endl;
	// ------------------ITERATOR METHODS----------------------
	std::cout << YELLOW << "VECTOR ITERATOR OPERATOR [SYS vs OUR]" << OFF << std::endl;
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
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (*++sys_it == *++our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++BEGIN test 1" << OFF << std::endl;
		if (*++sys_it == *++our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++BEGIN test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (*sys_it++ == *our_it++)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN++ test 1" << OFF << std::endl;
		if (*sys_it++ == *our_it++)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN++ test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (*sys_it-- == *our_it--)
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (*sys_it++ == *our_it++)
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (*--sys_it == *--our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--END test 1" << OFF << std::endl;
		if (*--sys_it == *--our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--END test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (*sys_it-- == *our_it--)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END-- test 1" << OFF << std::endl;
		if (*sys_it-- == *our_it--)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END-- test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END-- test 3" << OFF << std::endl;
	}
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
		std::vector<int>::reverse_iterator sys_it = sys_vector.rbegin();
		ft::vector<int>::reverse_iterator our_it = our_vector.rbegin();
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN" << OFF << std::endl;
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
		std::vector<int>::reverse_iterator sys_it = sys_vector.rbegin();
		ft::vector<int>::reverse_iterator our_it = our_vector.rbegin();
		if (*++sys_it == *++our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++RBEGIN test 1" << OFF << std::endl;
		if (*++sys_it == *++our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++RBEGIN test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++RBEGIN test 3" << OFF << std::endl;
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
		std::vector<int>::reverse_iterator sys_it = sys_vector.rbegin();
		ft::vector<int>::reverse_iterator our_it = our_vector.rbegin();
		if (*sys_it++ == *our_it++)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN++ test 1" << OFF << std::endl;
		if (*sys_it++ == *our_it++)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN++ test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN++ test 3" << OFF << std::endl;
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
		std::vector<int>::reverse_iterator sys_it = sys_vector.rbegin();
		ft::vector<int>::reverse_iterator our_it = our_vector.rbegin();
		if (*sys_it-- == *our_it--)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN--" << OFF << std::endl;
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
		std::vector<int>::reverse_iterator sys_it = sys_vector.rbegin();
		ft::vector<int>::reverse_iterator our_it = our_vector.rbegin();
		sys_it++;
		our_it++;
		if (*sys_it++ == *our_it++)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND++" << OFF << std::endl;
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
		std::vector<int>::reverse_iterator sys_it = sys_vector.rend();
		ft::vector<int>::reverse_iterator our_it = our_vector.rend();

		if (*--sys_it == *--our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--REND test 1" << OFF << std::endl;
		if (*--sys_it == *--our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--REND test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--REND test 3" << OFF << std::endl;
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
		std::vector<int>::reverse_iterator sys_it = sys_vector.rend();
		ft::vector<int>::reverse_iterator our_it = our_vector.rend();
		sys_it--;
		our_it--;
		if (*sys_it-- == *our_it--)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND-- test 1" << OFF << std::endl;
		if (*sys_it-- == *our_it--)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND-- test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND-- test 3" << OFF << std::endl;
	}
	// ------------------OPERATORI----------------------
	std::cout << YELLOW << "OPERATORE == [SYS vs OUR]" << OFF << std::endl;
	{
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		std::vector<int> sys_vector2;
		ft::vector<int> our_vector2;
		sys_vector2.push_back(100);
		our_vector2.push_back(100);
		sys_vector2.push_back(85);
		our_vector2.push_back(85);
		sys_vector2.push_back(12);
		our_vector2.push_back(12);
		sys_vector2.push_back(200);
		our_vector2.push_back(200);
		sys_vector.push_back(0);
		our_vector.push_back(0);
		sys_vector.push_back(56);
		our_vector.push_back(56);

		if ((sys_vector == sys_vector2) == (our_vector == our_vector2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE != [SYS vs OUR]" << OFF << std::endl;
	{
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		std::vector<int> sys_vector2;
		ft::vector<int> our_vector2;
		sys_vector2.push_back(100);
		our_vector2.push_back(100);
		sys_vector2.push_back(85);
		our_vector2.push_back(85);
		sys_vector2.push_back(12);
		our_vector2.push_back(12);
		sys_vector2.push_back(200);
		our_vector2.push_back(200);
		sys_vector.push_back(0);
		our_vector.push_back(0);
		sys_vector.push_back(56);
		our_vector.push_back(56);

		if ((sys_vector != sys_vector2) == (our_vector != our_vector2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE < [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		std::vector<int> sys_vector2;
		ft::vector<int> our_vector2;
		sys_vector2.push_back(100);
		our_vector2.push_back(100);
		sys_vector2.push_back(85);
		our_vector2.push_back(85);
		sys_vector2.push_back(12);
		our_vector2.push_back(12);
		sys_vector2.push_back(200);
		our_vector2.push_back(200);
		sys_vector.push_back(0);
		our_vector.push_back(0);
		sys_vector.push_back(50000);
		our_vector.push_back(50000);

		if ((sys_vector < sys_vector2) == (our_vector < our_vector2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE < [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		std::vector<int> sys_vector2;
		ft::vector<int> our_vector2;
		sys_vector2.push_back(100);
		our_vector2.push_back(100);
		sys_vector2.push_back(85);
		our_vector2.push_back(85);
		sys_vector2.push_back(12);
		our_vector2.push_back(12);
		sys_vector2.push_back(200);
		our_vector2.push_back(200);
		sys_vector.push_back(0);
		our_vector.push_back(0);
		sys_vector.push_back(-50);
		our_vector.push_back(-50);

		if ((sys_vector < sys_vector2) == (our_vector < our_vector2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE < [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		std::vector<int> sys_vector2;
		ft::vector<int> our_vector2;
		sys_vector2.push_back(100);
		our_vector2.push_back(100);
		sys_vector2.push_back(85);
		our_vector2.push_back(85);
		sys_vector.push_back(100);
		our_vector.push_back(100);
		sys_vector.push_back(85);
		our_vector.push_back(85);

		if ((sys_vector < sys_vector2) == (our_vector < our_vector2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE > [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		std::vector<int> sys_vector2;
		ft::vector<int> our_vector2;
		sys_vector2.push_back(100);
		our_vector2.push_back(100);
		sys_vector2.push_back(85);
		our_vector2.push_back(85);
		sys_vector2.push_back(12);
		our_vector2.push_back(12);
		sys_vector2.push_back(200);
		our_vector2.push_back(200);
		sys_vector.push_back(0);
		our_vector.push_back(0);
		sys_vector.push_back(50000);
		our_vector.push_back(50000);

		if ((sys_vector > sys_vector2) == (our_vector > our_vector2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE > [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		std::vector<int> sys_vector2;
		ft::vector<int> our_vector2;
		sys_vector2.push_back(100);
		our_vector2.push_back(100);
		sys_vector2.push_back(85);
		our_vector2.push_back(85);
		sys_vector2.push_back(12);
		our_vector2.push_back(12);
		sys_vector2.push_back(200);
		our_vector2.push_back(200);
		sys_vector.push_back(0);
		our_vector.push_back(0);
		sys_vector.push_back(-50);
		our_vector.push_back(-50);

		if ((sys_vector > sys_vector2) == (our_vector > our_vector2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE > [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		std::vector<int> sys_vector2;
		ft::vector<int> our_vector2;
		sys_vector2.push_back(100);
		our_vector2.push_back(100);
		sys_vector2.push_back(85);
		our_vector2.push_back(85);
		sys_vector.push_back(100);
		our_vector.push_back(100);
		sys_vector.push_back(85);
		our_vector.push_back(85);

		if ((sys_vector > sys_vector2) == (our_vector > our_vector2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE <= [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		std::vector<int> sys_vector2;
		ft::vector<int> our_vector2;
		sys_vector2.push_back(100);
		our_vector2.push_back(100);
		sys_vector2.push_back(85);
		our_vector2.push_back(85);
		sys_vector2.push_back(12);
		our_vector2.push_back(12);
		sys_vector2.push_back(200);
		our_vector2.push_back(200);
		sys_vector.push_back(0);
		our_vector.push_back(0);
		sys_vector.push_back(50000);
		our_vector.push_back(50000);

		if ((sys_vector <= sys_vector2) == (our_vector <= our_vector2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE <= [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		std::vector<int> sys_vector2;
		ft::vector<int> our_vector2;
		sys_vector2.push_back(100);
		our_vector2.push_back(100);
		sys_vector2.push_back(85);
		our_vector2.push_back(85);
		sys_vector2.push_back(12);
		our_vector2.push_back(12);
		sys_vector2.push_back(200);
		our_vector2.push_back(200);
		sys_vector.push_back(0);
		our_vector.push_back(0);
		sys_vector.push_back(-50);
		our_vector.push_back(-50);

		if ((sys_vector <= sys_vector2) == (our_vector <= our_vector2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE <= [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		std::vector<int> sys_vector2;
		ft::vector<int> our_vector2;
		sys_vector2.push_back(100);
		our_vector2.push_back(100);
		sys_vector2.push_back(85);
		our_vector2.push_back(85);
		sys_vector.push_back(100);
		our_vector.push_back(100);
		sys_vector.push_back(85);
		our_vector.push_back(85);

		if ((sys_vector <= sys_vector2) == (our_vector <= our_vector2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE >= [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		std::vector<int> sys_vector2;
		ft::vector<int> our_vector2;
		sys_vector2.push_back(100);
		our_vector2.push_back(100);
		sys_vector2.push_back(85);
		our_vector2.push_back(85);
		sys_vector2.push_back(12);
		our_vector2.push_back(12);
		sys_vector2.push_back(200);
		our_vector2.push_back(200);
		sys_vector.push_back(0);
		our_vector.push_back(0);
		sys_vector.push_back(50000);
		our_vector.push_back(50000);

		if ((sys_vector >= sys_vector2) == (our_vector >= our_vector2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE >= [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		std::vector<int> sys_vector2;
		ft::vector<int> our_vector2;
		sys_vector2.push_back(100);
		our_vector2.push_back(100);
		sys_vector2.push_back(85);
		our_vector2.push_back(85);
		sys_vector2.push_back(12);
		our_vector2.push_back(12);
		sys_vector2.push_back(200);
		our_vector2.push_back(200);
		sys_vector.push_back(0);
		our_vector.push_back(0);
		sys_vector.push_back(-50);
		our_vector.push_back(-50);

		if ((sys_vector >= sys_vector2) == (our_vector >= our_vector2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE >= [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		std::vector<int> sys_vector2;
		ft::vector<int> our_vector2;
		sys_vector2.push_back(100);
		our_vector2.push_back(100);
		sys_vector2.push_back(85);
		our_vector2.push_back(85);
		sys_vector.push_back(100);
		our_vector.push_back(100);
		sys_vector.push_back(85);
		our_vector.push_back(85);

		if ((sys_vector >= sys_vector2) == (our_vector >= our_vector2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// -------------------INIT EMPTY---------------------
	std::cout << YELLOW << "INIT VECTOR VUOTO [SYS vs OUR]" << OFF << std::endl;
	{
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;

		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	// --------------------INT 1 PARAMETRO--------------------
	std::cout << YELLOW << "INIT VECTOR 1 PARAMETRO (20) [SYS vs OUR]" << OFF << std::endl;
	{
		std::vector<int> sys_vector(20);
		ft::vector<int> our_vector(20);

		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// --------------------INT 1 PARAMETRO--------------------
	std::cout << YELLOW << "INIT VECTOR 2 PARAMETRI (20, 5) [SYS vs OUR]" << OFF << std::endl;
	{
		std::vector<int> sys_vector(20, 5);
		ft::vector<int> our_vector(20, 5);

		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// ----------------------INIT 2 PARAMETRI------------------
	std::cout << YELLOW << "INIT VECTOR 2 PARAMETRI (iteratore, iteratore) [SYS vs OUR]" << OFF << std::endl;
	{
		std::vector<int> sys_vector(5, 100);
		ft::vector<int> our_vector(5, 100);
		std::vector<int> sys_vector2(++sys_vector.begin(), --sys_vector.end());
		ft::vector<int> our_vector2(++our_vector.begin(), --our_vector.end());

		if (equalSysFt(sys_vector2, our_vector2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	//----------------------INIT COPY CONSTRUCTOR------------------
	std::cout << YELLOW << "INIT VECTOR COPY CONSTRUCTOR [SYS vs OUR]" << OFF << std::endl;
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
	std::cout << YELLOW << "INIT VECTOR OPERATORE = [SYS vs OUR]" << OFF << std::endl;
	{
		std::vector<int> sys_vector2;
		ft::vector<int> our_vector2;
		std::vector<int> sys_vector(100, 8);
		ft::vector<int> our_vector(100, 8);
		sys_vector2 = sys_vector;
		our_vector2 = our_vector;

		if (equalSysFt(sys_vector2, our_vector2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	
	//--------------------LIST METHODS--------------------
	std::cout << YELLOW << "VECTOR METHODS [SYS vs OUR]" << OFF << std::endl;
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
		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ASSIGN (INT, INT)" << OFF << std::endl;
	}

	{
		// INSERT
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.insert(sys_vector.begin(), 99);
		our_vector.insert(our_vector.begin(), 99);
		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (ITERATOR, INT) test 2" << OFF << std::endl;
	}
	{
		// INSERT
		std::vector<int> sys_vector;
		ft::vector<int> our_vector;
		sys_vector.insert(sys_vector.begin(), 6, 85);
		our_vector.insert(our_vector.begin(), 6, 85);
		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN;
		else
			std::cout << RED;
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
		if (equalSysFt(sys_vector, our_vector))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "CLEAR" << OFF << std::endl;
	}
	
}

static void testSTACK(void)
{

	std::cout << BLUE << "**** TEST STACK ****" << OFF << std::endl;
	// ------------------OPERATORI----------------------
	std::cout << YELLOW << "STACK OPERATORE == [SYS vs OUR]" << OFF << std::endl;
	{
		std::stack<int> sys_stack;
		ft::stack<int> our_stack;
		std::stack<int> sys_stack2;
		ft::stack<int> our_stack2;
		sys_stack2.push(100);
		our_stack2.push(100);
		sys_stack2.push(85);
		our_stack2.push(85);
		sys_stack2.push(12);
		our_stack2.push(12);
		sys_stack2.push(200);
		our_stack2.push(200);
		sys_stack.push(0);
		our_stack.push(0);
		sys_stack.push(56);
		our_stack.push(56);

		if ((sys_stack == sys_stack2) == (our_stack == our_stack2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "STACK OPERATORE != [SYS vs OUR]" << OFF << std::endl;
	{
		std::stack<int> sys_stack;
		ft::stack<int> our_stack;
		std::stack<int> sys_stack2;
		ft::stack<int> our_stack2;
		sys_stack2.push(100);
		our_stack2.push(100);
		sys_stack2.push(85);
		our_stack2.push(85);
		sys_stack2.push(12);
		our_stack2.push(12);
		sys_stack2.push(200);
		our_stack2.push(200);
		sys_stack.push(0);
		our_stack.push(0);
		sys_stack.push(56);
		our_stack.push(56);

		if ((sys_stack != sys_stack2) == (our_stack != our_stack2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "STACK OPERATORE < [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::stack<int> sys_stack;
		ft::stack<int> our_stack;
		std::stack<int> sys_stack2;
		ft::stack<int> our_stack2;
		sys_stack2.push(100);
		our_stack2.push(100);
		sys_stack2.push(85);
		our_stack2.push(85);
		sys_stack2.push(12);
		our_stack2.push(12);
		sys_stack2.push(200);
		our_stack2.push(200);
		sys_stack.push(0);
		our_stack.push(0);
		sys_stack.push(50000);
		our_stack.push(50000);

		if ((sys_stack < sys_stack2) == (our_stack < our_stack2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "STACK OPERATORE < [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::stack<int> sys_stack;
		ft::stack<int> our_stack;
		std::stack<int> sys_stack2;
		ft::stack<int> our_stack2;
		sys_stack2.push(100);
		our_stack2.push(100);
		sys_stack2.push(85);
		our_stack2.push(85);
		sys_stack2.push(12);
		our_stack2.push(12);
		sys_stack2.push(200);
		our_stack2.push(200);
		sys_stack.push(0);
		our_stack.push(0);
		sys_stack.push(-50);
		our_stack.push(-50);

		if ((sys_stack < sys_stack2) == (our_stack < our_stack2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "STACK OPERATORE < [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::stack<int> sys_stack;
		ft::stack<int> our_stack;
		std::stack<int> sys_stack2;
		ft::stack<int> our_stack2;
		sys_stack2.push(100);
		our_stack2.push(100);
		sys_stack2.push(85);
		our_stack2.push(85);
		sys_stack.push(100);
		our_stack.push(100);
		sys_stack.push(85);
		our_stack.push(85);

		if ((sys_stack < sys_stack2) == (our_stack < our_stack2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "STACK OPERATORE > [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::stack<int> sys_stack;
		ft::stack<int> our_stack;
		std::stack<int> sys_stack2;
		ft::stack<int> our_stack2;
		sys_stack2.push(100);
		our_stack2.push(100);
		sys_stack2.push(85);
		our_stack2.push(85);
		sys_stack2.push(12);
		our_stack2.push(12);
		sys_stack2.push(200);
		our_stack2.push(200);
		sys_stack.push(0);
		our_stack.push(0);
		sys_stack.push(50000);
		our_stack.push(50000);

		if ((sys_stack > sys_stack2) == (our_stack > our_stack2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "STACK OPERATORE > [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::stack<int> sys_stack;
		ft::stack<int> our_stack;
		std::stack<int> sys_stack2;
		ft::stack<int> our_stack2;
		sys_stack2.push(100);
		our_stack2.push(100);
		sys_stack2.push(85);
		our_stack2.push(85);
		sys_stack2.push(12);
		our_stack2.push(12);
		sys_stack2.push(200);
		our_stack2.push(200);
		sys_stack.push(0);
		our_stack.push(0);
		sys_stack.push(-50);
		our_stack.push(-50);

		if ((sys_stack > sys_stack2) == (our_stack > our_stack2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "STACK OPERATORE > [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::stack<int> sys_stack;
		ft::stack<int> our_stack;
		std::stack<int> sys_stack2;
		ft::stack<int> our_stack2;
		sys_stack2.push(100);
		our_stack2.push(100);
		sys_stack2.push(85);
		our_stack2.push(85);
		sys_stack.push(100);
		our_stack.push(100);
		sys_stack.push(85);
		our_stack.push(85);

		if ((sys_stack > sys_stack2) == (our_stack > our_stack2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "STACK OPERATORE <= [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::stack<int> sys_stack;
		ft::stack<int> our_stack;
		std::stack<int> sys_stack2;
		ft::stack<int> our_stack2;
		sys_stack2.push(100);
		our_stack2.push(100);
		sys_stack2.push(85);
		our_stack2.push(85);
		sys_stack2.push(12);
		our_stack2.push(12);
		sys_stack2.push(200);
		our_stack2.push(200);
		sys_stack.push(0);
		our_stack.push(0);
		sys_stack.push(50000);
		our_stack.push(50000);

		if ((sys_stack <= sys_stack2) == (our_stack <= our_stack2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "STACK OPERATORE <= [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::stack<int> sys_stack;
		ft::stack<int> our_stack;
		std::stack<int> sys_stack2;
		ft::stack<int> our_stack2;
		sys_stack2.push(100);
		our_stack2.push(100);
		sys_stack2.push(85);
		our_stack2.push(85);
		sys_stack2.push(12);
		our_stack2.push(12);
		sys_stack2.push(200);
		our_stack2.push(200);
		sys_stack.push(0);
		our_stack.push(0);
		sys_stack.push(-50);
		our_stack.push(-50);

		if ((sys_stack <= sys_stack2) == (our_stack <= our_stack2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "STACK OPERATORE <= [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::stack<int> sys_stack;
		ft::stack<int> our_stack;
		std::stack<int> sys_stack2;
		ft::stack<int> our_stack2;
		sys_stack2.push(100);
		our_stack2.push(100);
		sys_stack2.push(85);
		our_stack2.push(85);
		sys_stack.push(100);
		our_stack.push(100);
		sys_stack.push(85);
		our_stack.push(85);

		if ((sys_stack <= sys_stack2) == (our_stack <= our_stack2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "STACK OPERATORE >= [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::stack<int> sys_stack;
		ft::stack<int> our_stack;
		std::stack<int> sys_stack2;
		ft::stack<int> our_stack2;
		sys_stack2.push(100);
		our_stack2.push(100);
		sys_stack2.push(85);
		our_stack2.push(85);
		sys_stack2.push(12);
		our_stack2.push(12);
		sys_stack2.push(200);
		our_stack2.push(200);
		sys_stack.push(0);
		our_stack.push(0);
		sys_stack.push(50000);
		our_stack.push(50000);

		if ((sys_stack >= sys_stack2) == (our_stack >= our_stack2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "STACK OPERATORE >= [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::stack<int> sys_stack;
		ft::stack<int> our_stack;
		std::stack<int> sys_stack2;
		ft::stack<int> our_stack2;
		sys_stack2.push(100);
		our_stack2.push(100);
		sys_stack2.push(85);
		our_stack2.push(85);
		sys_stack2.push(12);
		our_stack2.push(12);
		sys_stack2.push(200);
		our_stack2.push(200);
		sys_stack.push(0);
		our_stack.push(0);
		sys_stack.push(-50);
		our_stack.push(-50);

		if ((sys_stack >= sys_stack2) == (our_stack >= our_stack2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "STACK OPERATORE >= [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::stack<int> sys_stack;
		ft::stack<int> our_stack;
		std::stack<int> sys_stack2;
		ft::stack<int> our_stack2;
		sys_stack2.push(100);
		our_stack2.push(100);
		sys_stack2.push(85);
		our_stack2.push(85);
		sys_stack.push(100);
		our_stack.push(100);
		sys_stack.push(85);
		our_stack.push(85);

		if ((sys_stack >= sys_stack2) == (our_stack >= our_stack2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// -------------------INIT EMPTY---------------------
	std::cout << YELLOW << "INIT STACK VUOTO [SYS vs OUR]" << OFF << std::endl;
	{
		std::stack<int> sys_stack;
		ft::stack<int> our_stack;

		if (equalSysFt(sys_stack, our_stack))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	// --------------------INT 1 PARAMETRO--------------------
	std::cout << YELLOW << "INIT STACK COPY CONSTRUCTOR [SYS vs OUR]" << OFF << std::endl;
	{
		std::stack<int> sys_stack2;
		ft::stack<int> our_stack2;
		sys_stack2.push(99);
		sys_stack2.push(50);
		our_stack2.push(99);
		our_stack2.push(50);
		std::stack<int> sys_stack(sys_stack2);
		ft::stack<int> our_stack(our_stack2);

		if (equalSysFt(sys_stack, our_stack))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	// ----------------------INIT 2 PARAMETRI------------------
	std::cout << YELLOW << "INIT STACK OPERATORE = [SYS vs OUR]" << OFF << std::endl;
	{
		std::stack<int> sys_stack;
		ft::stack<int> our_stack;
		std::stack<int> sys_stack2;
		ft::stack<int> our_stack2;
		sys_stack2.push(99);
		sys_stack2.push(50);
		our_stack2.push(99);
		our_stack2.push(50);
		sys_stack = sys_stack2;
		our_stack = our_stack2;

		if (equalSysFt(sys_stack, our_stack))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// ----------------------STACK METHODS------------------
	std::cout << YELLOW << "STACK METHODS [SYS vs OUR]" << OFF << std::endl;
	{
		std::stack<int> sys_stack;
		ft::stack<int> our_stack;
		sys_stack.push(99);
		sys_stack.push(50);
		our_stack.push(99);
		our_stack.push(50);

		if (equalSysFt(sys_stack, our_stack))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "PUSH" << OFF << std::endl;
	}
	{
		std::stack<int> sys_stack;
		ft::stack<int> our_stack;
		sys_stack.push(99);
		sys_stack.push(50);
		our_stack.push(99);
		our_stack.push(50);
		sys_stack.pop();
		our_stack.pop();

		if (equalSysFt(sys_stack, our_stack))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "POP" << OFF << std::endl;
	}
}

static void testQUEUE(void)
{

	std::cout << BLUE << "**** TEST QUEUE ****" << OFF << std::endl;
	// ------------------OPERATORI----------------------
	std::cout << YELLOW << "QUEUE OPERATORE == [SYS vs OUR]" << OFF << std::endl;
	{
		std::queue<int> sys_queue;
		ft::queue<int> our_queue;
		std::queue<int> sys_queue2;
		ft::queue<int> our_queue2;
		sys_queue2.push(100);
		our_queue2.push(100);
		sys_queue2.push(85);
		our_queue2.push(85);
		sys_queue2.push(12);
		our_queue2.push(12);
		sys_queue2.push(200);
		our_queue2.push(200);
		sys_queue.push(0);
		our_queue.push(0);
		sys_queue.push(56);
		our_queue.push(56);

		if ((sys_queue == sys_queue2) == (our_queue == our_queue2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "QUEUE OPERATORE != [SYS vs OUR]" << OFF << std::endl;
	{
		std::queue<int> sys_queue;
		ft::queue<int> our_queue;
		std::queue<int> sys_queue2;
		ft::queue<int> our_queue2;
		sys_queue2.push(100);
		our_queue2.push(100);
		sys_queue2.push(85);
		our_queue2.push(85);
		sys_queue2.push(12);
		our_queue2.push(12);
		sys_queue2.push(200);
		our_queue2.push(200);
		sys_queue.push(0);
		our_queue.push(0);
		sys_queue.push(56);
		our_queue.push(56);

		if ((sys_queue != sys_queue2) == (our_queue != our_queue2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "QUEUE OPERATORE < [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::queue<int> sys_queue;
		ft::queue<int> our_queue;
		std::queue<int> sys_queue2;
		ft::queue<int> our_queue2;
		sys_queue2.push(100);
		our_queue2.push(100);
		sys_queue2.push(85);
		our_queue2.push(85);
		sys_queue2.push(12);
		our_queue2.push(12);
		sys_queue2.push(200);
		our_queue2.push(200);
		sys_queue.push(0);
		our_queue.push(0);
		sys_queue.push(50000);
		our_queue.push(50000);

		if ((sys_queue < sys_queue2) == (our_queue < our_queue2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "QUEUE OPERATORE < [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::queue<int> sys_queue;
		ft::queue<int> our_queue;
		std::queue<int> sys_queue2;
		ft::queue<int> our_queue2;
		sys_queue2.push(100);
		our_queue2.push(100);
		sys_queue2.push(85);
		our_queue2.push(85);
		sys_queue2.push(12);
		our_queue2.push(12);
		sys_queue2.push(200);
		our_queue2.push(200);
		sys_queue.push(0);
		our_queue.push(0);
		sys_queue.push(-50);
		our_queue.push(-50);

		if ((sys_queue < sys_queue2) == (our_queue < our_queue2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "QUEUE OPERATORE < [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::queue<int> sys_queue;
		ft::queue<int> our_queue;
		std::queue<int> sys_queue2;
		ft::queue<int> our_queue2;
		sys_queue2.push(100);
		our_queue2.push(100);
		sys_queue2.push(85);
		our_queue2.push(85);
		sys_queue.push(100);
		our_queue.push(100);
		sys_queue.push(85);
		our_queue.push(85);

		if ((sys_queue < sys_queue2) == (our_queue < our_queue2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "QUEUE OPERATORE > [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::queue<int> sys_queue;
		ft::queue<int> our_queue;
		std::queue<int> sys_queue2;
		ft::queue<int> our_queue2;
		sys_queue2.push(100);
		our_queue2.push(100);
		sys_queue2.push(85);
		our_queue2.push(85);
		sys_queue2.push(12);
		our_queue2.push(12);
		sys_queue2.push(200);
		our_queue2.push(200);
		sys_queue.push(0);
		our_queue.push(0);
		sys_queue.push(50000);
		our_queue.push(50000);

		if ((sys_queue > sys_queue2) == (our_queue > our_queue2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "QUEUE OPERATORE > [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::queue<int> sys_queue;
		ft::queue<int> our_queue;
		std::queue<int> sys_queue2;
		ft::queue<int> our_queue2;
		sys_queue2.push(100);
		our_queue2.push(100);
		sys_queue2.push(85);
		our_queue2.push(85);
		sys_queue2.push(12);
		our_queue2.push(12);
		sys_queue2.push(200);
		our_queue2.push(200);
		sys_queue.push(0);
		our_queue.push(0);
		sys_queue.push(-50);
		our_queue.push(-50);

		if ((sys_queue > sys_queue2) == (our_queue > our_queue2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "QUEUE OPERATORE > [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::queue<int> sys_queue;
		ft::queue<int> our_queue;
		std::queue<int> sys_queue2;
		ft::queue<int> our_queue2;
		sys_queue2.push(100);
		our_queue2.push(100);
		sys_queue2.push(85);
		our_queue2.push(85);
		sys_queue.push(100);
		our_queue.push(100);
		sys_queue.push(85);
		our_queue.push(85);

		if ((sys_queue > sys_queue2) == (our_queue > our_queue2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "QUEUE OPERATORE <= [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::queue<int> sys_queue;
		ft::queue<int> our_queue;
		std::queue<int> sys_queue2;
		ft::queue<int> our_queue2;
		sys_queue2.push(100);
		our_queue2.push(100);
		sys_queue2.push(85);
		our_queue2.push(85);
		sys_queue2.push(12);
		our_queue2.push(12);
		sys_queue2.push(200);
		our_queue2.push(200);
		sys_queue.push(0);
		our_queue.push(0);
		sys_queue.push(50000);
		our_queue.push(50000);

		if ((sys_queue <= sys_queue2) == (our_queue <= our_queue2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "QUEUE OPERATORE <= [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::queue<int> sys_queue;
		ft::queue<int> our_queue;
		std::queue<int> sys_queue2;
		ft::queue<int> our_queue2;
		sys_queue2.push(100);
		our_queue2.push(100);
		sys_queue2.push(85);
		our_queue2.push(85);
		sys_queue2.push(12);
		our_queue2.push(12);
		sys_queue2.push(200);
		our_queue2.push(200);
		sys_queue.push(0);
		our_queue.push(0);
		sys_queue.push(-50);
		our_queue.push(-50);

		if ((sys_queue <= sys_queue2) == (our_queue <= our_queue2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "QUEUE OPERATORE <= [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::queue<int> sys_queue;
		ft::queue<int> our_queue;
		std::queue<int> sys_queue2;
		ft::queue<int> our_queue2;
		sys_queue2.push(100);
		our_queue2.push(100);
		sys_queue2.push(85);
		our_queue2.push(85);
		sys_queue.push(100);
		our_queue.push(100);
		sys_queue.push(85);
		our_queue.push(85);

		if ((sys_queue <= sys_queue2) == (our_queue <= our_queue2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "QUEUE OPERATORE >= [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::queue<int> sys_queue;
		ft::queue<int> our_queue;
		std::queue<int> sys_queue2;
		ft::queue<int> our_queue2;
		sys_queue2.push(100);
		our_queue2.push(100);
		sys_queue2.push(85);
		our_queue2.push(85);
		sys_queue2.push(12);
		our_queue2.push(12);
		sys_queue2.push(200);
		our_queue2.push(200);
		sys_queue.push(0);
		our_queue.push(0);
		sys_queue.push(50000);
		our_queue.push(50000);

		if ((sys_queue >= sys_queue2) == (our_queue >= our_queue2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "QUEUE OPERATORE >= [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::queue<int> sys_queue;
		ft::queue<int> our_queue;
		std::queue<int> sys_queue2;
		ft::queue<int> our_queue2;
		sys_queue2.push(100);
		our_queue2.push(100);
		sys_queue2.push(85);
		our_queue2.push(85);
		sys_queue2.push(12);
		our_queue2.push(12);
		sys_queue2.push(200);
		our_queue2.push(200);
		sys_queue.push(0);
		our_queue.push(0);
		sys_queue.push(-50);
		our_queue.push(-50);

		if ((sys_queue >= sys_queue2) == (our_queue >= our_queue2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "QUEUE OPERATORE >= [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::queue<int> sys_queue;
		ft::queue<int> our_queue;
		std::queue<int> sys_queue2;
		ft::queue<int> our_queue2;
		sys_queue2.push(100);
		our_queue2.push(100);
		sys_queue2.push(85);
		our_queue2.push(85);
		sys_queue.push(100);
		our_queue.push(100);
		sys_queue.push(85);
		our_queue.push(85);

		if ((sys_queue >= sys_queue2) == (our_queue >= our_queue2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// -------------------INIT EMPTY---------------------
	std::cout << YELLOW << "INIT QUEUE VUOTO [SYS vs OUR]" << OFF << std::endl;
	{
		std::queue<int> sys_queue;
		ft::queue<int> our_queue;

		if (equalSysFt(sys_queue, our_queue))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	// --------------------INT 1 PARAMETRO--------------------
	std::cout << YELLOW << "INIT QUEUE COPY CONSTRUCTOR [SYS vs OUR]" << OFF << std::endl;
	{
		std::queue<int> sys_queue2;
		ft::queue<int> our_queue2;
		sys_queue2.push(99);
		sys_queue2.push(50);
		our_queue2.push(99);
		our_queue2.push(50);
		std::queue<int> sys_queue(sys_queue2);
		ft::queue<int> our_queue(our_queue2);

		if (equalSysFt(sys_queue, our_queue))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	// ----------------------INIT 2 PARAMETRI------------------
	std::cout << YELLOW << "INIT QUEUE OPERATORE = [SYS vs OUR]" << OFF << std::endl;
	{
		std::queue<int> sys_queue;
		ft::queue<int> our_queue;
		std::queue<int> sys_queue2;
		ft::queue<int> our_queue2;
		sys_queue2.push(99);
		sys_queue2.push(50);
		our_queue2.push(99);
		our_queue2.push(50);
		sys_queue = sys_queue2;
		our_queue = our_queue2;

		if (equalSysFt(sys_queue, our_queue))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// ----------------------STACK METHODS------------------
	std::cout << YELLOW << "QUEUE METHODS [SYS vs OUR]" << OFF << std::endl;
	{
		std::queue<int> sys_queue;
		ft::queue<int> our_queue;
		sys_queue.push(99);
		sys_queue.push(50);
		our_queue.push(99);
		our_queue.push(50);

		if (equalSysFt(sys_queue, our_queue))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "PUSH" << OFF << std::endl;
	}
	{
		std::queue<int> sys_queue;
		ft::queue<int> our_queue;
		sys_queue.push(99);
		sys_queue.push(50);
		our_queue.push(99);
		our_queue.push(50);
		sys_queue.pop();
		our_queue.pop();

		if (equalSysFt(sys_queue, our_queue))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "POP" << OFF << std::endl;
	}
}

static void testMAP(void)
{

	std::cout << BLUE << "**** TEST MAP ****" << OFF << std::endl;

// ------------------ITERATOR METHODS----------------------
	std::cout << YELLOW << "MAP ITERATOR OPERATOR [SYS vs OUR]" << OFF << std::endl;
	{
		// BEGIN
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));

		std::map<int, int>::iterator sys_it = sys_map.begin();
		ft::map<int, int>::iterator our_it = our_map.begin();
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN" << OFF << std::endl;
	}
	{
		// ++BEGIN
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1, 1));
		sys_map.insert(std::pair<int, int>(123, 123));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1, 1));
		our_map.insert(ft::pair<int, int>(123, 123));

		std::map<int, int>::iterator sys_it = sys_map.begin();
		ft::map<int, int>::iterator our_it = our_map.begin();

		++sys_it;
		++our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++BEGIN test 1" << OFF << std::endl;
		++sys_it;
		++our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++BEGIN test 2" << OFF << std::endl;
		++sys_it;
		++our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++BEGIN test 3" << OFF << std::endl;
	}
	{
		// BEGIN++
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1, 1));
		sys_map.insert(std::pair<int, int>(123, 123));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1, 1));
		our_map.insert(ft::pair<int, int>(123, 123));

		std::map<int, int>::iterator sys_it = sys_map.begin();
		ft::map<int, int>::iterator our_it = our_map.begin();

		sys_it++;
		our_it++;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN++ test 1" << OFF << std::endl;
		sys_it++;
		our_it++;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN++ test 2" << OFF << std::endl;
		sys_it++;
		our_it++;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN++ test 3" << OFF << std::endl;
	}
	{
		// --END
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1, 1));
		sys_map.insert(std::pair<int, int>(123, 123));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1, 1));
		our_map.insert(ft::pair<int, int>(123, 123));

		std::map<int, int>::iterator sys_it = sys_map.end();
		ft::map<int, int>::iterator our_it = our_map.end();

		--sys_it;
		--our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--END test 1" << OFF << std::endl;
		--sys_it;
		--our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--END test 2" << OFF << std::endl;
		--sys_it;
		--our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--END test 3" << OFF << std::endl;
	}
	{
		// END--
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1, 1));
		sys_map.insert(std::pair<int, int>(123, 123));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1, 1));
		our_map.insert(ft::pair<int, int>(123, 123));

		std::map<int, int>::iterator sys_it = sys_map.end();
		ft::map<int, int>::iterator our_it = our_map.end();

		sys_it--;
		our_it--;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END-- test 1" << OFF << std::endl;
		sys_it--;
		our_it--;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END-- test 2" << OFF << std::endl;
		sys_it--;
		our_it--;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END-- test 3" << OFF << std::endl;
	}
	{
		// RBEGIN
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));

		std::map<int, int>::reverse_iterator sys_it = sys_map.rbegin();
		ft::map<int, int>::reverse_iterator our_it = our_map.rbegin();
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN" << OFF << std::endl;
	}
	{
		// ++BEGIN
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1, 1));
		sys_map.insert(std::pair<int, int>(123, 123));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1, 1));
		our_map.insert(ft::pair<int, int>(123, 123));

		std::map<int, int>::reverse_iterator sys_it = sys_map.rbegin();
		ft::map<int, int>::reverse_iterator our_it = our_map.rbegin();

		++sys_it;
		++our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++RBEGIN test 1" << OFF << std::endl;
		++sys_it;
		++our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++RBEGIN test 2" << OFF << std::endl;
		++sys_it;
		++our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++RBEGIN test 3" << OFF << std::endl;
	}
	{
		// BEGIN++
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1, 1));
		sys_map.insert(std::pair<int, int>(123, 123));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1, 1));
		our_map.insert(ft::pair<int, int>(123, 123));

		std::map<int, int>::reverse_iterator sys_it = sys_map.rbegin();
		ft::map<int, int>::reverse_iterator our_it = our_map.rbegin();

		sys_it++;
		our_it++;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN++ test 1" << OFF << std::endl;
		sys_it++;
		our_it++;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN++ test 2" << OFF << std::endl;
		sys_it++;
		our_it++;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN++ test 3" << OFF << std::endl;
	}
	{
		// --END
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1, 1));
		sys_map.insert(std::pair<int, int>(123, 123));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1, 1));
		our_map.insert(ft::pair<int, int>(123, 123));

		std::map<int, int>::reverse_iterator sys_it = sys_map.rend();
		ft::map<int, int>::reverse_iterator our_it = our_map.rend();

		--sys_it;
		--our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--REND test 1" << OFF << std::endl;
		--sys_it;
		--our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--REND test 2" << OFF << std::endl;
		--sys_it;
		--our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--REND test 3" << OFF << std::endl;
	}
	{
		// END--
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1, 1));
		sys_map.insert(std::pair<int, int>(123, 123));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1, 1));
		our_map.insert(ft::pair<int, int>(123, 123));

		std::map<int, int>::reverse_iterator sys_it = sys_map.rend();
		ft::map<int, int>::reverse_iterator our_it = our_map.rend();

		sys_it--;
		our_it--;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND-- test 1" << OFF << std::endl;
		sys_it--;
		our_it--;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND-- test 2" << OFF << std::endl;
		sys_it--;
		our_it--;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND-- test 3" << OFF << std::endl;
	}

	std::cout << YELLOW << "MAP OPERATORE == [SYS vs OUR]" << OFF << std::endl;
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		std::map<int, int> sys_map2;
		ft::map<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map2.insert(ft::pair<int, int>(10, 10));


		if ((sys_map == sys_map2) == (our_map == our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	std::cout << YELLOW << "MAP OPERATORE != [SYS vs OUR]" << OFF << std::endl;
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		std::map<int, int> sys_map2;
		ft::map<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(12, 12));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map2.insert(ft::pair<int, int>(12, 12));

		if ((sys_map != sys_map2) == (our_map != our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MAP OPERATORE < [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		std::map<int, int> sys_map2;
		ft::map<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(12, 12));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(12, 12));

		if ((sys_map < sys_map2) == (our_map < our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MAP OPERATORE < [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		std::map<int, int> sys_map2;
		ft::map<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(-12, -12));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(-12, -12));

		if ((sys_map < sys_map2) == (our_map < our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MAP OPERATORE < [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		std::map<int, int> sys_map2;
		ft::map<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(10, 10));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(10, 10));

		if ((sys_map < sys_map2) == (our_map < our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MAP OPERATORE > [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		std::map<int, int> sys_map2;
		ft::map<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(12, 12));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(12, 12));

		if ((sys_map > sys_map2) == (our_map > our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MAP OPERATORE > [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		std::map<int, int> sys_map2;
		ft::map<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(-12, -12));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(-12, -12));

		if ((sys_map > sys_map2) == (our_map > our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MAP OPERATORE > [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		std::map<int, int> sys_map2;
		ft::map<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(10, 10));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(10, 10));

		if ((sys_map > sys_map2) == (our_map > our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MAP OPERATORE <= [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		std::map<int, int> sys_map2;
		ft::map<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(12, 12));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(12, 12));

		if ((sys_map <= sys_map2) == (our_map <= our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MAP OPERATORE <= [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		std::map<int, int> sys_map2;
		ft::map<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(-12, -12));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(-12, -12));

		if ((sys_map <= sys_map2) == (our_map <= our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MAP OPERATORE <= [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		std::map<int, int> sys_map2;
		ft::map<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(10, 10));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(10, 10));

		if ((sys_map <= sys_map2) == (our_map <= our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MAP OPERATORE >= [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		std::map<int, int> sys_map2;
		ft::map<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(12, 12));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(12, 12));

		if ((sys_map >= sys_map2) == (our_map >= our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MAP OPERATORE >= [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		std::map<int, int> sys_map2;
		ft::map<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(-12, -12));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(-12, -12));

		if ((sys_map >= sys_map2) == (our_map >= our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MAP OPERATORE >= [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		std::map<int, int> sys_map2;
		ft::map<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(10, 10));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(10, 10));

		if ((sys_map >= sys_map2) == (our_map >= our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// -------------------INIT EMPTY---------------------
	std::cout << YELLOW << "INIT MAP VUOTO [SYS vs OUR]" << OFF << std::endl;
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// --------------------INT 1 PARAMETRO--------------------
	std::cout << YELLOW << "INIT MAP COPY CONSTRUCTOR [SYS vs OUR]" << OFF << std::endl;
	{
		std::map<int, int> sys_map2;
		ft::map<int, int> our_map2;
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(10, 10));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(10, 10));
		std::map<int, int> sys_map(sys_map2);
		ft::map<int, int> our_map(our_map2);

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// --------------------INT 2 PARAMETRI--------------------
	std::cout << YELLOW << "INIT MAP 2 PARAMETRI [SYS vs OUR]" << OFF << std::endl;
	{
		std::map<int, int> sys_map2;
		ft::map<int, int> our_map2;
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(1001, 1001));
		sys_map2.insert(std::pair<int, int>(101, 101));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(10, 10));
		our_map2.insert(ft::pair<int, int>(1001, 1001));
		our_map2.insert(ft::pair<int, int>(101, 101));
		std::map<int, int> sys_map(sys_map2.begin(), sys_map2.end());
		ft::map<int, int> our_map(our_map2.begin(), our_map2.end());

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// ----------------------INIT MAP = ------------------
	std::cout << YELLOW << "INIT MAP OPERATORE = [SYS vs OUR]" << OFF << std::endl;
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		std::map<int, int> sys_map2;
		ft::map<int, int> our_map2;
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(10, 10));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(5, 5));
		sys_map2.insert(std::pair<int, int>(99, 99));
		our_map2.insert(ft::pair<int, int>(5, 5));
		our_map2.insert(ft::pair<int, int>(99, 99));

		sys_map = sys_map2;
		our_map = our_map2;

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// ----------------------MAP METHODS------------------
	std::cout << YELLOW << "MAP METHODS [SYS vs OUR]" << OFF << std::endl;
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		std::pair<std::map<int, int>::iterator, bool> res_sys = sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		ft::pair<ft::map<int, int>::iterator, bool> res_our = our_map.insert(ft::pair<int, int>(10, 10));

		if (res_sys.second == res_our.second && res_sys.first->first == res_our.first->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN INSERT test 1" << OFF << std::endl;

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (value) test 1" << OFF << std::endl;
	}
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(100, 100));
		std::pair<std::map<int, int>::iterator, bool> res_sys =  sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		ft::pair<ft::map<int, int>::iterator, bool> res_our =  our_map.insert(ft::pair<int, int>(10, 10));

		if (res_sys.second == res_our.second && res_sys.first->first == res_our.first->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN INSERT test 2" << OFF << std::endl;			

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (value) test 2" << OFF << std::endl;
	}
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1001, 1001));
		sys_map.insert(std::pair<int, int>(101, 101));
		our_map.insert(ft::pair<int, int>(1001, 1001));
		our_map.insert(ft::pair<int, int>(101, 101));

		std::map<int, int> sys_map2;
		ft::map<int, int> our_map2;

		sys_map2.insert(sys_map.begin(), sys_map.end());
		our_map2.insert(our_map.begin(), our_map.end());

		if (equalSysFt(sys_map2, our_map2))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (iterator, iterator) test 1" << OFF << std::endl;
	}
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1001, 1001));
		sys_map.insert(std::pair<int, int>(101, 101));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1001, 1001));
		our_map.insert(ft::pair<int, int>(101, 101));

		std::map<int, int> sys_map2;
		ft::map<int, int> our_map2;

		sys_map2.insert(++sys_map.begin(), sys_map.end());
		our_map2.insert(++our_map.begin(), our_map.end());

		if (equalSysFt(sys_map2, our_map2))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (iterator, iterator) test 2" << OFF << std::endl;
	}
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1001, 1001));
		sys_map.insert(std::pair<int, int>(101, 101));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1001, 1001));
		our_map.insert(ft::pair<int, int>(101, 101));

		std::map<int, int>::iterator sys_it =  sys_map.insert(++sys_map.begin(), std::pair<int, int>(85, 85));
		ft::map<int, int>::iterator our_it =  our_map.insert(++our_map.begin(), ft::pair<int, int>(85, 85));

		if (sys_it->first == our_it->first && sys_it->second == our_it->second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN INSERT test 1" << OFF << std::endl;

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (iterator, value) test 1" << OFF << std::endl;
	}

    {
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1001, 1001));
		sys_map.insert(std::pair<int, int>(101, 101));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1001, 1001));
		our_map.insert(ft::pair<int, int>(101, 101));

		std::map<int, int>::iterator sys_it =  sys_map.insert(sys_map.end(), std::pair<int, int>(-100, -100));
		ft::map<int, int>::iterator our_it =  our_map.insert(our_map.end(), ft::pair<int, int>(-100, -100));

		if (sys_it->first == our_it->first && sys_it->second == our_it->second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN INSERT test 2" << OFF << std::endl;

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (iterator, value) test 2" << OFF << std::endl;
	}
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));

		std::map<int, int>::iterator sys_f = sys_map.find(10);
		ft::map<int, int>::iterator our_f = our_map.find(10);

		if (sys_f->first == our_f->first && sys_f->second == our_f->second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "FIND test 1" << OFF << std::endl;
	}
	{
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));

		std::map<int, int>::iterator sys_f = sys_map.find(56);
		ft::map<int, int>::iterator our_f = our_map.find(56);

		if (sys_f == sys_map.end() && our_f == our_map.end())
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "FIND test 2" << OFF << std::endl;
	}
	{
		// ERASE (LAST NODE)
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));

		sys_map.erase(sys_map.begin());
		our_map.erase(our_map.begin());

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (iterator) test 1 (node 0 child)" << OFF << std::endl;
	}
	{
		// ERASE (LAST NODE)
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		sys_map.erase(sys_map.find(99));
		our_map.erase(our_map.find(99));

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (iterator) test 2 (node 1 child)" << OFF << std::endl;
	}
	{
		// ERASE (LAST NODE)
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		sys_map.erase(sys_map.find(100));
		our_map.erase(our_map.find(100)); //CRASH

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (iterator) test 3 (node 2 child)" << OFF << std::endl;
	}
	{
		// ERASE (LAST NODE)
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));


		size_t res_sys = sys_map.erase(98);
		size_t res_our = our_map.erase(98);

		if (res_sys == res_our)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN ERASE (key) test 0" << OFF << std::endl;


		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (key) test 0 (node 0 child)" << OFF << std::endl;
	}
	{
		// ERASE
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		size_t res_sys = sys_map.erase(99);
		size_t res_our = our_map.erase(99);

		if (res_sys == res_our)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN ERASE (key) test 2" << OFF << std::endl;


		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (key) test 2 (node 1 child)" << OFF << std::endl;
	}
	{
		// ERASE
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		size_t res_sys = sys_map.erase(100);
		size_t res_our = our_map.erase(100); //CRASH

		if (res_sys == res_our)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN ERASE (key) test 3" << OFF << std::endl;


		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (key) test 3 (node 2 child)" << OFF << std::endl;
	}
	{
		// ERASE
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		sys_map.erase(sys_map.begin(), sys_map.end());
		our_map.erase(our_map.begin(), our_map.end()); //LOOP

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (iterator, itarator)" << OFF << std::endl;
	}
	{
		// OPERATOR []
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		sys_map[99] = -1;
		our_map[99] = -1;

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "OPERATOR [] test 1" << OFF << std::endl;
	}
	{
		// OPERATOR []
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		sys_map[999] = -1;
		our_map[999] = -1;

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "OPERATOR [] test 2" << OFF << std::endl;
	}
	{
		// CLEAR
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		sys_map.clear();
		our_map.clear();

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "CLEAR" << OFF << std::endl;
	}
	{
		// CLEAR
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));
		std::map<int, int> sys_map2;
		ft::map<int, int> our_map2;
		sys_map2.insert(std::pair<int, int>(123, 123));
		our_map2.insert(ft::pair<int, int>(123, 123));

		sys_map.swap(sys_map2);
		our_map.swap(our_map2);

		if (equalSysFt(sys_map, our_map) && equalSysFt(sys_map2, our_map2))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "SWAP" << OFF << std::endl;
	}
	{
		// COUNT
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		if (sys_map.count(100) == our_map.count(100))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "COUNT test 1" << OFF << std::endl;
	}
	{
		// COUNT
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		if (sys_map.count(789) == our_map.count(789))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "COUNT test 2" << OFF << std::endl;
	}
	{
		// LOWER_BOUND
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		ft::map<int, int>::iterator our_it = our_map.lower_bound(-100);
		std::map<int, int>::iterator sys_it = sys_map.lower_bound(-100);

		if (our_it->first == sys_it->first && our_it->second == sys_it->second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "LOWER BOUND test 1" << OFF << std::endl;
	}
	{
		// LOWER_BOUND
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		ft::map<int, int>::iterator our_it = our_map.lower_bound(1000);
		std::map<int, int>::iterator sys_it = sys_map.lower_bound(1000);

		if (our_it == our_map.end() && sys_it == sys_map.end())
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "LOWER BOUND test 2" << OFF << std::endl;
	}
	{
		// LOWER_BOUND
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		ft::map<int, int>::iterator our_it = our_map.lower_bound(15);
		std::map<int, int>::iterator sys_it = sys_map.lower_bound(15);

		if (our_it->first == sys_it->first && our_it->second == sys_it->second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "LOWER BOUND test 3" << OFF << std::endl;
	}

	{
		// LOWER_BOUND
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		ft::map<int, int>::iterator our_it = our_map.upper_bound(-100);
		std::map<int, int>::iterator sys_it = sys_map.upper_bound(-100);

		if (our_it->first == sys_it->first && our_it->second == sys_it->second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "UPPER BOUND test 1" << OFF << std::endl;
	}
	{
		// LOWER_BOUND
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		ft::map<int, int>::iterator our_it = our_map.upper_bound(1000);
		std::map<int, int>::iterator sys_it = sys_map.upper_bound(1000);

		if (our_it == our_map.end() && sys_it == sys_map.end())
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "UPPER BOUND test 2" << OFF << std::endl;
	}
	{
		// LOWER_BOUND
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		ft::map<int, int>::iterator our_it = our_map.upper_bound(15);
		std::map<int, int>::iterator sys_it = sys_map.upper_bound(15);

		if (our_it->first == sys_it->first && our_it->second == sys_it->second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "UPPER BOUND test 3" << OFF << std::endl;
	}
	{
		// EQUAL RANGE
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		ft::pair<ft::map<int, int>::iterator, ft::map<int, int>::iterator> our_ret = our_map.equal_range(-1000);
		std::pair<std::map<int, int>::iterator, std::map<int, int>::iterator> sys_ret = sys_map.equal_range(-1000);

		if (our_ret.first->first == sys_ret.first->first && our_ret.first->second == sys_ret.first->second &&
			our_ret.second->first == sys_ret.second->first && our_ret.second->second == sys_ret.second->second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "EQUAL RANGE test 1" << OFF << std::endl;
	}
	{
		// EQUAL RANGE
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		ft::pair<ft::map<int, int>::iterator, ft::map<int, int>::iterator> our_ret = our_map.equal_range(11);
		std::pair<std::map<int, int>::iterator, std::map<int, int>::iterator> sys_ret = sys_map.equal_range(11);

		if (our_ret.first->first == sys_ret.first->first && our_ret.first->second == sys_ret.first->second &&
			our_ret.second->first == sys_ret.second->first && our_ret.second->second == sys_ret.second->second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "EQUAL RANGE test 2" << OFF << std::endl;
	}
	{
		// EQUAL RANGE
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		ft::pair<ft::map<int, int>::iterator, ft::map<int, int>::iterator> our_ret = our_map.equal_range(9999);
		std::pair<std::map<int, int>::iterator, std::map<int, int>::iterator> sys_ret = sys_map.equal_range(9999);

		if (our_ret.first == our_map.end() && sys_ret.first == sys_map.end() && our_ret.second == our_map.end() && sys_ret.second == sys_map.end())
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "EQUAL RANGE test 3" << OFF << std::endl;
	}
	{
		// EQUAL RANGE
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		if (sys_map.key_comp()(123,456) == our_map.key_comp()(123, 456) )
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "KEY_COMP test 1" << OFF << std::endl;
	}
	{
		// EQUAL RANGE
		std::map<int, int> sys_map;
		ft::map<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		if (sys_map.key_comp()(-10,-10) == our_map.key_comp()(-10, -10) )
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "KEY_COMP test 2" << OFF << std::endl;
	}
	{
		ft::map<int, int> our_map;
		std::map<int, int> sys_map;
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1, 1));
		our_map.insert(ft::pair<int, int>(123, 123));
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1, 1));
		sys_map.insert(std::pair<int, int>(123, 123));
		
		
		ft::pair<int,int> highest_o = *our_map.rbegin();
		ft::map<int,int>::iterator it_o = our_map.begin();
		std::pair<int,int> highest_s = *sys_map.rbegin();
		std::map<int,int>::iterator it_s = sys_map.begin();


		if (our_map.value_comp()(*it_o++, highest_o) == sys_map.value_comp()(*it_s++, highest_s))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "VALUE_COMP test 1" << OFF << std::endl;
	}
	{
		ft::map<int, int> our_map;
		std::map<int, int> sys_map;
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1, 1));
		our_map.insert(ft::pair<int, int>(123, 123));
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1, 1));
		sys_map.insert(std::pair<int, int>(123, 123));
		
		
		ft::pair<int,int> highest_o = *our_map.rbegin();
		ft::map<int,int>::iterator it_o = ++our_map.begin();
		std::pair<int,int> highest_s = *sys_map.rbegin();
		std::map<int,int>::iterator it_s = ++sys_map.begin();


		if (our_map.value_comp()(*it_o++, highest_o) == sys_map.value_comp()(*it_s++, highest_s))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "VALUE_COMP test 2" << OFF << std::endl;
	}
}

static void testMULTIMAP(void)
{

	std::cout << BLUE << "**** TEST MULTIMAP ****" << OFF << std::endl;

// ------------------ITERATOR METHODS----------------------
	std::cout << YELLOW << "MULTIMAP ITERATOR OPERATOR [SYS vs OUR]" << OFF << std::endl;
	{
		// BEGIN
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));

		std::multimap<int, int>::iterator sys_it = sys_map.begin();
		ft::multimap<int, int>::iterator our_it = our_map.begin();
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN" << OFF << std::endl;
	}
	{
		// ++BEGIN
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1, 1));
		sys_map.insert(std::pair<int, int>(123, 123));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1, 1));
		our_map.insert(ft::pair<int, int>(123, 123));

		std::multimap<int, int>::iterator sys_it = sys_map.begin();
		ft::multimap<int, int>::iterator our_it = our_map.begin();

		++sys_it;
		++our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++BEGIN test 1" << OFF << std::endl;
		++sys_it;
		++our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++BEGIN test 2" << OFF << std::endl;
		++sys_it;
		++our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++BEGIN test 3" << OFF << std::endl;
	}
	{
		// BEGIN++
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1, 1));
		sys_map.insert(std::pair<int, int>(123, 123));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1, 1));
		our_map.insert(ft::pair<int, int>(123, 123));

		std::multimap<int, int>::iterator sys_it = sys_map.begin();
		ft::multimap<int, int>::iterator our_it = our_map.begin();

		sys_it++;
		our_it++;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN++ test 1" << OFF << std::endl;
		sys_it++;
		our_it++;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN++ test 2" << OFF << std::endl;
		sys_it++;
		our_it++;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN++ test 3" << OFF << std::endl;
	}
	{
		// --END
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1, 1));
		sys_map.insert(std::pair<int, int>(123, 123));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1, 1));
		our_map.insert(ft::pair<int, int>(123, 123));

		std::multimap<int, int>::iterator sys_it = sys_map.end();
		ft::multimap<int, int>::iterator our_it = our_map.end();

		--sys_it;
		--our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--END test 1" << OFF << std::endl;
		--sys_it;
		--our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--END test 2" << OFF << std::endl;
		--sys_it;
		--our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--END test 3" << OFF << std::endl;
	}
	{
		// END--
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1, 1));
		sys_map.insert(std::pair<int, int>(123, 123));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1, 1));
		our_map.insert(ft::pair<int, int>(123, 123));

		std::multimap<int, int>::iterator sys_it = sys_map.end();
		ft::multimap<int, int>::iterator our_it = our_map.end();

		sys_it--;
		our_it--;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END-- test 1" << OFF << std::endl;
		sys_it--;
		our_it--;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END-- test 2" << OFF << std::endl;
		sys_it--;
		our_it--;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END-- test 3" << OFF << std::endl;
	}
	{
		// BEGIN
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));

		std::multimap<int, int>::iterator sys_it = sys_map.begin();
		ft::multimap<int, int>::iterator our_it = our_map.begin();
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN" << OFF << std::endl;
	}
	{
		// ++BEGIN
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1, 1));
		sys_map.insert(std::pair<int, int>(123, 123));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1, 1));
		our_map.insert(ft::pair<int, int>(123, 123));

		std::multimap<int, int>::reverse_iterator sys_it = sys_map.rbegin();
		ft::multimap<int, int>::reverse_iterator our_it = our_map.rbegin();

		++sys_it;
		++our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++RBEGIN test 1" << OFF << std::endl;
		++sys_it;
		++our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++RBEGIN test 2" << OFF << std::endl;
		++sys_it;
		++our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++RBEGIN test 3" << OFF << std::endl;
	}
	{
		// BEGIN++
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1, 1));
		sys_map.insert(std::pair<int, int>(123, 123));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1, 1));
		our_map.insert(ft::pair<int, int>(123, 123));

		std::multimap<int, int>::reverse_iterator sys_it = sys_map.rbegin();
		ft::multimap<int, int>::reverse_iterator our_it = our_map.rbegin();

		sys_it++;
		our_it++;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN++ test 1" << OFF << std::endl;
		sys_it++;
		our_it++;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN++ test 2" << OFF << std::endl;
		sys_it++;
		our_it++;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN++ test 3" << OFF << std::endl;
	}
	{
		// --END
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1, 1));
		sys_map.insert(std::pair<int, int>(123, 123));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1, 1));
		our_map.insert(ft::pair<int, int>(123, 123));

		std::multimap<int, int>::reverse_iterator sys_it = sys_map.rend();
		ft::multimap<int, int>::reverse_iterator our_it = our_map.rend();

		--sys_it;
		--our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--REND test 1" << OFF << std::endl;
		--sys_it;
		--our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--REND test 2" << OFF << std::endl;
		--sys_it;
		--our_it;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--REND test 3" << OFF << std::endl;
	}
	{
		// END--
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1, 1));
		sys_map.insert(std::pair<int, int>(123, 123));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1, 1));
		our_map.insert(ft::pair<int, int>(123, 123));

		std::multimap<int, int>::reverse_iterator sys_it = sys_map.rend();
		ft::multimap<int, int>::reverse_iterator our_it = our_map.rend();

		sys_it--;
		our_it--;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND-- test 1" << OFF << std::endl;
		sys_it--;
		our_it--;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND-- test 2" << OFF << std::endl;
		sys_it--;
		our_it--;
		if (sys_it->first == our_it->first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND-- test 3" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTIMAP OPERATORE == [SYS vs OUR]" << OFF << std::endl;
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		std::multimap<int, int> sys_map2;
		ft::multimap<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map2.insert(ft::pair<int, int>(10, 10));


		if ((sys_map == sys_map2) == (our_map == our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	std::cout << YELLOW << "MULTIMAP OPERATORE != [SYS vs OUR]" << OFF << std::endl;
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		std::multimap<int, int> sys_map2;
		ft::multimap<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(12, 12));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map2.insert(ft::pair<int, int>(12, 12));

		if ((sys_map != sys_map2) == (our_map != our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTIMAP OPERATORE < [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		std::multimap<int, int> sys_map2;
		ft::multimap<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(12, 12));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(12, 12));

		if ((sys_map < sys_map2) == (our_map < our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTIMAP OPERATORE < [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		std::multimap<int, int> sys_map2;
		ft::multimap<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(-12, -12));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(-12, -12));

		if ((sys_map < sys_map2) == (our_map < our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTIMAP OPERATORE < [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		std::multimap<int, int> sys_map2;
		ft::multimap<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(10, 10));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(10, 10));

		if ((sys_map < sys_map2) == (our_map < our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTIMAP OPERATORE > [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		std::multimap<int, int> sys_map2;
		ft::multimap<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(12, 12));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(12, 12));

		if ((sys_map > sys_map2) == (our_map > our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTIMAP OPERATORE > [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		std::multimap<int, int> sys_map2;
		ft::multimap<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(-12, -12));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(-12, -12));

		if ((sys_map > sys_map2) == (our_map > our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTIMAP OPERATORE > [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		std::multimap<int, int> sys_map2;
		ft::multimap<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(10, 10));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(10, 10));

		if ((sys_map > sys_map2) == (our_map > our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTIMAP OPERATORE <= [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		std::multimap<int, int> sys_map2;
		ft::multimap<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(12, 12));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(12, 12));

		if ((sys_map <= sys_map2) == (our_map <= our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTIMAP OPERATORE <= [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		std::multimap<int, int> sys_map2;
		ft::multimap<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(-12, -12));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(-12, -12));

		if ((sys_map <= sys_map2) == (our_map <= our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTIMAP OPERATORE <= [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		std::multimap<int, int> sys_map2;
		ft::multimap<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(10, 10));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(10, 10));

		if ((sys_map <= sys_map2) == (our_map <= our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTIMAP OPERATORE >= [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		std::multimap<int, int> sys_map2;
		ft::multimap<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(12, 12));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(12, 12));

		if ((sys_map >= sys_map2) == (our_map >= our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTIMAP OPERATORE >= [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		std::multimap<int, int> sys_map2;
		ft::multimap<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(-12, -12));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(-12, -12));

		if ((sys_map >= sys_map2) == (our_map >= our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTIMAP OPERATORE >= [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		std::multimap<int, int> sys_map2;
		ft::multimap<int, int> our_map2;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(10, 10));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(10, 10));

		if ((sys_map >= sys_map2) == (our_map >= our_map2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// -------------------INIT EMPTY---------------------
	std::cout << YELLOW << "INIT MULTIMAP VUOTO [SYS vs OUR]" << OFF << std::endl;
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// --------------------INT 1 PARAMETRO--------------------
	std::cout << YELLOW << "INIT MULTIMAP COPY CONSTRUCTOR [SYS vs OUR]" << OFF << std::endl;
	{
		std::multimap<int, int> sys_map2;
		ft::multimap<int, int> our_map2;
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(10, 10));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(10, 10));
		std::multimap<int, int> sys_map(sys_map2);
		ft::multimap<int, int> our_map(our_map2);

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// --------------------INT 2 PARAMETRI--------------------
	std::cout << YELLOW << "INIT MULTIMAP 2 PARAMETRI [SYS vs OUR]" << OFF << std::endl;
	{
		std::multimap<int, int> sys_map2;
		ft::multimap<int, int> our_map2;
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(1001, 1001));
		sys_map2.insert(std::pair<int, int>(101, 101));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(10, 10));
		our_map2.insert(ft::pair<int, int>(1001, 1001));
		our_map2.insert(ft::pair<int, int>(101, 101));
		std::multimap<int, int> sys_map(sys_map2.begin(), sys_map2.end());
		ft::multimap<int, int> our_map(our_map2.begin(), our_map2.end());

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// ----------------------INIT MULTIMAP = ------------------
	std::cout << YELLOW << "INIT MULTIMAP OPERATORE = [SYS vs OUR]" << OFF << std::endl;
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		std::multimap<int, int> sys_map2;
		ft::multimap<int, int> our_map2;
		sys_map2.insert(std::pair<int, int>(100, 100));
		sys_map2.insert(std::pair<int, int>(10, 10));
		our_map2.insert(ft::pair<int, int>(100, 100));
		our_map2.insert(ft::pair<int, int>(10, 10));
		sys_map2.insert(std::pair<int, int>(5, 5));
		sys_map2.insert(std::pair<int, int>(99, 99));
		our_map2.insert(ft::pair<int, int>(5, 5));
		our_map2.insert(ft::pair<int, int>(99, 99));

		sys_map = sys_map2;
		our_map = our_map2;

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// ----------------------MULTIMAP METHODS------------------
	std::cout << YELLOW << "MULTIMAP METHODS [SYS vs OUR]" << OFF << std::endl;
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		std::multimap<int, int>::iterator res_sys = sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		ft::multimap<int, int>::iterator res_our = our_map.insert(ft::pair<int, int>(10, 10));

		if (res_sys->first == res_our->first && res_sys->second == res_our->second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN INSERT test 1" << OFF << std::endl;

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (value) test 1" << OFF << std::endl;
	}
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(100, 100));
		std::multimap<int, int>::iterator res_sys =  sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		ft::multimap<int, int>::iterator res_our =  our_map.insert(ft::pair<int, int>(10, 10));

		if (res_sys->first == res_our->first && res_sys->second == res_our->second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN INSERT test 2" << OFF << std::endl;			

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (value) test 2" << OFF << std::endl;
	}
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1001, 1001));
		sys_map.insert(std::pair<int, int>(101, 101));
		our_map.insert(ft::pair<int, int>(1001, 1001));
		our_map.insert(ft::pair<int, int>(101, 101));

		std::multimap<int, int> sys_map2;
		ft::multimap<int, int> our_map2;

		sys_map2.insert(sys_map.begin(), sys_map.end());
		our_map2.insert(our_map.begin(), our_map.end());

		if (equalSysFt(sys_map2, our_map2))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (iterator, iterator) test 1" << OFF << std::endl;
	}
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1001, 1001));
		sys_map.insert(std::pair<int, int>(101, 101));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1001, 1001));
		our_map.insert(ft::pair<int, int>(101, 101));

		std::multimap<int, int> sys_map2;
		ft::multimap<int, int> our_map2;

		sys_map2.insert(++sys_map.begin(), sys_map.end());
		our_map2.insert(++our_map.begin(), our_map.end());

		if (equalSysFt(sys_map2, our_map2))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (iterator, iterator) test 2" << OFF << std::endl;
	}
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1001, 1001));
		sys_map.insert(std::pair<int, int>(101, 101));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1001, 1001));
		our_map.insert(ft::pair<int, int>(101, 101));

		std::multimap<int, int>::iterator sys_it =  sys_map.insert(++sys_map.begin(), std::pair<int, int>(85, 85));
		ft::multimap<int, int>::iterator our_it =  our_map.insert(++our_map.begin(), ft::pair<int, int>(85, 85));

		if (sys_it->first == our_it->first && sys_it->second == our_it->second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN INSERT test 1" << OFF << std::endl;

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (iterator, value) test 1" << OFF << std::endl;
	}

    {
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1001, 1001));
		sys_map.insert(std::pair<int, int>(101, 101));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1001, 1001));
		our_map.insert(ft::pair<int, int>(101, 101));

		std::multimap<int, int>::iterator sys_it =  sys_map.insert(sys_map.end(), std::pair<int, int>(-100, -100));
		ft::multimap<int, int>::iterator our_it =  our_map.insert(our_map.end(), ft::pair<int, int>(-100, -100));

		if (sys_it->first == our_it->first && sys_it->second == our_it->second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN INSERT test 2" << OFF << std::endl;

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (iterator, value) test 2" << OFF << std::endl;
	}
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));

		std::multimap<int, int>::iterator sys_f = sys_map.find(10);
		ft::multimap<int, int>::iterator our_f = our_map.find(10);

		if (sys_f->first == our_f->first && sys_f->second == our_f->second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "FIND test 1" << OFF << std::endl;
	}
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));

		std::multimap<int, int>::iterator sys_f = sys_map.find(56);
		ft::multimap<int, int>::iterator our_f = our_map.find(56);

		if (sys_f == sys_map.end() && our_f == our_map.end())
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "FIND test 2" << OFF << std::endl;
	}
	{
		// ERASE (LAST NODE)
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));

		sys_map.erase(sys_map.begin());
		our_map.erase(our_map.begin());

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (iterator) test 1 (node 0 child)" << OFF << std::endl;
	}
	{
		// ERASE (LAST NODE)
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		sys_map.erase(sys_map.find(99));
		our_map.erase(our_map.find(99));

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (iterator) test 2 (node 1 child)" << OFF << std::endl;
	}
	{
		// ERASE (LAST NODE)
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		sys_map.erase(sys_map.find(100));
		our_map.erase(our_map.find(100)); //CRASH

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (iterator) test 3 (node 2 child)" << OFF << std::endl;
	}
	{
		// ERASE (LAST NODE)
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));


		size_t res_sys = sys_map.erase(98);
		size_t res_our = our_map.erase(98);

		if (res_sys == res_our)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN ERASE (key) test 0" << OFF << std::endl;


		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (key) test 0 (node 0 child)" << OFF << std::endl;
	}
	{
		// ERASE
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		size_t res_sys = sys_map.erase(99);
		size_t res_our = our_map.erase(99);

		if (res_sys == res_our)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN ERASE (key) test 2" << OFF << std::endl;


		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (key) test 2 (node 1 child)" << OFF << std::endl;
	}
	{
		// ERASE
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		size_t res_sys = sys_map.erase(100);
		size_t res_our = our_map.erase(100); //CRASH

		if (res_sys == res_our)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN ERASE (key) test 3" << OFF << std::endl;


		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (key) test 3 (node 2 child)" << OFF << std::endl;
	}
	{
		// ERASE
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		sys_map.erase(sys_map.begin(), sys_map.end());
		our_map.erase(our_map.begin(), our_map.end()); //LOOP

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (iterator, itarator)" << OFF << std::endl;
	}
	{
		// CLEAR
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		sys_map.clear();
		our_map.clear();

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "CLEAR" << OFF << std::endl;
	}
	{
		// CLEAR
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));
		std::multimap<int, int> sys_map2;
		ft::multimap<int, int> our_map2;
		sys_map2.insert(std::pair<int, int>(123, 123));
		our_map2.insert(ft::pair<int, int>(123, 123));

		sys_map.swap(sys_map2);
		our_map.swap(our_map2);

		if (equalSysFt(sys_map, our_map) && equalSysFt(sys_map2, our_map2))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "SWAP" << OFF << std::endl;
	}
	{
		// COUNT
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		if (sys_map.count(100) == our_map.count(100))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "COUNT test 1" << OFF << std::endl;
	}
	{
		// COUNT
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		if (sys_map.count(789) == our_map.count(789))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "COUNT test 2" << OFF << std::endl;
	}
	{
		// LOWER_BOUND
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		ft::multimap<int, int>::iterator our_it = our_map.lower_bound(-100);
		std::multimap<int, int>::iterator sys_it = sys_map.lower_bound(-100);

		if (our_it->first == sys_it->first && our_it->second == sys_it->second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "LOWER BOUND test 1" << OFF << std::endl;
	}
	{
		// LOWER_BOUND
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		ft::multimap<int, int>::iterator our_it = our_map.lower_bound(1000);
		std::multimap<int, int>::iterator sys_it = sys_map.lower_bound(1000);

		if (our_it == our_map.end() && sys_it == sys_map.end())
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "LOWER BOUND test 2" << OFF << std::endl;
	}
	{
		// LOWER_BOUND
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		ft::multimap<int, int>::iterator our_it = our_map.lower_bound(15);
		std::multimap<int, int>::iterator sys_it = sys_map.lower_bound(15);

		if (our_it->first == sys_it->first && our_it->second == sys_it->second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "LOWER BOUND test 3" << OFF << std::endl;
	}

	{
		// LOWER_BOUND
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		ft::multimap<int, int>::iterator our_it = our_map.upper_bound(-100);
		std::multimap<int, int>::iterator sys_it = sys_map.upper_bound(-100);

		if (our_it->first == sys_it->first && our_it->second == sys_it->second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "UPPER BOUND test 1" << OFF << std::endl;
	}
	{
		// LOWER_BOUND
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		ft::multimap<int, int>::iterator our_it = our_map.upper_bound(1000);
		std::multimap<int, int>::iterator sys_it = sys_map.upper_bound(1000);

		if (our_it == our_map.end() && sys_it == sys_map.end())
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "UPPER BOUND test 2" << OFF << std::endl;
	}
	{
		// LOWER_BOUND
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		ft::multimap<int, int>::iterator our_it = our_map.upper_bound(15);
		std::multimap<int, int>::iterator sys_it = sys_map.upper_bound(15);

		if (our_it->first == sys_it->first && our_it->second == sys_it->second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "UPPER BOUND test 3" << OFF << std::endl;
	}
	{
		// EQUAL RANGE
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		ft::pair<ft::multimap<int, int>::iterator, ft::multimap<int, int>::iterator> our_ret = our_map.equal_range(-1000);
		std::pair<std::multimap<int, int>::iterator, std::multimap<int, int>::iterator> sys_ret = sys_map.equal_range(-1000);

		if (our_ret.first->first == sys_ret.first->first && our_ret.first->second == sys_ret.first->second &&
			our_ret.second->first == sys_ret.second->first && our_ret.second->second == sys_ret.second->second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "EQUAL RANGE test 1" << OFF << std::endl;
	}
	{
		// EQUAL RANGE
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		ft::pair<ft::multimap<int, int>::iterator, ft::multimap<int, int>::iterator> our_ret = our_map.equal_range(11);
		std::pair<std::multimap<int, int>::iterator, std::multimap<int, int>::iterator> sys_ret = sys_map.equal_range(11);

		if (our_ret.first->first == sys_ret.first->first && our_ret.first->second == sys_ret.first->second &&
			our_ret.second->first == sys_ret.second->first && our_ret.second->second == sys_ret.second->second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "EQUAL RANGE test 2" << OFF << std::endl;
	}
	{
		// EQUAL RANGE
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		ft::pair<ft::multimap<int, int>::iterator, ft::multimap<int, int>::iterator> our_ret = our_map.equal_range(9999);
		std::pair<std::multimap<int, int>::iterator, std::multimap<int, int>::iterator> sys_ret = sys_map.equal_range(9999);

		if (our_ret.first == our_map.end() && sys_ret.first == sys_map.end() && our_ret.second == our_map.end() && sys_ret.second == sys_map.end())
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "EQUAL RANGE test 3" << OFF << std::endl;
	}
	{
		// EQUAL RANGE
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		if (sys_map.key_comp()(123,456) == our_map.key_comp()(123, 456) )
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "KEY_COMP test 1" << OFF << std::endl;
	}
	{
		// EQUAL RANGE
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(15, 15));
		sys_map.insert(std::pair<int, int>(110, 110));
		sys_map.insert(std::pair<int, int>(99, 99));
		sys_map.insert(std::pair<int, int>(98, 98));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(15, 15));
		our_map.insert(ft::pair<int, int>(110, 110));
		our_map.insert(ft::pair<int, int>(99, 99));
		our_map.insert(ft::pair<int, int>(98, 98));

		if (sys_map.key_comp()(-10,-10) == our_map.key_comp()(-10, -10) )
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "KEY_COMP test 2" << OFF << std::endl;
	}
	{
		ft::multimap<int, int> our_map;
		std::multimap<int, int> sys_map;
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1, 1));
		our_map.insert(ft::pair<int, int>(123, 123));
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1, 1));
		sys_map.insert(std::pair<int, int>(123, 123));
		
		
		ft::pair<int,int> highest_o = *our_map.rbegin();
		ft::multimap<int,int>::iterator it_o = our_map.begin();
		std::pair<int,int> highest_s = *sys_map.rbegin();
		std::multimap<int,int>::iterator it_s = sys_map.begin();


		if (our_map.value_comp()(*it_o++, highest_o) == sys_map.value_comp()(*it_s++, highest_s))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "VALUE_COMP test 1" << OFF << std::endl;
	}
	{
		ft::multimap<int, int> our_map;
		std::multimap<int, int> sys_map;
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1, 1));
		our_map.insert(ft::pair<int, int>(123, 123));
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1, 1));
		sys_map.insert(std::pair<int, int>(123, 123));
		
		
		ft::pair<int,int> highest_o = *our_map.rbegin();
		ft::multimap<int,int>::iterator it_o = ++our_map.begin();
		std::pair<int,int> highest_s = *sys_map.rbegin();
		std::multimap<int,int>::iterator it_s = ++sys_map.begin();


		if (our_map.value_comp()(*it_o++, highest_o) == sys_map.value_comp()(*it_s++, highest_s))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "VALUE_COMP test 2" << OFF << std::endl;
	}
}

static void testSET(void)
{

	std::cout << BLUE << "**** TEST SET ****" << OFF << std::endl;

// ------------------ITERATOR METHODS----------------------
	std::cout << YELLOW << "SET ITERATOR OPERATOR [SYS vs OUR]" << OFF << std::endl;
	{
		// BEGIN
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		our_set.insert(100);
		our_set.insert(10);

		std::set<int>::iterator sys_it = sys_set.begin();
		ft::set<int>::iterator our_it = our_set.begin();
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN" << OFF << std::endl;
	}
	{
		// ++BEGIN
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(1);
		sys_set.insert(123);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(1);
		our_set.insert(123);

		std::set<int>::iterator sys_it = sys_set.begin();
		ft::set<int>::iterator our_it = our_set.begin();

		++sys_it;
		++our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++BEGIN test 1" << OFF << std::endl;
		++sys_it;
		++our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++BEGIN test 2" << OFF << std::endl;
		++sys_it;
		++our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++BEGIN test 3" << OFF << std::endl;
	}
	{
		// BEGIN++
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(1);
		sys_set.insert(123);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(1);
		our_set.insert(123);

		std::set<int>::iterator sys_it = sys_set.begin();
		ft::set<int>::iterator our_it = our_set.begin();

		sys_it++;
		our_it++;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN++ test 1" << OFF << std::endl;
		sys_it++;
		our_it++;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN++ test 2" << OFF << std::endl;
		sys_it++;
		our_it++;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN++ test 3" << OFF << std::endl;
	}
	{
		// --END
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(1);
		sys_set.insert(123);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(1);
		our_set.insert(123);

		std::set<int>::iterator sys_it = sys_set.end();
		ft::set<int>::iterator our_it = our_set.end();

		--sys_it;
		--our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--END test 1" << OFF << std::endl;
		--sys_it;
		--our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--END test 2" << OFF << std::endl;
		--sys_it;
		--our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--END test 3" << OFF << std::endl;
	}
	{
		// END--
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(1);
		sys_set.insert(123);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(1);
		our_set.insert(123);

		std::set<int>::iterator sys_it = sys_set.end();
		ft::set<int>::iterator our_it = our_set.end();

		sys_it--;
		our_it--;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END-- test 1" << OFF << std::endl;
		sys_it--;
		our_it--;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END-- test 2" << OFF << std::endl;
		sys_it--;
		our_it--;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END-- test 3" << OFF << std::endl;
	}
	{
		// BEGIN
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		our_set.insert(100);
		our_set.insert(10);

		std::set<int>::reverse_iterator sys_it = sys_set.rbegin();
		ft::set<int>::reverse_iterator our_it = our_set.rbegin();
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN" << OFF << std::endl;
	}
	{
		// ++BEGIN
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(1);
		sys_set.insert(123);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(1);
		our_set.insert(123);

		std::set<int>::reverse_iterator sys_it = sys_set.rbegin();
		ft::set<int>::reverse_iterator our_it = our_set.rbegin();

		++sys_it;
		++our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++RBEGIN test 1" << OFF << std::endl;
		++sys_it;
		++our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++RBEGIN test 2" << OFF << std::endl;
		++sys_it;
		++our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++RBEGIN test 3" << OFF << std::endl;
	}
	{
		// BEGIN++
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(1);
		sys_set.insert(123);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(1);
		our_set.insert(123);

		std::set<int>::reverse_iterator sys_it = sys_set.rbegin();
		ft::set<int>::reverse_iterator our_it = our_set.rbegin();

		sys_it++;
		our_it++;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN++ test 1" << OFF << std::endl;
		sys_it++;
		our_it++;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN++ test 2" << OFF << std::endl;
		sys_it++;
		our_it++;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN++ test 3" << OFF << std::endl;
	}
	{
		// --END
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(1);
		sys_set.insert(123);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(1);
		our_set.insert(123);

		std::set<int>::reverse_iterator sys_it = sys_set.rend();
		ft::set<int>::reverse_iterator our_it = our_set.rend();

		--sys_it;
		--our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--REND test 1" << OFF << std::endl;
		--sys_it;
		--our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--REND test 2" << OFF << std::endl;
		--sys_it;
		--our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--REND test 3" << OFF << std::endl;
	}
	{
		// END--
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(1);
		sys_set.insert(123);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(1);
		our_set.insert(123);

		std::set<int>::reverse_iterator sys_it = sys_set.rend();
		ft::set<int>::reverse_iterator our_it = our_set.rend();

		sys_it--;
		our_it--;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND-- test 1" << OFF << std::endl;
		sys_it--;
		our_it--;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND-- test 2" << OFF << std::endl;
		sys_it--;
		our_it--;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND-- test 3" << OFF << std::endl;
	}
	std::cout << YELLOW << "SET OPERATORE == [SYS vs OUR]" << OFF << std::endl;
	{
		std::set<int> sys_set;
		ft::set<int> our_set;
		std::set<int> sys_set2;
		ft::set<int> our_set2;
		sys_set.insert(100);
		sys_set2.insert(100);
		our_set.insert(100);
		our_set2.insert(100);
		sys_set.insert(10);
		sys_set2.insert(10);
		our_set.insert(10);
		our_set2.insert(10);


		if ((sys_set == sys_set2) == (our_set == our_set2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	std::cout << YELLOW << "SET OPERATORE != [SYS vs OUR]" << OFF << std::endl;
	{
		std::set<int> sys_set;
		ft::set<int> our_set;
		std::set<int> sys_set2;
		ft::set<int> our_set2;
		sys_set.insert(100);
		sys_set2.insert(100);
		our_set.insert(100);
		our_set2.insert(100);
		sys_set.insert(10);
		sys_set2.insert(12);
		our_set.insert(10);
		our_set2.insert(12);

		if ((sys_set != sys_set2) == (our_set != our_set2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "SET OPERATORE < [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::set<int> sys_set;
		ft::set<int> our_set;
		std::set<int> sys_set2;
		ft::set<int> our_set2;
		sys_set.insert(100);
		sys_set.insert(10);
		our_set.insert(100);
		our_set.insert(10);
		sys_set2.insert(100);
		sys_set2.insert(12);
		our_set2.insert(100);
		our_set2.insert(12);

		if ((sys_set < sys_set2) == (our_set < our_set2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "SET OPERATORE < [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::set<int> sys_set;
		ft::set<int> our_set;
		std::set<int> sys_set2;
		ft::set<int> our_set2;
		sys_set.insert(100);
		sys_set.insert(10);
		our_set.insert(100);
		our_set.insert(10);
		sys_set2.insert(100);
		sys_set2.insert(-12);
		our_set2.insert(100);
		our_set2.insert(-12);

		if ((sys_set < sys_set2) == (our_set < our_set2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "SET OPERATORE < [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::set<int> sys_set;
		ft::set<int> our_set;
		std::set<int> sys_set2;
		ft::set<int> our_set2;
		sys_set.insert(100);
		sys_set.insert(10);
		our_set.insert(100);
		our_set.insert(10);
		sys_set2.insert(100);
		sys_set2.insert(10);
		our_set2.insert(100);
		our_set2.insert(10);

		if ((sys_set < sys_set2) == (our_set < our_set2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "SET OPERATORE > [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::set<int> sys_set;
		ft::set<int> our_set;
		std::set<int> sys_set2;
		ft::set<int> our_set2;
		sys_set.insert(100);
		sys_set.insert(10);
		our_set.insert(100);
		our_set.insert(10);
		sys_set2.insert(100);
		sys_set2.insert(12);
		our_set2.insert(100);
		our_set2.insert(12);

		if ((sys_set > sys_set2) == (our_set > our_set2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "SET OPERATORE > [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::set<int> sys_set;
		ft::set<int> our_set;
		std::set<int> sys_set2;
		ft::set<int> our_set2;
		sys_set.insert(100);
		sys_set.insert(10);
		our_set.insert(100);
		our_set.insert(10);
		sys_set2.insert(100);
		sys_set2.insert(-12);
		our_set2.insert(100);
		our_set2.insert(-12);

		if ((sys_set > sys_set2) == (our_set > our_set2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "SET OPERATORE > [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::set<int> sys_set;
		ft::set<int> our_set;
		std::set<int> sys_set2;
		ft::set<int> our_set2;
		sys_set.insert(100);
		sys_set.insert(10);
		our_set.insert(100);
		our_set.insert(10);
		sys_set2.insert(100);
		sys_set2.insert(10);
		our_set2.insert(100);
		our_set2.insert(10);

		if ((sys_set > sys_set2) == (our_set > our_set2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "SET OPERATORE <= [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::set<int> sys_set;
		ft::set<int> our_set;
		std::set<int> sys_set2;
		ft::set<int> our_set2;
		sys_set.insert(100);
		sys_set.insert(10);
		our_set.insert(100);
		our_set.insert(10);
		sys_set2.insert(100);
		sys_set2.insert(12);
		our_set2.insert(100);
		our_set2.insert(12);

		if ((sys_set <= sys_set2) == (our_set <= our_set2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "SET OPERATORE <= [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::set<int> sys_set;
		ft::set<int> our_set;
		std::set<int> sys_set2;
		ft::set<int> our_set2;
		sys_set.insert(100);
		sys_set.insert(10);
		our_set.insert(100);
		our_set.insert(10);
		sys_set2.insert(100);
		sys_set2.insert(-12);
		our_set2.insert(100);
		our_set2.insert(-12);

		if ((sys_set <= sys_set2) == (our_set <= our_set2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "SET OPERATORE <= [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::set<int> sys_set;
		ft::set<int> our_set;
		std::set<int> sys_set2;
		ft::set<int> our_set2;
		sys_set.insert(100);
		sys_set.insert(10);
		our_set.insert(100);
		our_set.insert(10);
		sys_set2.insert(100);
		sys_set2.insert(10);
		our_set2.insert(100);
		our_set2.insert(10);

		if ((sys_set <= sys_set2) == (our_set <= our_set2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "SET OPERATORE >= [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::set<int> sys_set;
		ft::set<int> our_set;
		std::set<int> sys_set2;
		ft::set<int> our_set2;
		sys_set.insert(100);
		sys_set.insert(10);
		our_set.insert(100);
		our_set.insert(10);
		sys_set2.insert(100);
		sys_set2.insert(12);
		our_set2.insert(100);
		our_set2.insert(12);

		if ((sys_set >= sys_set2) == (our_set >= our_set2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "SET OPERATORE >= [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::set<int> sys_set;
		ft::set<int> our_set;
		std::set<int> sys_set2;
		ft::set<int> our_set2;
		sys_set.insert(100);
		sys_set.insert(10);
		our_set.insert(100);
		our_set.insert(10);
		sys_set2.insert(100);
		sys_set2.insert(-12);
		our_set2.insert(100);
		our_set2.insert(-12);

		if ((sys_set >= sys_set2) == (our_set >= our_set2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "SET OPERATORE >= [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::set<int> sys_set;
		ft::set<int> our_set;
		std::set<int> sys_set2;
		ft::set<int> our_set2;
		sys_set.insert(100);
		sys_set.insert(10);
		our_set.insert(100);
		our_set.insert(10);
		sys_set2.insert(100);
		sys_set2.insert(10);
		our_set2.insert(100);
		our_set2.insert(10);

		if ((sys_set >= sys_set2) == (our_set >= our_set2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// -------------------INIT EMPTY---------------------
	std::cout << YELLOW << "INIT SET VUOTO [SYS vs OUR]" << OFF << std::endl;
	{
		std::set<int> sys_set;
		ft::set<int> our_set;

		if (equalSysFt(sys_set, our_set))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	// --------------------INT 1 PARAMETRO--------------------
	std::cout << YELLOW << "INIT SET COPY CONSTRUCTOR [SYS vs OUR]" << OFF << std::endl;
	{
		std::set<int> sys_set2;
		ft::set<int> our_set2;
		sys_set2.insert(100);
		sys_set2.insert(10);
		our_set2.insert(100);
		our_set2.insert(10);
		std::set<int> sys_set(sys_set2);
		ft::set<int> our_set(our_set2);

		if (equalSysFt(sys_set, our_set))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// --------------------INT 2 PARAMETRI--------------------
	std::cout << YELLOW << "INIT SET 2 PARAMETRI [SYS vs OUR]" << OFF << std::endl;
	{
		std::set<int> sys_set2;
		ft::set<int> our_set2;
		sys_set2.insert(100);
		sys_set2.insert(10);
		sys_set2.insert(1001);
		sys_set2.insert(101);
		our_set2.insert(100);
		our_set2.insert(10);
		our_set2.insert(1001);
		our_set2.insert(101);
		std::set<int> sys_set(sys_set2.begin(), sys_set2.end());
		ft::set<int> our_set(our_set2.begin(), our_set2.end());

		if (equalSysFt(sys_set, our_set))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// ----------------------INIT SET = ------------------
	std::cout << YELLOW << "INIT SET OPERATORE = [SYS vs OUR]" << OFF << std::endl;
	{
		std::set<int> sys_set;
		ft::set<int> our_set;
		std::set<int> sys_set2;
		ft::set<int> our_set2;
		sys_set2.insert(100);
		sys_set2.insert(10);
		our_set2.insert(100);
		our_set2.insert(10);
		sys_set2.insert(5);
		sys_set2.insert(99);
		our_set2.insert(5);
		our_set2.insert(99);
		sys_set2.insert(100);
		sys_set2.insert(10);
		our_set2.insert(100);
		our_set2.insert(10);
		sys_set2.insert(5);
		sys_set2.insert(99);
		our_set2.insert(5);
		our_set2.insert(99);

		sys_set = sys_set2;
		our_set = our_set2;

		if (equalSysFt(sys_set, our_set))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// ----------------------SET METHODS------------------
	std::cout << YELLOW << "SET METHODS [SYS vs OUR]" << OFF << std::endl;
	{
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		std::pair<std::set<int>::iterator, bool> res_sys = sys_set.insert(10);
		our_set.insert(100);
		ft::pair<ft::set<int>::iterator, bool> res_our = our_set.insert(10);

		if (res_sys.second == res_our.second && *res_sys.first == *res_our.first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN INSERT test 1" << OFF << std::endl;

		if (equalSysFt(sys_set, our_set))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (value) test 1" << OFF << std::endl;
	}
	{
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		our_set.insert(100);
		our_set.insert(10);
		sys_set.insert(100);
		std::pair<std::set<int>::iterator, bool> res_sys =  sys_set.insert(10);
		our_set.insert(100);
		ft::pair<ft::set<int>::iterator, bool> res_our =  our_set.insert(10);

		if (res_sys.second == res_our.second && *res_sys.first == *res_our.first)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN INSERT test 2" << OFF << std::endl;			

		if (equalSysFt(sys_set, our_set))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (value) test 2" << OFF << std::endl;
	}
	{
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		our_set.insert(100);
		our_set.insert(10);
		sys_set.insert(1001);
		sys_set.insert(101);
		our_set.insert(1001);
		our_set.insert(101);

		std::set<int> sys_set2;
		ft::set<int> our_set2;

		sys_set2.insert(sys_set.begin(), sys_set.end());
		our_set2.insert(our_set.begin(), our_set.end());

		if (equalSysFt(sys_set2, our_set2))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (iterator, iterator) test 1" << OFF << std::endl;
	}
	{
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(1001);
		sys_set.insert(101);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(1001);
		our_set.insert(101);

		std::set<int> sys_set2;
		ft::set<int> our_set2;

		sys_set2.insert(++sys_set.begin(), sys_set.end());
		our_set2.insert(++our_set.begin(), our_set.end());

		if (equalSysFt(sys_set2, our_set2))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (iterator, iterator) test 2" << OFF << std::endl;
	}
	{
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(1001);
		sys_set.insert(101);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(1001);
		our_set.insert(101);

		std::set<int>::iterator sys_it =  sys_set.insert(++sys_set.begin(), 85);
		ft::set<int>::iterator our_it =  our_set.insert(++our_set.begin(), 85);

		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN INSERT test 1" << OFF << std::endl;

		if (equalSysFt(sys_set, our_set))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (iterator, value) test 1" << OFF << std::endl;
	}
    {
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(1001);
		sys_set.insert(101);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(1001);
		our_set.insert(101);

		std::set<int>::iterator sys_it =  sys_set.insert(sys_set.end(), -100);
		ft::set<int>::iterator our_it =  our_set.insert(our_set.end(), -100);

		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN INSERT test 2" << OFF << std::endl;

		if (equalSysFt(sys_set, our_set))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (iterator, value) test 2" << OFF << std::endl;
	}
	{
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		our_set.insert(100);
		our_set.insert(10);

		std::set<int>::iterator sys_f = sys_set.find(10);
		ft::set<int>::iterator our_f = our_set.find(10);

		if (*sys_f == *our_f)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "FIND test 1" << OFF << std::endl;
	}
	{
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		our_set.insert(100);
		our_set.insert(10);

		std::set<int>::iterator sys_f = sys_set.find(56);
		ft::set<int>::iterator our_f = our_set.find(56);

		if (sys_f == sys_set.end() && our_f == our_set.end())
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "FIND test 2" << OFF << std::endl;
	}
	{
		// ERASE (LAST NODE)
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		our_set.insert(100);
		our_set.insert(10);

		sys_set.erase(sys_set.begin());
		our_set.erase(our_set.begin());

		if (equalSysFt(sys_set, our_set))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (iterator) test 1 (node 0 child)" << OFF << std::endl;
	}
	{
		// ERASE (LAST NODE)
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(15);
		sys_set.insert(110);
		sys_set.insert(99);
		sys_set.insert(98);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(15);
		our_set.insert(110);
		our_set.insert(99);
		our_set.insert(98);

		sys_set.erase(sys_set.find(99));
		our_set.erase(our_set.find(99));

		if (equalSysFt(sys_set, our_set))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (iterator) test 2 (node 1 child)" << OFF << std::endl;
	}
	{
		// ERASE (LAST NODE)
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(15);
		sys_set.insert(110);
		sys_set.insert(99);
		sys_set.insert(98);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(15);
		our_set.insert(110);
		our_set.insert(99);
		our_set.insert(98);

		sys_set.erase(sys_set.find(100));
		our_set.erase(our_set.find(100)); //CRASH

		if (equalSysFt(sys_set, our_set))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (iterator) test 3 (node 2 child)" << OFF << std::endl;
	}
	{
		// ERASE (LAST NODE)
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(15);
		sys_set.insert(110);
		sys_set.insert(99);
		sys_set.insert(98);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(15);
		our_set.insert(110);
		our_set.insert(99);
		our_set.insert(98);


		size_t res_sys = sys_set.erase(98);
		size_t res_our = our_set.erase(98);

		if (res_sys == res_our)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN ERASE (key) test 0" << OFF << std::endl;


		if (equalSysFt(sys_set, our_set))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (key) test 0 (node 0 child)" << OFF << std::endl;
	}
	{
		// ERASE
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(15);
		sys_set.insert(110);
		sys_set.insert(99);
		sys_set.insert(98);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(15);
		our_set.insert(110);
		our_set.insert(99);
		our_set.insert(98);

		size_t res_sys = sys_set.erase(99);
		size_t res_our = our_set.erase(99);

		if (res_sys == res_our)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN ERASE (key) test 2" << OFF << std::endl;


		if (equalSysFt(sys_set, our_set))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (key) test 2 (node 1 child)" << OFF << std::endl;
	}
	{
		// ERASE
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(15);
		sys_set.insert(110);
		sys_set.insert(99);
		sys_set.insert(98);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(15);
		our_set.insert(110);
		our_set.insert(99);
		our_set.insert(98);

		size_t res_sys = sys_set.erase(100);
		size_t res_our = our_set.erase(100); //CRASH

		if (res_sys == res_our)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN ERASE (key) test 3" << OFF << std::endl;


		if (equalSysFt(sys_set, our_set))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (key) test 3 (node 2 child)" << OFF << std::endl;
	}
	{
		// ERASE
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(15);
		sys_set.insert(110);
		sys_set.insert(99);
		sys_set.insert(98);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(15);
		our_set.insert(110);
		our_set.insert(99);
		our_set.insert(98);

		sys_set.erase(sys_set.begin(), sys_set.end());
		our_set.erase(our_set.begin(), our_set.end()); //LOOP

		if (equalSysFt(sys_set, our_set))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (iterator, itarator)" << OFF << std::endl;
	}
	{
		// CLEAR
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(15);
		sys_set.insert(110);
		sys_set.insert(99);
		sys_set.insert(98);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(15);
		our_set.insert(110);
		our_set.insert(99);
		our_set.insert(98);

		sys_set.clear();
		our_set.clear();

		if (equalSysFt(sys_set, our_set))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "CLEAR" << OFF << std::endl;
	}
	{
		// CLEAR
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(15);
		sys_set.insert(110);
		sys_set.insert(99);
		sys_set.insert(98);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(15);
		our_set.insert(110);
		our_set.insert(99);
		our_set.insert(98);
		std::set<int> sys_set2;
		ft::set<int> our_set2;
		sys_set2.insert(123);
		our_set2.insert(123);

		sys_set.swap(sys_set2);
		our_set.swap(our_set2);

		if (equalSysFt(sys_set, our_set) && equalSysFt(sys_set2, our_set2))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "SWAP" << OFF << std::endl;
	}
	{
		// COUNT
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(15);
		sys_set.insert(110);
		sys_set.insert(99);
		sys_set.insert(98);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(15);
		our_set.insert(110);
		our_set.insert(99);
		our_set.insert(98);

		if (sys_set.count(100) == our_set.count(100))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "COUNT test 1" << OFF << std::endl;
	}
	{
		// COUNT
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(15);
		sys_set.insert(110);
		sys_set.insert(99);
		sys_set.insert(98);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(15);
		our_set.insert(110);
		our_set.insert(99);
		our_set.insert(98);

		if (sys_set.count(789) == our_set.count(789))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "COUNT test 2" << OFF << std::endl;
	}
	{
		// LOWER_BOUND
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(15);
		sys_set.insert(110);
		sys_set.insert(99);
		sys_set.insert(98);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(15);
		our_set.insert(110);
		our_set.insert(99);
		our_set.insert(98);

		ft::set<int>::iterator our_it = our_set.lower_bound(-100);
		std::set<int>::iterator sys_it = sys_set.lower_bound(-100);

		if (*our_it == *sys_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "LOWER BOUND test 1" << OFF << std::endl;
	}
	{
		// LOWER_BOUND
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(15);
		sys_set.insert(110);
		sys_set.insert(99);
		sys_set.insert(98);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(15);
		our_set.insert(110);
		our_set.insert(99);
		our_set.insert(98);

		ft::set<int>::iterator our_it = our_set.lower_bound(1000);
		std::set<int>::iterator sys_it = sys_set.lower_bound(1000);

		if (our_it == our_set.end() && sys_it == sys_set.end())
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "LOWER BOUND test 2" << OFF << std::endl;
	}
	{
		// LOWER_BOUND
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(15);
		sys_set.insert(110);
		sys_set.insert(99);
		sys_set.insert(98);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(15);
		our_set.insert(110);
		our_set.insert(99);
		our_set.insert(98);

		ft::set<int>::iterator our_it = our_set.lower_bound(15);
		std::set<int>::iterator sys_it = sys_set.lower_bound(15);

		if (*our_it == *sys_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "LOWER BOUND test 3" << OFF << std::endl;
	}

	{
		// LOWER_BOUND
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(15);
		sys_set.insert(110);
		sys_set.insert(99);
		sys_set.insert(98);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(15);
		our_set.insert(110);
		our_set.insert(99);
		our_set.insert(98);

		ft::set<int>::iterator our_it = our_set.upper_bound(-100);
		std::set<int>::iterator sys_it = sys_set.upper_bound(-100);

		if (*our_it == *sys_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "UPPER BOUND test 1" << OFF << std::endl;
	}
	{
		// LOWER_BOUND
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(15);
		sys_set.insert(110);
		sys_set.insert(99);
		sys_set.insert(98);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(15);
		our_set.insert(110);
		our_set.insert(99);
		our_set.insert(98);

		ft::set<int>::iterator our_it = our_set.upper_bound(1000);
		std::set<int>::iterator sys_it = sys_set.upper_bound(1000);

		if (our_it == our_set.end() && sys_it == sys_set.end())
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "UPPER BOUND test 2" << OFF << std::endl;
	}
	{
		// LOWER_BOUND
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(15);
		sys_set.insert(110);
		sys_set.insert(99);
		sys_set.insert(98);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(15);
		our_set.insert(110);
		our_set.insert(99);
		our_set.insert(98);

		ft::set<int>::iterator our_it = our_set.upper_bound(15);
		std::set<int>::iterator sys_it = sys_set.upper_bound(15);

		if (*our_it == *sys_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "UPPER BOUND test 3" << OFF << std::endl;
	}
	{
		// EQUAL RANGE
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(15);
		sys_set.insert(110);
		sys_set.insert(99);
		sys_set.insert(98);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(15);
		our_set.insert(110);
		our_set.insert(99);
		our_set.insert(98);

		ft::pair<ft::set<int>::iterator, ft::set<int>::iterator> our_ret = our_set.equal_range(-1000);
		std::pair<std::set<int>::iterator, std::set<int>::iterator> sys_ret = sys_set.equal_range(-1000);

		if (*our_ret.first == *sys_ret.first && *our_ret.second == *sys_ret.second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "EQUAL RANGE test 1" << OFF << std::endl;
	}
	{
		// EQUAL RANGE
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(15);
		sys_set.insert(110);
		sys_set.insert(99);
		sys_set.insert(98);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(15);
		our_set.insert(110);
		our_set.insert(99);
		our_set.insert(98);

		ft::pair<ft::set<int>::iterator, ft::set<int>::iterator> our_ret = our_set.equal_range(11);
		std::pair<std::set<int>::iterator, std::set<int>::iterator> sys_ret = sys_set.equal_range(11);

		if (*our_ret.first == *sys_ret.first && *our_ret.second == *sys_ret.second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "EQUAL RANGE test 2" << OFF << std::endl;
	}
	{
		// EQUAL RANGE
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(15);
		sys_set.insert(110);
		sys_set.insert(99);
		sys_set.insert(98);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(15);
		our_set.insert(110);
		our_set.insert(99);
		our_set.insert(98);

		ft::pair<ft::set<int>::iterator, ft::set<int>::iterator> our_ret = our_set.equal_range(9999);
		std::pair<std::set<int>::iterator, std::set<int>::iterator> sys_ret = sys_set.equal_range(9999);

		if (our_ret.first == our_set.end() && sys_ret.first == sys_set.end() && our_ret.second == our_set.end() && sys_ret.second == sys_set.end())
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "EQUAL RANGE test 3" << OFF << std::endl;
	}
	{
		// EQUAL RANGE
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(15);
		sys_set.insert(110);
		sys_set.insert(99);
		sys_set.insert(98);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(15);
		our_set.insert(110);
		our_set.insert(99);
		our_set.insert(98);

		if (sys_set.key_comp()(123,456) == our_set.key_comp()(123, 456) )
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "KEY_COMP test 1" << OFF << std::endl;
	}
	{
		// EQUAL RANGE
		std::set<int> sys_set;
		ft::set<int> our_set;
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(15);
		sys_set.insert(110);
		sys_set.insert(99);
		sys_set.insert(98);
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(15);
		our_set.insert(110);
		our_set.insert(99);
		our_set.insert(98);

		if (sys_set.key_comp()(-10,-10) == our_set.key_comp()(-10, -10) )
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "KEY_COMP test 2" << OFF << std::endl;
	}
	{
		ft::set<int> our_set;
		std::set<int> sys_set;
		our_set.insert(100);
		our_set.insert(10);
		our_set.insert(1);
		our_set.insert(123);
		sys_set.insert(100);
		sys_set.insert(10);
		sys_set.insert(1);
		sys_set.insert(123);
		
		
		int highest_o = *our_set.rbegin();
		ft::set<int>::iterator it_o = our_set.begin();
		int highest_s = *sys_set.rbegin();
		std::set<int>::iterator it_s = sys_set.begin();


		if (our_set.value_comp()(*it_o++, highest_o) == sys_set.value_comp()(*it_s++, highest_s))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "VALUE_COMP test 1" << OFF << std::endl;
	}
	{
		ft::map<int, int> our_map;
		std::map<int, int> sys_map;
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(1, 1));
		our_map.insert(ft::pair<int, int>(123, 123));
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(1, 1));
		sys_map.insert(std::pair<int, int>(123, 123));
		
		
		ft::pair<int,int> highest_o = *our_map.rbegin();
		ft::map<int,int>::iterator it_o = ++our_map.begin();
		std::pair<int,int> highest_s = *sys_map.rbegin();
		std::map<int,int>::iterator it_s = ++sys_map.begin();


		if (our_map.value_comp()(*it_o++, highest_o) == sys_map.value_comp()(*it_s++, highest_s))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "VALUE_COMP test 2" << OFF << std::endl;
	}
}

static void testMULTISET(void)
{

	std::cout << BLUE << "**** TEST MULTISET ****" << OFF << std::endl;

// ------------------ITERATOR METHODS----------------------
	std::cout << YELLOW << "MULTISET ITERATOR OPERATOR [SYS vs OUR]" << OFF << std::endl;
	{
		// BEGIN
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(100);
		sys_multiset.insert(10);

		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(100);
		our_multiset.insert(10);


		std::multiset<int>::iterator sys_it = sys_multiset.begin();
		ft::multiset<int>::iterator our_it = our_multiset.begin();
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN" << OFF << std::endl;
	}
	{
		// ++BEGIN
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(1);
		sys_multiset.insert(123);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(1);
		our_multiset.insert(123);

		std::multiset<int>::iterator sys_it = sys_multiset.begin();
		ft::multiset<int>::iterator our_it = our_multiset.begin();

		++sys_it;
		++our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++BEGIN test 1" << OFF << std::endl;
		++sys_it;
		++our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++BEGIN test 2" << OFF << std::endl;
		++sys_it;
		++our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++BEGIN test 3" << OFF << std::endl;
	}
	{
		// BEGIN++
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(1);
		sys_multiset.insert(123);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(1);
		our_multiset.insert(123);

		std::multiset<int>::iterator sys_it = sys_multiset.begin();
		ft::multiset<int>::iterator our_it = our_multiset.begin();

		sys_it++;
		our_it++;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN++ test 1" << OFF << std::endl;
		sys_it++;
		our_it++;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN++ test 2" << OFF << std::endl;
		sys_it++;
		our_it++;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN++ test 3" << OFF << std::endl;
	}
	{
		// --END
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(1);
		sys_multiset.insert(123);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(1);
		our_multiset.insert(123);

		std::multiset<int>::iterator sys_it = sys_multiset.end();
		ft::multiset<int>::iterator our_it = our_multiset.end();

		--sys_it;
		--our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--END test 1" << OFF << std::endl;
		--sys_it;
		--our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--END test 2" << OFF << std::endl;
		--sys_it;
		--our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--END test 3" << OFF << std::endl;
	}
	{
		// END--
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(1);
		sys_multiset.insert(123);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(1);
		our_multiset.insert(123);

		std::multiset<int>::iterator sys_it = sys_multiset.end();
		ft::multiset<int>::iterator our_it = our_multiset.end();

		sys_it--;
		our_it--;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END-- test 1" << OFF << std::endl;
		sys_it--;
		our_it--;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END-- test 2" << OFF << std::endl;
		sys_it--;
		our_it--;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END-- test 3" << OFF << std::endl;
	}
	{
		// BEGIN
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(100);
		sys_multiset.insert(10);

		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(100);
		our_multiset.insert(10);


		std::multiset<int>::reverse_iterator sys_it = sys_multiset.rbegin();
		ft::multiset<int>::reverse_iterator our_it = our_multiset.rbegin();
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN" << OFF << std::endl;
	}
	{
		// ++BEGIN
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(1);
		sys_multiset.insert(123);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(1);
		our_multiset.insert(123);

		std::multiset<int>::reverse_iterator sys_it = sys_multiset.rbegin();
		ft::multiset<int>::reverse_iterator our_it = our_multiset.rbegin();

		++sys_it;
		++our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++RBEGIN test 1" << OFF << std::endl;
		++sys_it;
		++our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++RBEGIN test 2" << OFF << std::endl;
		++sys_it;
		++our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++RBEGIN test 3" << OFF << std::endl;
	}
	{
		// BEGIN++
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(1);
		sys_multiset.insert(123);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(1);
		our_multiset.insert(123);

		std::multiset<int>::reverse_iterator sys_it = sys_multiset.rbegin();
		ft::multiset<int>::reverse_iterator our_it = our_multiset.rbegin();

		sys_it++;
		our_it++;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN++ test 1" << OFF << std::endl;
		sys_it++;
		our_it++;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN++ test 2" << OFF << std::endl;
		sys_it++;
		our_it++;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN++ test 3" << OFF << std::endl;
	}
	{
		// --END
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(1);
		sys_multiset.insert(123);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(1);
		our_multiset.insert(123);

		std::multiset<int>::reverse_iterator sys_it = sys_multiset.rend();
		ft::multiset<int>::reverse_iterator our_it = our_multiset.rend();

		--sys_it;
		--our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--REND test 1" << OFF << std::endl;
		--sys_it;
		--our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--REND test 2" << OFF << std::endl;
		--sys_it;
		--our_it;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--REND test 3" << OFF << std::endl;
	}
	{
		// END--
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(1);
		sys_multiset.insert(123);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(1);
		our_multiset.insert(123);

		std::multiset<int>::reverse_iterator sys_it = sys_multiset.rend();
		ft::multiset<int>::reverse_iterator our_it = our_multiset.rend();

		sys_it--;
		our_it--;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND-- test 1" << OFF << std::endl;
		sys_it--;
		our_it--;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND-- test 2" << OFF << std::endl;
		sys_it--;
		our_it--;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND-- test 3" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTISET OPERATORE == [SYS vs OUR]" << OFF << std::endl;
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		std::multiset<int> sys_multiset2;
		ft::multiset<int> our_multiset2;
		sys_multiset.insert(100);
		sys_multiset2.insert(100);
		our_multiset.insert(100);
		our_multiset2.insert(100);
		sys_multiset.insert(10);
		sys_multiset2.insert(10);
		our_multiset.insert(10);
		our_multiset2.insert(10);


		if ((sys_multiset == sys_multiset2) == (our_multiset == our_multiset2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	std::cout << YELLOW << "MULTISET OPERATORE != [SYS vs OUR]" << OFF << std::endl;
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		std::multiset<int> sys_multiset2;
		ft::multiset<int> our_multiset2;
		sys_multiset.insert(100);
		sys_multiset2.insert(100);
		our_multiset.insert(100);
		our_multiset2.insert(100);
		sys_multiset.insert(10);
		sys_multiset2.insert(12);
		our_multiset.insert(10);
		our_multiset2.insert(12);

		if ((sys_multiset != sys_multiset2) == (our_multiset != our_multiset2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTISET OPERATORE < [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		std::multiset<int> sys_multiset2;
		ft::multiset<int> our_multiset2;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		our_multiset.insert(100);
		our_multiset.insert(10);
		sys_multiset2.insert(100);
		sys_multiset2.insert(12);
		our_multiset2.insert(100);
		our_multiset2.insert(12);

		if ((sys_multiset < sys_multiset2) == (our_multiset < our_multiset2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTISET OPERATORE < [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		std::multiset<int> sys_multiset2;
		ft::multiset<int> our_multiset2;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		our_multiset.insert(100);
		our_multiset.insert(10);
		sys_multiset2.insert(100);
		sys_multiset2.insert(-12);
		our_multiset2.insert(100);
		our_multiset2.insert(-12);

		if ((sys_multiset < sys_multiset2) == (our_multiset < our_multiset2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTISET OPERATORE < [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		std::multiset<int> sys_multiset2;
		ft::multiset<int> our_multiset2;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		our_multiset.insert(100);
		our_multiset.insert(10);
		sys_multiset2.insert(100);
		sys_multiset2.insert(10);
		our_multiset2.insert(100);
		our_multiset2.insert(10);

		if ((sys_multiset < sys_multiset2) == (our_multiset < our_multiset2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTISET OPERATORE > [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		std::multiset<int> sys_multiset2;
		ft::multiset<int> our_multiset2;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		our_multiset.insert(100);
		our_multiset.insert(10);
		sys_multiset2.insert(100);
		sys_multiset2.insert(12);
		our_multiset2.insert(100);
		our_multiset2.insert(12);

		if ((sys_multiset > sys_multiset2) == (our_multiset > our_multiset2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTISET OPERATORE > [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		std::multiset<int> sys_multiset2;
		ft::multiset<int> our_multiset2;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		our_multiset.insert(100);
		our_multiset.insert(10);
		sys_multiset2.insert(100);
		sys_multiset2.insert(-12);
		our_multiset2.insert(100);
		our_multiset2.insert(-12);

		if ((sys_multiset > sys_multiset2) == (our_multiset > our_multiset2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTISET OPERATORE > [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		std::multiset<int> sys_multiset2;
		ft::multiset<int> our_multiset2;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		our_multiset.insert(100);
		our_multiset.insert(10);
		sys_multiset2.insert(100);
		sys_multiset2.insert(10);
		our_multiset2.insert(100);
		our_multiset2.insert(10);

		if ((sys_multiset > sys_multiset2) == (our_multiset > our_multiset2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTISET OPERATORE <= [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		std::multiset<int> sys_multiset2;
		ft::multiset<int> our_multiset2;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		our_multiset.insert(100);
		our_multiset.insert(10);
		sys_multiset2.insert(100);
		sys_multiset2.insert(12);
		our_multiset2.insert(100);
		our_multiset2.insert(12);

		if ((sys_multiset <= sys_multiset2) == (our_multiset <= our_multiset2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTISET OPERATORE <= [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		std::multiset<int> sys_multiset2;
		ft::multiset<int> our_multiset2;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		our_multiset.insert(100);
		our_multiset.insert(10);
		sys_multiset2.insert(100);
		sys_multiset2.insert(-12);
		our_multiset2.insert(100);
		our_multiset2.insert(-12);

		if ((sys_multiset <= sys_multiset2) == (our_multiset <= our_multiset2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTISET OPERATORE <= [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		std::multiset<int> sys_multiset2;
		ft::multiset<int> our_multiset2;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		our_multiset.insert(100);
		our_multiset.insert(10);
		sys_multiset2.insert(100);
		sys_multiset2.insert(10);
		our_multiset2.insert(100);
		our_multiset2.insert(10);

		if ((sys_multiset <= sys_multiset2) == (our_multiset <= our_multiset2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTISET OPERATORE >= [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		std::multiset<int> sys_multiset2;
		ft::multiset<int> our_multiset2;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		our_multiset.insert(100);
		our_multiset.insert(10);
		sys_multiset2.insert(100);
		sys_multiset2.insert(12);
		our_multiset2.insert(100);
		our_multiset2.insert(12);

		if ((sys_multiset >= sys_multiset2) == (our_multiset >= our_multiset2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTISET OPERATORE >= [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		std::multiset<int> sys_multiset2;
		ft::multiset<int> our_multiset2;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		our_multiset.insert(100);
		our_multiset.insert(10);
		sys_multiset2.insert(100);
		sys_multiset2.insert(-12);
		our_multiset2.insert(100);
		our_multiset2.insert(-12);

		if ((sys_multiset >= sys_multiset2) == (our_multiset >= our_multiset2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "MULTISET OPERATORE >= [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		std::multiset<int> sys_multiset2;
		ft::multiset<int> our_multiset2;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		our_multiset.insert(100);
		our_multiset.insert(10);
		sys_multiset2.insert(100);
		sys_multiset2.insert(10);
		our_multiset2.insert(100);
		our_multiset2.insert(10);

		if ((sys_multiset >= sys_multiset2) == (our_multiset >= our_multiset2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// -------------------INIT EMPTY---------------------
	std::cout << YELLOW << "INIT MULTISET VUOTO [SYS vs OUR]" << OFF << std::endl;
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;

		if (equalSysFt(sys_multiset, our_multiset))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	// --------------------INT 1 PARAMETRO--------------------
	std::cout << YELLOW << "INIT MULTISET COPY CONSTRUCTOR [SYS vs OUR]" << OFF << std::endl;
	{
		std::multiset<int> sys_multiset2;
		ft::multiset<int> our_multiset2;
		sys_multiset2.insert(100);
		sys_multiset2.insert(10);
		our_multiset2.insert(100);
		our_multiset2.insert(10);
		std::multiset<int> sys_multiset(sys_multiset2);
		ft::multiset<int> our_multiset(our_multiset2);

		if (equalSysFt(sys_multiset, our_multiset))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// --------------------INT 2 PARAMETRI--------------------
	std::cout << YELLOW << "INIT MULTISET 2 PARAMETRI [SYS vs OUR]" << OFF << std::endl;
	{
		std::multiset<int> sys_multiset2;
		ft::multiset<int> our_multiset2;
		sys_multiset2.insert(100);
		sys_multiset2.insert(10);
		sys_multiset2.insert(1001);
		sys_multiset2.insert(101);
		our_multiset2.insert(100);
		our_multiset2.insert(10);
		our_multiset2.insert(1001);
		our_multiset2.insert(101);
		std::multiset<int> sys_multiset(sys_multiset2.begin(), sys_multiset2.end());
		ft::multiset<int> our_multiset(our_multiset2.begin(), our_multiset2.end());

		if (equalSysFt(sys_multiset, our_multiset))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// ----------------------INIT MULTISET = ------------------
	std::cout << YELLOW << "INIT MULTISET OPERATORE = [SYS vs OUR]" << OFF << std::endl;
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		std::multiset<int> sys_multiset2;
		ft::multiset<int> our_multiset2;
		sys_multiset2.insert(100);
		sys_multiset2.insert(10);
		our_multiset2.insert(100);
		our_multiset2.insert(10);
		sys_multiset2.insert(5);
		sys_multiset2.insert(99);
		our_multiset2.insert(5);
		our_multiset2.insert(99);

		sys_multiset = sys_multiset2;
		our_multiset = our_multiset2;

		if (equalSysFt(sys_multiset, our_multiset))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// ----------------------MULTISET METHODS------------------
	std::cout << YELLOW << "MULTISET METHODS [SYS vs OUR]" << OFF << std::endl;
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		std::multiset<int>::iterator res_sys = sys_multiset.insert(10);
		our_multiset.insert(100);
		ft::multiset<int>::iterator res_our = our_multiset.insert(10);

		if (*res_sys == *res_our)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN INSERT test 1" << OFF << std::endl;

		if (equalSysFt(sys_multiset, our_multiset))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (value) test 1" << OFF << std::endl;
	}
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		our_multiset.insert(100);
		our_multiset.insert(10);
		sys_multiset.insert(100);
		std::multiset<int>::iterator res_sys =  sys_multiset.insert(10);
		our_multiset.insert(100);
		ft::multiset<int>::iterator res_our =  our_multiset.insert(10);

		if (*res_sys == *res_our)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN INSERT test 2" << OFF << std::endl;			

		if (equalSysFt(sys_multiset, our_multiset))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (value) test 2" << OFF << std::endl;
	}
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(1001);
		sys_multiset.insert(101);
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(1001);
		sys_multiset.insert(101);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(1001);
		our_multiset.insert(101);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(1001);
		our_multiset.insert(101);

		std::multiset<int> sys_multiset2;
		ft::multiset<int> our_multiset2;


		sys_multiset2.insert(sys_multiset.begin(), sys_multiset.end());
		our_multiset2.insert(our_multiset.begin(), our_multiset.end());

		if (equalSysFt(sys_multiset2, our_multiset2))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (iterator, iterator) test 1" << OFF << std::endl;
	}
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(1001);
		sys_multiset.insert(101);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(1001);
		our_multiset.insert(101);

		std::multiset<int> sys_multiset2;
		ft::multiset<int> our_multiset2;

		sys_multiset2.insert(++sys_multiset.begin(), sys_multiset.end());
		our_multiset2.insert(++our_multiset.begin(), our_multiset.end());

		if (equalSysFt(sys_multiset2, our_multiset2))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (iterator, iterator) test 2" << OFF << std::endl;
	}
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(1001);
		sys_multiset.insert(101);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(1001);
		our_multiset.insert(101);

		std::multiset<int>::iterator sys_it =  sys_multiset.insert(++sys_multiset.begin(), 85);
		ft::multiset<int>::iterator our_it =  our_multiset.insert(++our_multiset.begin(), 85);

		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN INSERT test 1" << OFF << std::endl;

		if (equalSysFt(sys_multiset, our_multiset))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (iterator, value) test 1" << OFF << std::endl;
	}
    {
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(1001);
		sys_multiset.insert(101);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(1001);
		our_multiset.insert(101);

		std::multiset<int>::iterator sys_it =  sys_multiset.insert(sys_multiset.end(), -100);
		ft::multiset<int>::iterator our_it =  our_multiset.insert(our_multiset.end(), -100);

		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN INSERT test 2" << OFF << std::endl;

		if (equalSysFt(sys_multiset, our_multiset))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (iterator, value) test 2" << OFF << std::endl;
	}
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		our_multiset.insert(100);
		our_multiset.insert(10);

		std::multiset<int>::iterator sys_f = sys_multiset.find(10);
		ft::multiset<int>::iterator our_f = our_multiset.find(10);

		if (*sys_f == *our_f)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "FIND test 1" << OFF << std::endl;
	}
	{
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		our_multiset.insert(100);
		our_multiset.insert(10);

		std::multiset<int>::iterator sys_f = sys_multiset.find(56);
		ft::multiset<int>::iterator our_f = our_multiset.find(56);

		if (sys_f == sys_multiset.end() && our_f == our_multiset.end())
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "FIND test 2" << OFF << std::endl;
	}
	{
		// ERASE (LAST NODE)
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		our_multiset.insert(100);
		our_multiset.insert(10);

		sys_multiset.erase(sys_multiset.begin());
		our_multiset.erase(our_multiset.begin());

		if (equalSysFt(sys_multiset, our_multiset))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (iterator) test 1 (node 0 child)" << OFF << std::endl;
	}
	{
		// ERASE (LAST NODE)
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(15);
		sys_multiset.insert(110);
		sys_multiset.insert(99);
		sys_multiset.insert(98);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(15);
		our_multiset.insert(110);
		our_multiset.insert(99);
		our_multiset.insert(98);

		sys_multiset.erase(sys_multiset.find(99));
		our_multiset.erase(our_multiset.find(99));

		if (equalSysFt(sys_multiset, our_multiset))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (iterator) test 2 (node 1 child)" << OFF << std::endl;
	}
	{
		// ERASE (LAST NODE)
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(15);
		sys_multiset.insert(110);
		sys_multiset.insert(99);
		sys_multiset.insert(98);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(15);
		our_multiset.insert(110);
		our_multiset.insert(99);
		our_multiset.insert(98);

		sys_multiset.erase(sys_multiset.find(100));
		our_multiset.erase(our_multiset.find(100)); //CRASH

		if (equalSysFt(sys_multiset, our_multiset))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (iterator) test 3 (node 2 child)" << OFF << std::endl;
	}
	{
		// ERASE (LAST NODE)
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(15);
		sys_multiset.insert(110);
		sys_multiset.insert(99);
		sys_multiset.insert(98);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(15);
		our_multiset.insert(110);
		our_multiset.insert(99);
		our_multiset.insert(98);


		size_t res_sys = sys_multiset.erase(98);
		size_t res_our = our_multiset.erase(98);

		if (res_sys == res_our)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN ERASE (key) test 0" << OFF << std::endl;


		if (equalSysFt(sys_multiset, our_multiset))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (key) test 0 (node 0 child)" << OFF << std::endl;
	}
	{
		// ERASE
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(15);
		sys_multiset.insert(110);
		sys_multiset.insert(99);
		sys_multiset.insert(98);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(15);
		our_multiset.insert(110);
		our_multiset.insert(99);
		our_multiset.insert(98);

		size_t res_sys = sys_multiset.erase(99);
		size_t res_our = our_multiset.erase(99);

		if (res_sys == res_our)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN ERASE (key) test 2" << OFF << std::endl;


		if (equalSysFt(sys_multiset, our_multiset))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (key) test 2 (node 1 child)" << OFF << std::endl;
	}
	{
		// ERASE
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(15);
		sys_multiset.insert(110);
		sys_multiset.insert(99);
		sys_multiset.insert(98);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(15);
		our_multiset.insert(110);
		our_multiset.insert(99);
		our_multiset.insert(98);

		size_t res_sys = sys_multiset.erase(100);
		size_t res_our = our_multiset.erase(100); //CRASH

		if (res_sys == res_our)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RETURN ERASE (key) test 3" << OFF << std::endl;


		if (equalSysFt(sys_multiset, our_multiset))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (key) test 3 (node 2 child)" << OFF << std::endl;
	}
	{
		// ERASE
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(15);
		sys_multiset.insert(110);
		sys_multiset.insert(99);
		sys_multiset.insert(98);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(15);
		our_multiset.insert(110);
		our_multiset.insert(99);
		our_multiset.insert(98);

		sys_multiset.erase(sys_multiset.begin(), sys_multiset.end());
		our_multiset.erase(our_multiset.begin(), our_multiset.end()); //LOOP

		if (equalSysFt(sys_multiset, our_multiset))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (iterator, itarator)" << OFF << std::endl;
	}
	{
		// CLEAR
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(15);
		sys_multiset.insert(110);
		sys_multiset.insert(99);
		sys_multiset.insert(98);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(15);
		our_multiset.insert(110);
		our_multiset.insert(99);
		our_multiset.insert(98);

		sys_multiset.clear();
		our_multiset.clear();

		if (equalSysFt(sys_multiset, our_multiset))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "CLEAR" << OFF << std::endl;
	}
	{
		// CLEAR
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(15);
		sys_multiset.insert(110);
		sys_multiset.insert(99);
		sys_multiset.insert(98);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(15);
		our_multiset.insert(110);
		our_multiset.insert(99);
		our_multiset.insert(98);
		std::multiset<int> sys_multiset2;
		ft::multiset<int> our_multiset2;
		sys_multiset2.insert(123);
		our_multiset2.insert(123);

		sys_multiset.swap(sys_multiset2);
		our_multiset.swap(our_multiset2);

		if (equalSysFt(sys_multiset, our_multiset) && equalSysFt(sys_multiset2, our_multiset2))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "SWAP" << OFF << std::endl;
	}
	{
		// COUNT
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(15);
		sys_multiset.insert(110);
		sys_multiset.insert(99);
		sys_multiset.insert(98);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(15);
		our_multiset.insert(110);
		our_multiset.insert(99);
		our_multiset.insert(98);

		if (sys_multiset.count(100) == our_multiset.count(100))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "COUNT test 1" << OFF << std::endl;
	}
	{
		// COUNT
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(15);
		sys_multiset.insert(110);
		sys_multiset.insert(99);
		sys_multiset.insert(98);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(15);
		our_multiset.insert(110);
		our_multiset.insert(99);
		our_multiset.insert(98);

		if (sys_multiset.count(789) == our_multiset.count(789))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "COUNT test 2" << OFF << std::endl;
	}
	{
		// LOWER_BOUND
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(15);
		sys_multiset.insert(110);
		sys_multiset.insert(99);
		sys_multiset.insert(98);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(15);
		our_multiset.insert(110);
		our_multiset.insert(99);
		our_multiset.insert(98);

		ft::multiset<int>::iterator our_it = our_multiset.lower_bound(-100);
		std::multiset<int>::iterator sys_it = sys_multiset.lower_bound(-100);

		if (*our_it == *sys_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "LOWER BOUND test 1" << OFF << std::endl;
	}
	{
		// LOWER_BOUND
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(15);
		sys_multiset.insert(110);
		sys_multiset.insert(99);
		sys_multiset.insert(98);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(15);
		our_multiset.insert(110);
		our_multiset.insert(99);
		our_multiset.insert(98);

		ft::multiset<int>::iterator our_it = our_multiset.lower_bound(1000);
		std::multiset<int>::iterator sys_it = sys_multiset.lower_bound(1000);

		if (our_it == our_multiset.end() && sys_it == sys_multiset.end())
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "LOWER BOUND test 2" << OFF << std::endl;
	}
	{
		// LOWER_BOUND
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(15);
		sys_multiset.insert(110);
		sys_multiset.insert(99);
		sys_multiset.insert(98);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(15);
		our_multiset.insert(110);
		our_multiset.insert(99);
		our_multiset.insert(98);

		ft::multiset<int>::iterator our_it = our_multiset.lower_bound(15);
		std::multiset<int>::iterator sys_it = sys_multiset.lower_bound(15);

		if (*our_it == *sys_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "LOWER BOUND test 3" << OFF << std::endl;
	}

	{
		// LOWER_BOUND
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(15);
		sys_multiset.insert(110);
		sys_multiset.insert(99);
		sys_multiset.insert(98);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(15);
		our_multiset.insert(110);
		our_multiset.insert(99);
		our_multiset.insert(98);

		ft::multiset<int>::iterator our_it = our_multiset.upper_bound(-100);
		std::multiset<int>::iterator sys_it = sys_multiset.upper_bound(-100);

		if (*our_it == *sys_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "UPPER BOUND test 1" << OFF << std::endl;
	}
	{
		// LOWER_BOUND
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(15);
		sys_multiset.insert(110);
		sys_multiset.insert(99);
		sys_multiset.insert(98);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(15);
		our_multiset.insert(110);
		our_multiset.insert(99);
		our_multiset.insert(98);

		ft::multiset<int>::iterator our_it = our_multiset.upper_bound(1000);
		std::multiset<int>::iterator sys_it = sys_multiset.upper_bound(1000);

		if (our_it == our_multiset.end() && sys_it == sys_multiset.end())
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "UPPER BOUND test 2" << OFF << std::endl;
	}
	{
		// LOWER_BOUND
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(15);
		sys_multiset.insert(110);
		sys_multiset.insert(99);
		sys_multiset.insert(98);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(15);
		our_multiset.insert(110);
		our_multiset.insert(99);
		our_multiset.insert(98);

		ft::multiset<int>::iterator our_it = our_multiset.upper_bound(15);
		std::multiset<int>::iterator sys_it = sys_multiset.upper_bound(15);

		if (*our_it == *sys_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "UPPER BOUND test 3" << OFF << std::endl;
	}
	{
		// EQUAL RANGE
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(15);
		sys_multiset.insert(110);
		sys_multiset.insert(99);
		sys_multiset.insert(98);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(15);
		our_multiset.insert(110);
		our_multiset.insert(99);
		our_multiset.insert(98);

		ft::pair<ft::multiset<int>::iterator, ft::multiset<int>::iterator> our_ret = our_multiset.equal_range(-1000);
		std::pair<std::multiset<int>::iterator, std::multiset<int>::iterator> sys_ret = sys_multiset.equal_range(-1000);

		if (*our_ret.first == *sys_ret.first && *our_ret.second == *sys_ret.second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "EQUAL RANGE test 1" << OFF << std::endl;
	}
	{
		// EQUAL RANGE
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(15);
		sys_multiset.insert(110);
		sys_multiset.insert(99);
		sys_multiset.insert(98);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(15);
		our_multiset.insert(110);
		our_multiset.insert(99);
		our_multiset.insert(98);

		ft::pair<ft::multiset<int>::iterator, ft::multiset<int>::iterator> our_ret = our_multiset.equal_range(11);
		std::pair<std::multiset<int>::iterator, std::multiset<int>::iterator> sys_ret = sys_multiset.equal_range(11);

		if (*our_ret.first == *sys_ret.first && *our_ret.second == *sys_ret.second)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "EQUAL RANGE test 2" << OFF << std::endl;
	}
	{
		// EQUAL RANGE
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(15);
		sys_multiset.insert(110);
		sys_multiset.insert(99);
		sys_multiset.insert(98);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(15);
		our_multiset.insert(110);
		our_multiset.insert(99);
		our_multiset.insert(98);

		ft::pair<ft::multiset<int>::iterator, ft::multiset<int>::iterator> our_ret = our_multiset.equal_range(9999);
		std::pair<std::multiset<int>::iterator, std::multiset<int>::iterator> sys_ret = sys_multiset.equal_range(9999);

		if (our_ret.first == our_multiset.end() && sys_ret.first == sys_multiset.end() && our_ret.second == our_multiset.end() && sys_ret.second == sys_multiset.end())
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "EQUAL RANGE test 3" << OFF << std::endl;
	}
	{
		// EQUAL RANGE
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(15);
		sys_multiset.insert(110);
		sys_multiset.insert(99);
		sys_multiset.insert(98);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(15);
		our_multiset.insert(110);
		our_multiset.insert(99);
		our_multiset.insert(98);

		if (sys_multiset.key_comp()(123,456) == our_multiset.key_comp()(123, 456) )
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "KEY_COMP test 1" << OFF << std::endl;
	}
	{
		// EQUAL RANGE
		std::multiset<int> sys_multiset;
		ft::multiset<int> our_multiset;
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(15);
		sys_multiset.insert(110);
		sys_multiset.insert(99);
		sys_multiset.insert(98);
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(15);
		our_multiset.insert(110);
		our_multiset.insert(99);
		our_multiset.insert(98);

		if (sys_multiset.key_comp()(-10,-10) == our_multiset.key_comp()(-10, -10) )
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "KEY_COMP test 2" << OFF << std::endl;
	}
	{
		ft::multiset<int> our_multiset;
		std::multiset<int> sys_multiset;
		our_multiset.insert(100);
		our_multiset.insert(10);
		our_multiset.insert(1);
		our_multiset.insert(123);
		sys_multiset.insert(100);
		sys_multiset.insert(10);
		sys_multiset.insert(1);
		sys_multiset.insert(123);
		
		
		int highest_o = *our_multiset.rbegin();
		ft::multiset<int>::iterator it_o = our_multiset.begin();
		int highest_s = *sys_multiset.rbegin();
		std::multiset<int>::iterator it_s = sys_multiset.begin();


		if (our_multiset.value_comp()(*it_o++, highest_o) == sys_multiset.value_comp()(*it_s++, highest_s))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "VALUE_COMP test 1" << OFF << std::endl;
	}
	{
		ft::multiset<int> our_map;
		std::multiset<int> sys_map;
		our_map.insert(100);
		our_map.insert(10);
		our_map.insert(1);
		our_map.insert(123);
		sys_map.insert(100);
		sys_map.insert(10);
		sys_map.insert(1);
		sys_map.insert(123);
		
		
		int highest_o = *our_map.rbegin();
		ft::multiset<int>::iterator it_o = ++our_map.begin();
		int highest_s = *sys_map.rbegin();
		std::multiset<int>::iterator it_s = ++sys_map.begin();


		if (our_map.value_comp()(*it_o++, highest_o) == sys_map.value_comp()(*it_s++, highest_s))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "VALUE_COMP test 2" << OFF << std::endl;
	}
}

static void testDEQUE(void)
{

	std::cout << BLUE << "**** TEST DEQUE ****" << OFF << std::endl;
	// ------------------ITERATOR METHODS----------------------
	std::cout << YELLOW << "DEQUE ITERATOR OPERATOR [SYS vs OUR]" << OFF << std::endl;
	{
		// BEGIN
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		std::deque<int>::iterator sys_it = sys_deque.begin();
		ft::deque<int>::iterator our_it = our_deque.begin();
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN" << OFF << std::endl;
	}
	{
		// ++BEGIN
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		std::deque<int>::iterator sys_it = sys_deque.begin();
		ft::deque<int>::iterator our_it = our_deque.begin();
		if (*++sys_it == *++our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++BEGIN test 1" << OFF << std::endl;
		if (*++sys_it == *++our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++BEGIN test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++BEGIN test 3" << OFF << std::endl;
	}
	{
		// BEGIN++
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		std::deque<int>::iterator sys_it = sys_deque.begin();
		ft::deque<int>::iterator our_it = our_deque.begin();
		if (*sys_it++ == *our_it++)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN++ test 1" << OFF << std::endl;
		if (*sys_it++ == *our_it++)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN++ test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN++ test 3" << OFF << std::endl;
	}
	{
		// BEGIN--
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		std::deque<int>::iterator sys_it = sys_deque.begin();
		ft::deque<int>::iterator our_it = our_deque.begin();
		if (*sys_it-- == *our_it--)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "BEGIN--" << OFF << std::endl;
	}
	{
		// END++
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		std::deque<int>::iterator sys_it = sys_deque.begin();
		ft::deque<int>::iterator our_it = our_deque.begin();
		sys_it++;
		our_it++;
		if (*sys_it++ == *our_it++)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END++" << OFF << std::endl;
	}
	{
		// --END
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		std::deque<int>::iterator sys_it = sys_deque.end();
		ft::deque<int>::iterator our_it = our_deque.end();
		if (*--sys_it == *--our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--END test 1" << OFF << std::endl;
		if (*--sys_it == *--our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--END test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--END test 3" << OFF << std::endl;
	}
	{
		// END--
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		std::deque<int>::iterator sys_it = sys_deque.end();
		ft::deque<int>::iterator our_it = our_deque.end();
		sys_it--;
		our_it--;
		if (*sys_it-- == *our_it--)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END-- test 1" << OFF << std::endl;
		if (*sys_it-- == *our_it--)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END-- test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "END-- test 3" << OFF << std::endl;
	}
	{
		// BEGIN
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		std::deque<int>::reverse_iterator sys_it = sys_deque.rbegin();
		ft::deque<int>::reverse_iterator our_it = our_deque.rbegin();
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN" << OFF << std::endl;
	}
	{
		// ++BEGIN
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		std::deque<int>::reverse_iterator sys_it = sys_deque.rbegin();
		ft::deque<int>::reverse_iterator our_it = our_deque.rbegin();
		if (*++sys_it == *++our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++RBEGIN test 1" << OFF << std::endl;
		if (*++sys_it == *++our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++RBEGIN test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "++RBEGIN test 3" << OFF << std::endl;
	}
	{
		// BEGIN++
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		std::deque<int>::reverse_iterator sys_it = sys_deque.rbegin();
		ft::deque<int>::reverse_iterator our_it = our_deque.rbegin();
		if (*sys_it++ == *our_it++)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN++ test 1" << OFF << std::endl;
		if (*sys_it++ == *our_it++)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN++ test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN++ test 3" << OFF << std::endl;
	}
	{
		// BEGIN--
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		std::deque<int>::reverse_iterator sys_it = sys_deque.rbegin();
		ft::deque<int>::reverse_iterator our_it = our_deque.rbegin();
		if (*sys_it-- == *our_it--)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RBEGIN--" << OFF << std::endl;
	}
	{
		// END++
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		std::deque<int>::reverse_iterator sys_it = sys_deque.rbegin();
		ft::deque<int>::reverse_iterator our_it = our_deque.rbegin();
		sys_it++;
		our_it++;
		if (*sys_it++ == *our_it++)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND++" << OFF << std::endl;
	}
	{
		// --END
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		std::deque<int>::reverse_iterator sys_it = sys_deque.rend();
		ft::deque<int>::reverse_iterator our_it = our_deque.rend();
		if (*--sys_it == *--our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--REND test 1" << OFF << std::endl;
		if (*--sys_it == *--our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--REND test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "--REND test 3" << OFF << std::endl;
	}
	{
		// END--
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		sys_deque.push_back(1);
		sys_deque.push_back(2);
		sys_deque.push_back(32);
		our_deque.push_back(1);
		our_deque.push_back(2);
		our_deque.push_back(32);
		std::deque<int>::reverse_iterator sys_it = sys_deque.rend();
		ft::deque<int>::reverse_iterator our_it = our_deque.rend();
		sys_it--;
		our_it--;
		if (*sys_it-- == *our_it--)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND-- test 1" << OFF << std::endl;
		if (*sys_it-- == *our_it--)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND-- test 2" << OFF << std::endl;
		if (*sys_it == *our_it)
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "REND-- test 3" << OFF << std::endl;
	}
	// ------------------OPERATORI----------------------
	std::cout << YELLOW << "OPERATORE == [SYS vs OUR]" << OFF << std::endl;
	{
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		std::deque<int> sys_deque2;
		ft::deque<int> our_deque2;
		sys_deque2.push_back(100);
		our_deque2.push_back(100);
		sys_deque2.push_back(85);
		our_deque2.push_back(85);
		sys_deque2.push_back(12);
		our_deque2.push_back(12);
		sys_deque2.push_back(200);
		our_deque2.push_back(200);
		sys_deque.push_back(0);
		our_deque.push_back(0);
		sys_deque.push_back(56);
		our_deque.push_back(56);

		if ((sys_deque == sys_deque2) == (our_deque == our_deque2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE != [SYS vs OUR]" << OFF << std::endl;
	{
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		std::deque<int> sys_deque2;
		ft::deque<int> our_deque2;
		sys_deque2.push_back(100);
		our_deque2.push_back(100);
		sys_deque2.push_back(85);
		our_deque2.push_back(85);
		sys_deque2.push_back(12);
		our_deque2.push_back(12);
		sys_deque2.push_back(200);
		our_deque2.push_back(200);
		sys_deque.push_back(0);
		our_deque.push_back(0);
		sys_deque.push_back(56);
		our_deque.push_back(56);

		if ((sys_deque != sys_deque2) == (our_deque != our_deque2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE < [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		std::deque<int> sys_deque2;
		ft::deque<int> our_deque2;
		sys_deque2.push_back(100);
		our_deque2.push_back(100);
		sys_deque2.push_back(85);
		our_deque2.push_back(85);
		sys_deque2.push_back(12);
		our_deque2.push_back(12);
		sys_deque2.push_back(200);
		our_deque2.push_back(200);
		sys_deque.push_back(0);
		our_deque.push_back(0);
		sys_deque.push_back(50000);
		our_deque.push_back(50000);

		if ((sys_deque < sys_deque2) == (our_deque < our_deque2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE < [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		std::deque<int> sys_deque2;
		ft::deque<int> our_deque2;
		sys_deque2.push_back(100);
		our_deque2.push_back(100);
		sys_deque2.push_back(85);
		our_deque2.push_back(85);
		sys_deque2.push_back(12);
		our_deque2.push_back(12);
		sys_deque2.push_back(200);
		our_deque2.push_back(200);
		sys_deque.push_back(0);
		our_deque.push_back(0);
		sys_deque.push_back(-50);
		our_deque.push_back(-50);

		if ((sys_deque < sys_deque2) == (our_deque < our_deque2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE < [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		std::deque<int> sys_deque2;
		ft::deque<int> our_deque2;
		sys_deque2.push_back(100);
		our_deque2.push_back(100);
		sys_deque2.push_back(85);
		our_deque2.push_back(85);
		sys_deque.push_back(100);
		our_deque.push_back(100);
		sys_deque.push_back(85);
		our_deque.push_back(85);

		if ((sys_deque < sys_deque2) == (our_deque < our_deque2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE > [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		std::deque<int> sys_deque2;
		ft::deque<int> our_deque2;
		sys_deque2.push_back(100);
		our_deque2.push_back(100);
		sys_deque2.push_back(85);
		our_deque2.push_back(85);
		sys_deque2.push_back(12);
		our_deque2.push_back(12);
		sys_deque2.push_back(200);
		our_deque2.push_back(200);
		sys_deque.push_back(0);
		our_deque.push_back(0);
		sys_deque.push_back(50000);
		our_deque.push_back(50000);

		if ((sys_deque > sys_deque2) == (our_deque > our_deque2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE > [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		std::deque<int> sys_deque2;
		ft::deque<int> our_deque2;
		sys_deque2.push_back(100);
		our_deque2.push_back(100);
		sys_deque2.push_back(85);
		our_deque2.push_back(85);
		sys_deque2.push_back(12);
		our_deque2.push_back(12);
		sys_deque2.push_back(200);
		our_deque2.push_back(200);
		sys_deque.push_back(0);
		our_deque.push_back(0);
		sys_deque.push_back(-50);
		our_deque.push_back(-50);

		if ((sys_deque > sys_deque2) == (our_deque > our_deque2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE > [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		std::deque<int> sys_deque2;
		ft::deque<int> our_deque2;
		sys_deque2.push_back(100);
		our_deque2.push_back(100);
		sys_deque2.push_back(85);
		our_deque2.push_back(85);
		sys_deque.push_back(100);
		our_deque.push_back(100);
		sys_deque.push_back(85);
		our_deque.push_back(85);

		if ((sys_deque > sys_deque2) == (our_deque > our_deque2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE <= [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		std::deque<int> sys_deque2;
		ft::deque<int> our_deque2;
		sys_deque2.push_back(100);
		our_deque2.push_back(100);
		sys_deque2.push_back(85);
		our_deque2.push_back(85);
		sys_deque2.push_back(12);
		our_deque2.push_back(12);
		sys_deque2.push_back(200);
		our_deque2.push_back(200);
		sys_deque.push_back(0);
		our_deque.push_back(0);
		sys_deque.push_back(50000);
		our_deque.push_back(50000);

		if ((sys_deque <= sys_deque2) == (our_deque <= our_deque2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE <= [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		std::deque<int> sys_deque2;
		ft::deque<int> our_deque2;
		sys_deque2.push_back(100);
		our_deque2.push_back(100);
		sys_deque2.push_back(85);
		our_deque2.push_back(85);
		sys_deque2.push_back(12);
		our_deque2.push_back(12);
		sys_deque2.push_back(200);
		our_deque2.push_back(200);
		sys_deque.push_back(0);
		our_deque.push_back(0);
		sys_deque.push_back(-50);
		our_deque.push_back(-50);

		if ((sys_deque <= sys_deque2) == (our_deque <= our_deque2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE <= [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		std::deque<int> sys_deque2;
		ft::deque<int> our_deque2;
		sys_deque2.push_back(100);
		our_deque2.push_back(100);
		sys_deque2.push_back(85);
		our_deque2.push_back(85);
		sys_deque.push_back(100);
		our_deque.push_back(100);
		sys_deque.push_back(85);
		our_deque.push_back(85);

		if ((sys_deque <= sys_deque2) == (our_deque <= our_deque2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE >= [SYS vs OUR] test 1" << OFF << std::endl;
	{
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		std::deque<int> sys_deque2;
		ft::deque<int> our_deque2;
		sys_deque2.push_back(100);
		our_deque2.push_back(100);
		sys_deque2.push_back(85);
		our_deque2.push_back(85);
		sys_deque2.push_back(12);
		our_deque2.push_back(12);
		sys_deque2.push_back(200);
		our_deque2.push_back(200);
		sys_deque.push_back(0);
		our_deque.push_back(0);
		sys_deque.push_back(50000);
		our_deque.push_back(50000);

		if ((sys_deque >= sys_deque2) == (our_deque >= our_deque2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE >= [SYS vs OUR] test 2" << OFF << std::endl;
	{
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		std::deque<int> sys_deque2;
		ft::deque<int> our_deque2;
		sys_deque2.push_back(100);
		our_deque2.push_back(100);
		sys_deque2.push_back(85);
		our_deque2.push_back(85);
		sys_deque2.push_back(12);
		our_deque2.push_back(12);
		sys_deque2.push_back(200);
		our_deque2.push_back(200);
		sys_deque.push_back(0);
		our_deque.push_back(0);
		sys_deque.push_back(-50);
		our_deque.push_back(-50);

		if ((sys_deque >= sys_deque2) == (our_deque >= our_deque2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "OPERATORE >= [SYS vs OUR] test 3" << OFF << std::endl;
	{
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		std::deque<int> sys_deque2;
		ft::deque<int> our_deque2;
		sys_deque2.push_back(100);
		our_deque2.push_back(100);
		sys_deque2.push_back(85);
		our_deque2.push_back(85);
		sys_deque.push_back(100);
		our_deque.push_back(100);
		sys_deque.push_back(85);
		our_deque.push_back(85);

		if ((sys_deque >= sys_deque2) == (our_deque >= our_deque2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// -------------------INIT EMPTY---------------------
	std::cout << YELLOW << "INIT DEQUE VUOTO [SYS vs OUR]" << OFF << std::endl;
	{
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;

		if (equalSysFt(sys_deque, our_deque))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}

	// --------------------INT 1 PARAMETRO--------------------
	std::cout << YELLOW << "INIT DEQUE 1 PARAMETRO (20) [SYS vs OUR]" << OFF << std::endl;
	{
		std::deque<int> sys_deque(20);
		ft::deque<int> our_deque(20);

		if (equalSysFt(sys_deque, our_deque))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// --------------------INT 1 PARAMETRO--------------------
	std::cout << YELLOW << "INIT DEQUE 2 PARAMETRI (20, 5) [SYS vs OUR]" << OFF << std::endl;
	{
		std::deque<int> sys_deque(20, 5);
		ft::deque<int> our_deque(20, 5);

		if (equalSysFt(sys_deque, our_deque))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// ----------------------INIT 2 PARAMETRI------------------
	std::cout << YELLOW << "INIT DEQUE 2 PARAMETRI (iteratore, iteratore) [SYS vs OUR]" << OFF << std::endl;
	{
		std::deque<int> sys_deque(5, 100);
		ft::deque<int> our_deque(5, 100);
		std::deque<int> sys_deque2(++sys_deque.begin(), --sys_deque.end());
		ft::deque<int> our_deque2(++our_deque.begin(), --our_deque.end());

		if (equalSysFt(sys_deque2, our_deque2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// ----------------------INIT COPY CONSTRUCTOR------------------
	std::cout << YELLOW << "INIT DEQUE COPY CONSTRUCTOR [SYS vs OUR]" << OFF << std::endl;
	{
		std::deque<int> sys_deque(100);
		ft::deque<int> our_deque(100);
		std::deque<int> sys_deque2(sys_deque);
		ft::deque<int> our_deque2(our_deque);

		if (equalSysFt(sys_deque2, our_deque2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	std::cout << YELLOW << "INIT DEQUE OPERATORE = [SYS vs OUR]" << OFF << std::endl;
	{
		std::deque<int> sys_deque2;
		ft::deque<int> our_deque2;
		std::deque<int> sys_deque(100, 8);
		ft::deque<int> our_deque(100, 8);
		sys_deque = sys_deque2;
		our_deque = our_deque2;

		if (equalSysFt(sys_deque2, our_deque2))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// --------------------LIST METHODS--------------------
	std::cout << YELLOW << "DEQUE METHODS [SYS vs OUR]" << OFF << std::endl;
	{
		// PUSH BACK
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(99);
		sys_deque.push_back(78);
		sys_deque.push_back(33);
		our_deque.push_back(99);
		our_deque.push_back(78);
		our_deque.push_back(33);
		if (equalSysFt(sys_deque, our_deque))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "PUSH BACK" << OFF << std::endl;
	}
	{
		// POP BACK
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(12);
		our_deque.push_back(12);
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque.push_back(1);
		our_deque.push_back(1);
		sys_deque.pop_back();
		our_deque.pop_back();
		if (equalSysFt(sys_deque, our_deque))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "POP BACK" << OFF << std::endl;
	}
	{
		// RESIZE
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(12);
		our_deque.push_back(12);
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque.push_back(1);
		our_deque.push_back(1);
		sys_deque.resize(12);
		our_deque.resize(12);
		if (equalSysFt(sys_deque, our_deque))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RESIZE (INT)" << OFF << std::endl;
	}
	{
		// RESIZE
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(12);
		our_deque.push_back(12);
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque.push_back(1);
		our_deque.push_back(1);
		sys_deque.resize(12, 55);
		our_deque.resize(12, 55);
		if (equalSysFt(sys_deque, our_deque))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RESIZE (INT, INT)" << OFF << std::endl;
	}
	{
		// RESIZE
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(12);
		our_deque.push_back(12);
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque.push_back(1);
		our_deque.push_back(1);
		sys_deque.push_back(12);
		our_deque.push_back(12);
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque.push_back(1);
		our_deque.push_back(1);
		if (equalSysFt(sys_deque, our_deque))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "RESIZE (INT, INT)" << OFF << std::endl;
	}
	{
		// ASSIGN
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		std::deque<int> sys_deque2;
		ft::deque<int> our_deque2;
		sys_deque.push_back(12);
		our_deque.push_back(12);
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque.push_back(1);
		our_deque.push_back(1);
		sys_deque.push_back(12);
		our_deque.push_back(12);
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque2.push_back(111);
		our_deque2.push_back(111);
		sys_deque2.push_back(120);
		our_deque2.push_back(120);
		sys_deque2.push_back(850);
		our_deque2.push_back(850);
		sys_deque.assign(sys_deque2.begin(), sys_deque2.end());
		our_deque.assign(our_deque2.begin(), our_deque2.end());
		if (equalSysFt(sys_deque, our_deque))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ASSIGN (ITERATOR, ITERATOR)" << OFF << std::endl;
	}
	{
		// ASSIGN
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(12);
		our_deque.push_back(12);
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque.push_back(1);
		our_deque.push_back(1);
		sys_deque.push_back(12);
		our_deque.push_back(12);
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque.assign(5, 99);
		our_deque.assign(5, 99);
		if (equalSysFt(sys_deque, our_deque))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ASSIGN (INT, INT)" << OFF << std::endl;
	}
	{
		// INSERT
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.insert(sys_deque.begin(), 99);
		our_deque.insert(our_deque.begin(), 99);
		if (equalSysFt(sys_deque, our_deque))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (ITERATOR, INT) test 1" << OFF << std::endl;
	}
	{
		// INSERT
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque.push_back(1);
		our_deque.push_back(1);
		sys_deque.push_back(12);
		our_deque.push_back(12);
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque.insert(++sys_deque.begin(), 99);
		our_deque.insert(++our_deque.begin(), 99);
		if (equalSysFt(sys_deque, our_deque))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (ITERATOR, INT) test 2" << OFF << std::endl;
	}
	{
		// INSERT
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.insert(sys_deque.begin(), 6, 85);
		our_deque.insert(our_deque.begin(), 6, 85);
		if (equalSysFt(sys_deque, our_deque))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (ITERATOR, INT, INT) test 1" << OFF << std::endl;
	}
	{
		// INSERT
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque.push_back(1);
		our_deque.push_back(1);
		sys_deque.push_back(12);
		our_deque.push_back(12);
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque.insert(++sys_deque.begin(), 6, 85);
		our_deque.insert(++our_deque.begin(), 6, 85);
		if (equalSysFt(sys_deque, our_deque))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (ITERATOR, INT, INT) test 2" << OFF << std::endl;
	}
	{
		// INSERT
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		std::deque<int> sys_deque2;
		ft::deque<int> our_deque2;
		sys_deque2.push_back(111);
		our_deque2.push_back(111);
		sys_deque2.push_back(120);
		our_deque2.push_back(120);
		sys_deque2.push_back(850);
		our_deque2.push_back(850);
		sys_deque.insert(sys_deque.begin(), sys_deque2.begin(), sys_deque2.end());
		our_deque.insert(our_deque.begin(), our_deque2.begin(), our_deque2.end());
		if (equalSysFt(sys_deque, our_deque))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (ITERATOR, ITERATOR, ITERATOR) test 1" << OFF << std::endl;
	}
	{
		// INSERT
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		std::deque<int> sys_deque2;
		ft::deque<int> our_deque2;
		sys_deque.push_back(12);
		our_deque.push_back(12);
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque.push_back(1);
		our_deque.push_back(1);
		sys_deque.push_back(12);
		our_deque.push_back(12);
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque2.push_back(111);
		our_deque2.push_back(111);
		sys_deque2.push_back(120);
		our_deque2.push_back(120);
		sys_deque2.push_back(850);
		our_deque2.push_back(850);
		sys_deque.insert(++sys_deque.begin(), sys_deque2.begin(), sys_deque2.end());
		our_deque.insert(++our_deque.begin(), our_deque2.begin(), our_deque2.end());
		if (equalSysFt(sys_deque, our_deque))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "INSERT (ITERATOR, ITERATOR, ITERATOR) test 2" << OFF << std::endl;
	}
	{
		// ERASE
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque.push_back(1);
		our_deque.push_back(1);
		sys_deque.push_back(12);
		our_deque.push_back(12);
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque.erase(++sys_deque.begin());
		our_deque.erase(++our_deque.begin());
		if (equalSysFt(sys_deque, our_deque))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (ITERATOR)" << OFF << std::endl;
	}
	{
		// ERASE
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque.push_back(1);
		our_deque.push_back(1);
		sys_deque.push_back(12);
		our_deque.push_back(12);
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque.erase(++sys_deque.begin(), sys_deque.end());
		our_deque.erase(++our_deque.begin(), our_deque.end());
		if (equalSysFt(sys_deque, our_deque))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (ITERATOR, ITERATOR)" << OFF << std::endl;
	}
	{
		// SWAP
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		std::deque<int> sys_deque2;
		ft::deque<int> our_deque2;
		sys_deque.push_back(12);
		our_deque.push_back(12);
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque.push_back(1);
		our_deque.push_back(1);
		sys_deque.push_back(12);
		our_deque.push_back(12);
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque2.push_back(111);
		our_deque2.push_back(111);
		sys_deque2.push_back(120);
		our_deque2.push_back(120);
		sys_deque2.push_back(850);
		our_deque2.push_back(850);
		sys_deque.swap(sys_deque2);
		our_deque.swap(our_deque2);
		if (equalSysFt(sys_deque, our_deque))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "SWAP" << OFF << std::endl;
	}
	{
		// CLEAR
		std::deque<int> sys_deque;
		ft::deque<int> our_deque;
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque.push_back(1);
		our_deque.push_back(1);
		sys_deque.push_back(12);
		our_deque.push_back(12);
		sys_deque.push_back(85);
		our_deque.push_back(85);
		sys_deque.clear();
		our_deque.clear();
		if (equalSysFt(sys_deque, our_deque))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "CLEAR" << OFF << std::endl;
	}
}


// -----------------------------MAIN------------------
int main(int argc, char **argv)
{
	if (argc == 1)
	{
		testLIST();
		testVECTOR();
		testSTACK();
		testQUEUE();
		testMAP();
		testSET();
		testMULTISET();
		testMULTIMAP();
		testDEQUE();
		return 0;
	}
	std::string test = argv[1];

	if (test == "list")
		testLIST();
	if (test == "vector")
		testVECTOR();
	if (test == "stack")
		testSTACK();
	if (test == "queue")
		testQUEUE();
	if (test == "map")
		testMAP();
	if (test == "multimap")
		testMULTIMAP();
	if (test == "set")
		testSET();
	if (test == "multiset")
		testMULTISET();
	if (test == "deque")
		testDEQUE();
}

//COPIA STA ZORBA
