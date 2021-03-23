NAME = converter
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Converter.cpp
INCL = Converter.hpp

all : $(NAME)

$(NAME) :
	$(CC) $(FLAGS) $(SRCS) -o $(NAME) -include $(INCL)

clean :
	rm -f $(NAME)

re : clean all