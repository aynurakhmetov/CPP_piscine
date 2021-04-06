NAME = Replase
FILES_CPP = Replace.cpp main.cpp
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
	./$(NAME) 

test2:
	./$(NAME) tester.txt b c d

test3:
	./$(NAME) a b c

test4:
	./$(NAME) tester.txt 1 a

test5:
	./$(NAME) tester.txt Aynur Shamil

test6:
	./$(NAME) tester.txt i y

test7:
	./$(NAME) tester.txt 11 33

clean:
	@rm -rf $(FILES_O)
	@echo "O-files deleted"

fclean: clean
	@rm -rf $(NAME)
	@echo "All files delete"

re: fclean all

.PHONY: clean fclean all re run