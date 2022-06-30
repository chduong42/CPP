# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kennyduong <kennyduong@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/10 17:16:04 by chduong           #+#    #+#              #
#    Updated: 2022/06/30 13:41:50 by kennyduong       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#########################################
#			FOLDERS AND NAME			#
#########################################
NAME		=	megaphone
SRC_DIR		=	src/
OBJ_DIR		=	obj/

#########################################
#			COMMANDS					#
#			FLAGS COMPILATION			#
#########################################
CC			=	c++
LINK		=	c++
MKDIR		=	mkdir -p
AR			=	ar rcs
RM			= 	rm -rf

CFLAGS		=	-Wall -Wextra -Werror -std=c++98
DEBUG		=	-g -fsanitize=address
LDFLAGS		=	

#########################################
#			SOURCES	FILES				#
#           OBJECT FILES    	        #
#########################################
SRC			=	megaphone.cpp
					
OBJ			=	${SRC:.cpp=.o}
OBJ			:=	${addprefix ${OBJ_DIR}, ${OBJ}}

#########################################
#			MAKE	RULES				#
#########################################
$(NAME): $(OBJ)
	@echo "> $(CYAN)Generate objects$(END) : \t\t[$(GREEN)OK$(END)]"
	$(LINK) $(LDFLAGS) $(OBJ) -o $@
	@echo "> $(WHITE)Compilation$(END) : \t\t[$(YELLOW)COMPLETE$(END)]"

${OBJ_DIR}%.o: ${SRC_DIR}%.cpp
	@${MKDIR} ${@D}
	${CC} ${CFLAGS} -c -o $@ $<

all: $(NAME)

clean:
	@$(RM) $(OBJ)
	@echo "> $(PURPLE)Clean objects$(END) : \t\t[$(GREEN)OK$(END)]"
	
fclean: clean
	@$(RM) $(NAME)
	@echo "> $(PURPLE)Delete Exec$(END) : \t\t[$(GREEN)OK$(END)]"
	
re: clean all 

fre: fclean all 

.PHONY: all clean fclean re

#########################################
#				COLORS					#
#########################################
GREY  		=   $'\033[0;30m
RED   		=   $'\033[0;31m
GREEN 		=   $'\033[0;92m
YELLOW		=   $'\033[0;33m
BLUE  		=   $'\033[0;34m
U_BLUE		=   $'\033[4;34m
PURPLE		=   $'\033[0;35m
CYAN  		=   $'\033[0;96m
WHITE 		=   $'\033[0;37m
END   		=   $'\033[0;m
BOLD  		=   $'\e[1m