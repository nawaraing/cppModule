#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
private:
	unsigned int		_size;
	T					*_data;
public:
	Array();
	Array(unsigned int n);
	Array(Array const & obj);
	virtual ~Array();
	Array & operator=(Array const & obj);
	T & operator[](unsigned int idx);
	unsigned int size() const;
	class AccessException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

#endif