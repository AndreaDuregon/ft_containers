#include "Deque.hpp"
#include <deque>

int main()
{
    ft::deque<int>  ft;
    std::deque<int> s;

    ft.push_front(4);
    ft.push_back(7);
    ft.push_front(2);
    ft.push_back(5);
    ft.push_front(1);
    ft.push_back(6);
    ft.push_front(9);
    ft.push_back(3);
    ft.push_front(11);
    ft.push_back(89);

    s.push_front(4);
    s.push_back(7);
    s.push_front(2);
    s.push_back(5);
    s.push_front(1);
    s.push_back(6);
    s.push_front(9);
    s.push_back(3);
    s.push_front(11);
    s.push_back(89);

    ft::deque<int>::iterator    it_f(ft.begin());
    std::deque<int>::iterator  it_s(s.begin());

    while (it_f != ft.end())
    {
        std::cout << *it_f << " ";
        it_f++;
    }
    std::cout << std::endl;
    while (it_s != s.end())
    {
        std::cout << *it_s << " ";
        it_s++;
    }
    
}