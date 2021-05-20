# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 13:46:14 by gmarva            #+#    #+#              #
#    Updated: 2021/05/18 17:35:25 by gmarva           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = convert
FILES_CPP = Converter.cpp main.cpp
FILES_O = $(FILES_CPP:.cpp=.o)
CLANG = clang++ -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(FILES_O)
	@$(CLANG) $(FILES_O) -o $(NAME)
	@echo "All ready"

%.o: %.cpp
	@$(CLANG) -c $< -o $@
	@echo "$@ ready"

run: all

test1:
	./$(NAME) 0
	./$(NAME) nan
	./$(NAME) 42.0f

test2:
	./$(NAME) nanf
	./$(NAME) -inf	
	./$(NAME) +inf
	./$(NAME) -inff
	./$(NAME) +inff

test3:
	./$(NAME) 1
	./$(NAME) 10	
	./$(NAME) 10.0
	./$(NAME) 10.0f
	./$(NAME) 12.333333
	./$(NAME) 3000000001

test4:
	./$(NAME) -1
	./$(NAME) +10	
	./$(NAME) -10.0
	./$(NAME) +10.0f
	./$(NAME) -12.333333
	./$(NAME) +3000000001

clean:
	@rm -rf $(FILES_O)
	@echo "O-files deleted"

fclean: clean
	@rm -rf $(NAME)
	@echo "All files delete"

re: fclean all

.PHONY: clean fclean all re ru
