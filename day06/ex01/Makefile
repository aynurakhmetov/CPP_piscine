# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmarva <gmarva@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 13:46:14 by gmarva            #+#    #+#              #
#    Updated: 2021/05/18 19:49:11 by gmarva           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = serialize 
FILES_CPP = main.cpp
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

clean:
	@rm -rf $(FILES_O)
	@echo "O-files deleted"

fclean: clean
	@rm -rf $(NAME)
	@echo "All files delete"

re: fclean all

.PHONY: clean fclean all re ru
