# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: akaya-oz <akaya-oz@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/12/16 11:45:37 by akaya-oz      #+#    #+#                  #
#    Updated: 2025/02/21 13:02:18 by akaya-oz      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

#UTILS
FLAGS 		=	-Wall -Werror -Wextra -std=c++11 -Wshadow -Wno-shadow
CC 			= 	c++
RM 			=	rm -rf
AR			=	ar -rc
SRC			=	main.cpp \


OBJ_DIR		:=	./objects
SRC_DIR 	:= 	./sources
HEADER_DIR	:= 	./includes
HEADERS		:= 	Fixed.hpp \

Color_Off	=	"\033[0m"
Green		=	"\033[0;32m"
Yellow		=	"\033[0;33m"
Blue		=	"\033[0;34m"

OBJ		:= 	$(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.o))
SRC		:=	$(addprefix $(SRC_DIR)/,$(SRC))
HEADERS :=	$(addprefix $(HEADER_DIR)/, $(HEADERS))

all:	${NAME}

${NAME}: ${OBJ}
	@echo ${Blue} Building ${NAME} ${Color_Off}
	@${CC} ${OBJ} ${FLAGS} -o ${NAME}
	@echo ${Green} Complete 😊 ${Color_Off}

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@echo ${Blue} Compiling: $< ${Color_Off}
	@${CC} ${FLAGS} -c $< -o $@

$(OBJ_DIR):
	@mkdir $@
clean:
	@echo ${Yellow} Deleting ${OBJ_DIR} ${Color_Off}
	@${RM} ${OBJ_DIR}
fclean: clean
	@echo ${Yellow} Deleting ${NAME} ${Color_off}
	@${RM} ${NAME}
	
re:	fclean all

.PHONY: all clean fclean re