NAME		= zombie

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC_DIR		= src
INCLUDE_DIR	= include
OBJ_DIR		= obj

SRCS		= $(SRC_DIR)/main.cpp \
			  $(SRC_DIR)/Zombie.cpp \
			  $(SRC_DIR)/zombieHorde.cpp 

OBJS		= $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

HEADERS		= $(INCLUDE_DIR)/Zombie.hpp

INCLUDES	= -I$(INCLUDE_DIR)

DEPS		= $(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADERS)
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -MMD -MP -c $< -o $@

-include $(DEPS)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
