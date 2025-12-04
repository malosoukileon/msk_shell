##
## EPITECH PROJECT, 2025
## Setup
## File description:
## Makefile
##

SRC_DIR		=	./src/

SRC			=	$(wildcard $(SRC_DIR)*.cpp)

OBJ			=	$(SRC:.cpp=.o)

NAME		=	../libtools.a

CXX			=	g++

CXXFLAGS	+=	-Wall -Wextra -Wshadow -Wpedantic -I./includes -fPIC -g3

RED 		=	\033[0;31m
GREEN 		=	\033[0;32m
YELLOW 		=	\033[0;33m
BLUE 		=	\033[0;34m
NC 			=	\033[0m

%.o:	%.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

all:	$(NAME)
	@echo "$(GREEN)Build $(NAME) done.$(NC)"
$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)
	@echo "$(YELLOW)Clean $(NAME) done.$(NC)"

fclean:	clean
	@rm -f $(NAME)
	@echo "$(RED)Fclean $(NAME) done.$(NC)"

re:	fclean all

.PHONY:	all clean fclean re
