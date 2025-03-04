# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: akaya-oz <akaya-oz@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/12/16 22:38:50 by akaya-oz      #+#    #+#                  #
#    Updated: 2025/03/04 12:12:06 by akaya-oz      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME 		= 	megaphone

FLAGS 		=	-Wall -Werror -Wextra -std=c++11
CC 			= 	c++
RM 			=	rm -rf
AR			=	ar -rc
SRC			=	megaphone.cpp
ifdef DEBUG
	FLAGS += -g
endif

# Headers
# HEADER_DIR = include
# HEADERS = PhoneBook.hpp \
# 		  Contact.hpp

#OBJB_FILES	=	${SRCB:.c=.o}
OBJ_DIR		:=	./obj
SRC_DIR 	:= 	./

# Reset
Reset	=	"\033[0m"			# Text Reset

# Regular Colors
Black		=	"\033[0;30m"		# Black
Red			=	"\033[0;31m"		# Red
Green		=	"\033[0;32m"		# Green
Yellow		=	"\033[0;33m"		# Yellow
Blue		=	"\033[0;34m"		# Blue
Purple		=	"\033[0;35m"		# Purple
Cyan		=	"\033[0;36m"		# Cyan
White		=	"\033[0;37m"		# White

# Avoid relinking in bonus
ifdef WITH_BONUS
	OBJ_RAW = $(OBJ_FILES) $(OBJB_FILES)
else
	OBJ_RAW = $(OBJ_FILES)
endif

# Add obj / src directory to obj / src path
OBJ		:= 	$(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.o))
SRC		:=	$(addprefix $(SRC_DIR)/,$(SRC))
HEADERS :=	$(addprefix $(HEADER_DIR)/, $(HEADERS))

all:	${NAME}

${NAME}: ${OBJ}
	@echo ${Blue} Building ${NAME} ${Reset}
	@${CC} ${OBJ} ${FLAGS} -o ${NAME}
	@echo ${Green} Complete 😊 ${Reset}

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
# @mkdir -p ${OBJ_DIR}
	@echo ${Blue} Compiling: $< ${Reset}
	@${CC} ${FLAGS} -c $< -o $@

$(OBJ_DIR):
	@mkdir $@

# Set 'WITH_BONUS' option to make with bonus
#bonus:
#	@$(MAKE) WITH_BONUS=true all

clean:
	@echo ${Yellow} Deleting ${OBJ_DIR} ${Reset}
	@${RM} ${OBJ_DIR}
	
fclean: clean
	@echo ${Yellow} Deleting ${NAME} ${Reset}
	@${RM} ${NAME}
	
re:	fclean all

.PHONY: all bonus clean fclean re