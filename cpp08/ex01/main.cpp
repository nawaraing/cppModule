#include "span.hpp"
#include <iostream>
#include <vector>

int main()
{
	std::cout << "=== default ===" << std::endl;
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "=== vector ===" << std::endl;
	Span sp2 = Span(5);
	std::vector<int> v1(3, 10);
	std::vector<int> v2(2, 7);

	sp2.addVector(v1);
	sp2.addVector(v2);
	sp2.addVector(v2);

	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	return 0;
}