NAME		=	convert

SRC 		= 	main.cpp Convert.cpp
HEADERS		= Convert.hpp

SRC_FOLDER	=	.
BIN_FOLDER	=	bin
OBJ_FOLDER	=	$(BIN_FOLDER)/obj
INCLUDE_FOLDER = includes/

OBJ 		= $(addprefix $(OBJ_FOLDER)/,$(SRC:.cpp=.o))
SRCLOCA		= $(shell find $(SRC_FOLDER) -type d)
OBJLOCA		= $(subst $(SRC_FOLDER), $(OBJ_FOLDER), $(SRCLOCA))

YELLOW 		= \033[0;33m
GREEN		= \033[0;32m
END_COLOR	= \033[0m

FLAGS		=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
		@g++ -o $(NAME) $(OBJ)
		@printf "$(GREEN)\\nCompilation finish \\n$(END_COLOR)"

$(OBJ_FOLDER)/%.o:	$(SRC_FOLDER)/%.cpp | $(OBJ_FOLDER)
	@g++ $(FLAGS) -c -I $(INCLUDE_FOLDER) $< -o $@ -g

$(OBJ_FOLDER):
	@mkdir -p $(OBJLOCA)

$(BIN_FOLDER):
	@mkdir -p $(BIN_FOLDER)

clean :
	@rm -rf $(BIN_FOLDER)
	@printf "$(GREEN)Clean [OK] $(END_COLOR)\n"

fclean : clean 
	@rm -rf $(NAME)
	@printf "$(GREEN)Fclean [OK] $(END_COLOR)\n"

re : fclean all


.PHONY : all clean fclean re