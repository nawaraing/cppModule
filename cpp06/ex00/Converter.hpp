#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <string>
#include <climits>
#include <cctype>
#include <cstdlib>
#include <exception>
#include <iomanip>
#include <cmath>
#include <iostream>

class Converter
{
private:
	double			_val;
	bool			_nan;
public:
	Converter();
	Converter(const char *arg);
	Converter(Converter & obj);
	~Converter();
	Converter &operator=(Converter & obj);
	double getVal();
	bool getNan();
	void toChar();
	void toInt();
	void toFloat();
	void toDouble();
	class ConverterException : public std::exception
	{
	private:
		const char	*_msg;
	public:
		ConverterException(const char *msg) throw();
		virtual const char *what() const throw();
	};
};

#endif