NAME = Unnecessary_Violence

SRCDIR = src
INCDIR = include
OBJDIR = obj

SRC = $(SRCDIR)/main.cpp \
      $(SRCDIR)/Weapon.cpp \
      $(SRCDIR)/HumanA.cpp \
      $(SRCDIR)/HumanB.cpp

OBJ = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRC))
DEP = $(OBJ:.o=.d)

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INCDIR) -MMD -MP


all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEP)

.PHONY: all clean fclean re