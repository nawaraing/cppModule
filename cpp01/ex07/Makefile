NAME = replace
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRCS = sed.cpp main.cpp

all : $(NAME)

$(NAME) :
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
	rm -f $(NAME)

re : clean all