NAME = phonebook
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRCS = main.cpp \
		phonebook.cpp

all : $(NAME)

$(NAME) :
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
	rm -f $(NAME)

re : clean all