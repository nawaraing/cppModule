#include "Converter.hpp"

Converter::Converter() : _val(0), _nan(false)
{

}
Converter::Converter(const char *arg) : _val(0), _nan(false)
{
	bool		dot = false;
	int			len = std::strlen(arg);

	if (len == 3)			//					char
	{
		if (arg[0] == '\'' && arg[2] == '\'')
		{
			if (arg[1] < CHAR_MIN || arg[1] > CHAR_MAX)
				_nan = true;
			else
				_val = (double)arg[1];
		}
	}
	if (len != 3 || arg[0] != '\'' || arg[2] != '\'')				//					int, float, double
	{
		bool		neg = false;
		int			idx = 0;
		char		type = 'i';			// i f d
		
		if (arg[idx] == '-')
		{
			neg = true;
			idx++;
		}
		if (std::isdigit(arg[idx++]) == 0)
			_nan = true;
		while (idx < len)
		{
			if (arg[idx] == '.')
			{
				type = 'd';
				if (!dot) dot = true;
				else _nan = true;
			}
			else if (std::isdigit(arg[idx]) == 0)
			{
				if (idx == len - 1 && type == 'd' && arg[idx] == 'f')
					type = 'f';
				else
					_nan = true;
			}
			idx++;
		}
		if (!std::strcmp(arg, "+inff") || !std::strcmp(arg, "+inf"))
		{
			_val = INFINITY;
			_nan = false;
		}
		else if (!std::strcmp(arg, "-inff") || !std::strcmp(arg, "-inf"))
		{
			_val = -INFINITY;
			_nan = false;
		}
		else if (!_nan)
			_val = std::atof(arg);
	}
}
Converter::Converter(Converter & obj)
{
	*this = obj;
}
Converter::~Converter()
{

}
Converter &Converter::operator=(Converter & obj)
{
	if (this == &obj)
		return (*this);
	this->_val = obj._val;
	return (*this);
}
double Converter::getVal()
{
	return _val;
}
bool Converter::getNan()
{
	return _nan;
}
void Converter::toChar()
{
	std::cout << "char: ";
	try
	{
		if (_nan)
			throw Converter::ConverterException("impossible");
		if (_val < static_cast<double>(CHAR_MIN) || _val > static_cast<double>(CHAR_MAX))
			throw Converter::ConverterException("impossible");
		if (_val < static_cast<double>(33) || _val > static_cast<double>(126))
			throw Converter::ConverterException("Non displayable");
		std::cout << '\'' << (char)_val << '\'';
		}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;
}
void Converter::toFloat()
{
	std::cout << "float: ";
	try
	{
		if (_nan)
			throw Converter::ConverterException("nan");
		if (_val < static_cast<double>(-INFINITY) || _val > static_cast<double>(INFINITY))
			throw Converter::ConverterException("nan");
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(_val);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << "f" << std::endl;
}
void Converter::toDouble()
{
	std::cout << "double: ";
	try
	{
		if (_nan)
			throw Converter::ConverterException("nan");
		if (_val < static_cast<double>(-INFINITY) || _val > static_cast<double>(INFINITY))
			throw Converter::ConverterException("nan");
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(_val);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;
}
void Converter::toInt()
{
	std::cout << "int: ";
	try
	{
		if (_nan)
			throw Converter::ConverterException("impossible");
		if (_val < static_cast<double>(INT_MIN) || _val > static_cast<double>(INT_MAX))
			throw Converter::ConverterException("impossible");
		std::cout << static_cast<int>(_val);
		}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;
}
Converter::ConverterException::ConverterException(const char *msg) throw() : _msg(msg)
{

}
const char *Converter::ConverterException::what() const throw()
{
	return (_msg);
}