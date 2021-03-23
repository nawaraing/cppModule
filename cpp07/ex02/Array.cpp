#include "Array.hpp"

template <typename T>
Array<T>::Array() : _size(0), _data(new T[])
{

}
template <typename T>
Array<T>::Array(unsigned int n) : _size(n), _data(new T[n])
{

}
template <typename T>
Array<T>::Array(Array const & obj)
{
	*this = obj;
}
template <typename T>
Array<T>::~Array()
{
	delete[] _data;
}
template <typename T>
Array<T> & Array<T>::operator=(Array const & obj)
{

}
template <typename T>
T & Array<T>::operator[](unsigned int idx)
{

}
template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}
template <typename T>
const char *Array<T>::AccessException::what() const throw() {return "Cannot accessible";}