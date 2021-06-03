
static void testMAP(void)
{

	std::cout << BLUE << "**** TEST MULTIMAP ****" << OFF << std::endl;

// ------------------ITERATOR METHODS----------------------
	std::cout << YELLOW << "MAP ITERATOR OPERATOR [SYS vs OUR]" << OFF << std::endl;
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
	std::cout << YELLOW << "MAP OPERATORE == [SYS vs OUR]" << OFF << std::endl;
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

	std::cout << YELLOW << "MAP OPERATORE != [SYS vs OUR]" << OFF << std::endl;
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
	std::cout << YELLOW << "MAP OPERATORE < [SYS vs OUR] test 1" << OFF << std::endl;
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
	std::cout << YELLOW << "MAP OPERATORE < [SYS vs OUR] test 2" << OFF << std::endl;
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
	std::cout << YELLOW << "MAP OPERATORE < [SYS vs OUR] test 3" << OFF << std::endl;
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
	std::cout << YELLOW << "MAP OPERATORE > [SYS vs OUR] test 1" << OFF << std::endl;
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
	std::cout << YELLOW << "MAP OPERATORE > [SYS vs OUR] test 2" << OFF << std::endl;
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
	std::cout << YELLOW << "MAP OPERATORE > [SYS vs OUR] test 3" << OFF << std::endl;
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
	std::cout << YELLOW << "MAP OPERATORE <= [SYS vs OUR] test 1" << OFF << std::endl;
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
	std::cout << YELLOW << "MAP OPERATORE <= [SYS vs OUR] test 2" << OFF << std::endl;
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
	std::cout << YELLOW << "MAP OPERATORE <= [SYS vs OUR] test 3" << OFF << std::endl;
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
	std::cout << YELLOW << "MAP OPERATORE >= [SYS vs OUR] test 1" << OFF << std::endl;
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
	std::cout << YELLOW << "MAP OPERATORE >= [SYS vs OUR] test 2" << OFF << std::endl;
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
	std::cout << YELLOW << "MAP OPERATORE >= [SYS vs OUR] test 3" << OFF << std::endl;
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
	std::cout << YELLOW << "INIT MAP VUOTO [SYS vs OUR]" << OFF << std::endl;
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN << "EQUAL 100%" << OFF << std::endl;
		else
			std::cout << RED << "NOT EQUAL" << OFF << std::endl;
	}
	// --------------------INT 1 PARAMETRO--------------------
	std::cout << YELLOW << "INIT MAP COPY CONSTRUCTOR [SYS vs OUR]" << OFF << std::endl;
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
	std::cout << YELLOW << "INIT MAP 2 PARAMETRI [SYS vs OUR]" << OFF << std::endl;
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
	// ----------------------INIT MAP = ------------------
	std::cout << YELLOW << "INIT MAP OPERATORE = [SYS vs OUR]" << OFF << std::endl;
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
	// ----------------------MAP METHODS------------------
	std::cout << YELLOW << "MAP METHODS [SYS vs OUR]" << OFF << std::endl;
	{
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		std::pair<std::multimap<int, int>::iterator, bool> res_sys = sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		ft::pair<ft::multimap<int, int>::iterator, bool> res_our = our_map.insert(ft::pair<int, int>(10, 10));

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
		std::multimap<int, int> sys_map;
		ft::multimap<int, int> our_map;
		sys_map.insert(std::pair<int, int>(100, 100));
		sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		our_map.insert(ft::pair<int, int>(10, 10));
		sys_map.insert(std::pair<int, int>(100, 100));
		std::pair<std::multimap<int, int>::iterator, bool> res_sys =  sys_map.insert(std::pair<int, int>(10, 10));
		our_map.insert(ft::pair<int, int>(100, 100));
		ft::pair<ft::multimap<int, int>::iterator, bool> res_our =  our_map.insert(ft::pair<int, int>(10, 10));

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
		//size_t res_our = our_map.erase(100); //CRASH
		size_t res_our = 0;

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
		//our_map.erase(our_map.begin(), our_map.end()); //LOOP

		if (equalSysFt(sys_map, our_map))
			std::cout << GREEN;
		else
			std::cout << RED;
		std::cout << "ERASE (iterator, itarator)" << OFF << std::endl;
	}
	{
		// OPERATOR []
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
