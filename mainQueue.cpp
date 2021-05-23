#include "Queue.hpp"
#include <queue>
#include <deque>
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
	std::queue<int> s1;
	s1.push(5);
	std::queue<int> s2;
	s2.push(5);
	ft::queue<int, std::deque<int> > st1;
	st1.push(5);
	
	ft::queue<int, std::deque<int> > st2;
	st2.push(5);
	st2.push(5);

	if ((st1 < st2))
		std::cout << "YOOOO";
	else
		std::cout << "BROOO";
}