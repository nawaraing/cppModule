#include "Data.hpp"

void * serialize(void)
{
	Data * ret = new Data();
	const char set[] = "abcdefghijklmnopqrstuvwxyzABCEDFGHIJKLMNOPQRSTUVWXYZ0123456789";

	srand(time(0));

	ret->s1.resize(8);
	ret->s2.resize(8);
	for (int i = 0; i < 8; i++)
	{
		ret->s1[i] = set[rand() % 62];
		ret->s2[i] = set[rand() % 62];
	}
	ret->n = static_cast<int>(static_cast<int>(rand()));
	return reinterpret_cast<void *>(ret);
}
Data * deserialize(void * raw)
{
	return reinterpret_cast<Data *>(raw);
}