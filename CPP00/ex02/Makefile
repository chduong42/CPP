# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chduong <chduong@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/10 17:16:04 by chduong           #+#    #+#              #
#    Updated: 2022/06/17 18:33:58 by chduong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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

#########################################
#				COMMANDS				#
#########################################
CC			=	c++
MKDIR		=	mkdir -p
AR			=	ar rcs
RM			= 	rm -rf

#########################################
#			FLAGS COMPILATION			#
#########################################
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
DEBUG		=	-g -fsanitize=address
INC			=	-I inc

#########################################
#			EXEC NAME & FOLDERS			#
#########################################
NAME		=	Account
SRC_DIR		=	src/
INC_DIR		=	inc/
OBJ_DIR		=	obj/

#########################################
#			SOURCES	FILES				#
#           & OBJECT FILES    	        #
#########################################
SRC		=	tests.cpp	Account.cpp
					
OBJ		=	$(SRC:%.cpp=%.o)
OBJ		:=	$(addprefix $(OBJ_DIR), $(OBJ))

#########################################
#			MAKE	RULES				#
#########################################
$(NAME): $(OBJ_DIR) $(OBJ)
	@echo "> $(CYAN)Generate objects$(END) : \t\t[$(GREEN)OK$(END)]"
	@$(CC) $(CFLAGS) -o $@ $(OBJ)
	@echo "> $(WHITE)$(BOLD)Compilation$(END) : \t\t[$(YELLOW)COMPLETE$(END)]"

${OBJ_DIR}%.o:	${SRC_DIR}%.cpp
	@${MKDIR} ${@D}
	@${CC} ${CFLAGS} ${INC} -c -o $@ $<

$(OBJ_DIR):
	@$(MKDIR) $(OBJ_DIR)

all: $(NAME)

clean:
	@$(RM) $(OBJ_DIR)
	@echo "> $(PURPLE)Clean objects$(END) : \t\t[$(GREEN)OK$(END)]"
	
fclean: clean
	@$(RM) $(NAME)
	@echo "> $(PURPLE)Delete Exec$(END) : \t\t[$(GREEN)OK$(END)]"
	
re: fclean all 

.PHONY: all clean fclean re