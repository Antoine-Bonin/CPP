NAME		= Polymorphism
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
INCLUDES	= -I./include

SRCDIR		= src
OBJDIR		= obj
INCDIR		= include

SRCS		= $(SRCDIR)/Animal.cpp \
			  $(SRCDIR)/Cat.cpp \
			  $(SRCDIR)/Dog.cpp \
			  $(SRCDIR)/main.cpp \
			  $(SRCDIR)/WrongAnimal.cpp \
			  $(SRCDIR)/WrongCat.cpp

OBJS		= $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re