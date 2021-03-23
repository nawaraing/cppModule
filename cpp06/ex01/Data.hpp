#ifndef DATA_HPP
#define DATA_HPP

#include <string>
#include <ctime>

struct Data { std::string s1; int n; std::string s2; };

void * serialize(void);
Data * deserialize(void * raw);

#endif