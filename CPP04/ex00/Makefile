# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayman_marzouk <ayman_marzouk@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/28 13:57:04 by ayman_marzo       #+#    #+#              #
#    Updated: 2024/04/28 14:06:51 by ayman_marzo      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Animal.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re