NAME		= Harl

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC_DIR		= src
OBJ_DIR		= obj
INCLUDE		= include
INCLUDE_DIR = $(INCLUDE)/

SRCS		= $(SRC_DIR)/main.cpp \
			  $(SRC_DIR)/harl.cpp

OBJS		= $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDE_DIR)harl.hpp
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re