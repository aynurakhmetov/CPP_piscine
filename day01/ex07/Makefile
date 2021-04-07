NAME = Replase
FILES_CPP = Replace.cpp main.cpp
FILES_O = $(FILES_CPP:.cpp=.o)
CLANG = clang++ -Wall -Wextra -Werror
FILE = tester.txt
FILER = tester.txt.replace  

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
	./$(NAME) $(FILE) b c d

test3:
	./$(NAME) a b c

test4:
	./$(NAME) $(FILE) 1 a

test5:
	./$(NAME) $(FILE) Aynur Shamil

test6:
	./$(NAME) $(FILE) i y

test7:
	./$(NAME) $(FILE) 11 33

dif:
	diff $(FILE) $(FILER)

clean:
	@rm -rf $(FILES_O) $(FILER)
	@echo "O-files deleted"

fclean: clean
	@rm -rf $(NAME)
	@echo "All files delete"

re: fclean all

.PHONY: clean fclean all re run