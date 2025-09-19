# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: akaya-oz <akaya-oz@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/12/16 11:45:37 by akaya-oz      #+#    #+#                  #
#    Updated: 2025/04/15 12:00:19 by akaya-oz      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

FLAGS 		=	-Wall -Werror -Wextra -Wshadow -std=c++98
CC 			= 	c++
RM 			=	rm -rf
AR			=	ar -rc
SRC			=	main.cpp \
				ClapTrap.cpp \

OBJ_DIR		:=	./objects
SRC_DIR 	:= 	./sources
HEADER_DIR	:= 	./includes
HEADERS		:= 	ClapTrap.hpp \

Reset		=	"\033[0m"
Green		=	"\033[0;32m"
Yellow		=	"\033[0;33m"
Blue		=	"\033[0;34m"

OBJ		:= 	$(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.o))
SRC		:=	$(addprefix $(SRC_DIR)/,$(SRC))
HEADERS :=	$(addprefix $(HEADER_DIR)/, $(HEADERS))

all:	${NAME}

${NAME}: ${OBJ}
	@echo ${Blue} Building ${NAME} ${Reset}
	@${CC} ${OBJ} ${FLAGS} -o ${NAME}
	@echo ${Green} Complete ${Reset}
	@ echo ${Green} 🥳🥳🥳🥳🥳🥳🥳🥳🥳🥳🥳🥳🥳 ${Reset}

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@echo ${Blue} Compiling: $< ${Reset}
	@${CC} ${FLAGS} -c $< -o $@

$(OBJ_DIR):
	@mkdir $@
clean:
	@echo ${Yellow} Deleting ${OBJ_DIR} ${Reset}
	@${RM} ${OBJ_DIR}
fclean: clean
	@echo ${Yellow} Deleting ${NAME} ${Reset}
	@${RM} ${NAME}
	
re:	fclean all

.PHONY: all clean fclean re