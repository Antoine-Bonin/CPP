NAME		= ScavTrap

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

SRCDIR		= src
INCDIR		= include
OBJDIR		= obj

SRC			= $(SRCDIR)/main.cpp \
			  $(SRCDIR)/ClapTrap.cpp \
			  $(SRCDIR)/ScavTrap.cpp \
			  $(SRCDIR)/FragTrap.cpp

OBJ			= $(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

HDR			= $(INCDIR)/ClapTrap.hpp \
			  $(INCDIR)/ScavTrap.hpp \
			  $(INCDIR)/FragTrap.hpp

INC			= -I $(INCDIR)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS)  $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(HDR)
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) $(INC)  -c $< -o $@

clean:
	$(RM) $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
