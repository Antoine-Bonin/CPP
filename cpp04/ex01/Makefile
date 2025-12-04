NAME		= I_don’t_want_to_set_the_world_on_fire
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
			  $(SRCDIR)/Brain.cpp \

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