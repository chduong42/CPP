# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chduong <chduong@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/10 17:16:04 by chduong           #+#    #+#              #
#    Updated: 2022/07/01 15:56:47 by chduong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#########################################
#			EXEC NAME & FOLDERS			#
#########################################
NAME		=	zombie
SRC_DIR		=	src/
INC_DIR		=	inc/
OBJ_DIR		=	obj/

#########################################
#				COMMANDS				#
#			FLAGS COMPILATION			#
#########################################
CC			=	c++ -c
LINK		=	c++
MKDIR		=	mkdir -p
AR			=	ar rcs
RM			= 	rm -rf

CFLAGS		=	-Wall -Wextra -Werror -std=c++98
LFLAGS		=	
DEBUG		=	-g -fsanitize=address
INC			=	-I inc

#########################################
#			SOURCES	FILES				#
#           & OBJECT FILES    	        #
#########################################
SRC		=	main.cpp		Zombie.cpp		zombieHorde.cpp
					
OBJ		=	$(SRC:%.cpp=%.o)
OBJ		:=	$(addprefix $(OBJ_DIR), $(OBJ))

#########################################
#			MAKE	RULES				#
#########################################
$(NAME): $(OBJ)
	@echo "> $(CYAN)Generate objects$(END) : \t\t[$(GREEN)OK$(END)]"
	$(LINK) $(LFLAGS) $(OBJ) -o $@
	@echo "> $(CYAN)Compilation$(END) : \t\t[$(YELLOW)COMPLETE$(END)]"

${OBJ_DIR}%.o:	${SRC_DIR}%.cpp
	@${MKDIR} ${@D}
	${CC} ${CFLAGS} ${INC} $< -o $@

all: $(NAME)

clean:
	@$(RM) $(OBJ_DIR)
	@echo "> $(PURPLE)Clean objects$(END) : \t\t[$(GREEN)OK$(END)]"
	
fclean: clean
	@$(RM) $(NAME)
	@echo "> $(PURPLE)Delete Exec$(END) : \t\t[$(GREEN)OK$(END)]"
	
re: fclean all 

.PHONY: all clean fclean re

#########################################
#			SYNTAX COLORS				#
#########################################
GREY       =   $'\033[0;30m
RED        =   $'\033[0;31m
GREEN      =   $'\033[0;92m
YELLOW     =   $'\033[0;33m
BLUE       =   $'\033[0;34m
U_BLUE     =   $'\033[4;34m
PURPLE     =   $'\033[0;35m
CYAN       =   $'\033[0;96m
WHITE      =   $'\033[0;37m
END        =   $'\033[0;m
BOLD       =   $'\e[1m