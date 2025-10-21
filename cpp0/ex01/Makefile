NAME		= My_Awesome_Phone_book

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

INCLUDES_DIR = includes
INCLUDES	= $(INCLUDES_DIR)/Colors.hpp \
			$(INCLUDES_DIR)/Contact.hpp \
			$(INCLUDES_DIR)/PhoneBook.hpp

SRCS		= main.cpp \
			Contact.cpp \
			PhoneBook.cpp

OBJ_DIR		= obj
OBJS		= $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

GREEN		= \033[0;32m
RED			= \033[0;31m
RESET		= \033[0m


all: $(NAME)


$(NAME): $(OBJS) $(INCLUDES)
	@echo "$(GREEN)Compilation de $(NAME)...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)✓ $(NAME) créé avec succès !$(RESET)"


$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	@echo "Compilation de $<..."
	@$(CXX) $(CXXFLAGS) -c $< -o $@


$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@echo "$(RED)Suppression des fichiers objets...$(RESET)"
	@rm -rf $(OBJ_DIR)
	@echo "$(RED)✓ Nettoyage effectué$(RESET)"


fclean: clean
	@echo "$(RED)Suppression de $(NAME)...$(RESET)"
	@rm -rf $(NAME)
	@echo "$(RED)✓ Nettoyage complet effectué$(RESET)"


re: fclean all


.PHONY: all clean fclean re 