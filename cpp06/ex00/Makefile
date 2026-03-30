.PHONY: all re clean fclean

NAME		= convert
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -MD
INCLUDES	= -I ./includes

SRCDIR		= src
OBJDIR		= obj

SRCS = src/main.cpp \
		src/ScalarConverter.cpp \
		src/00-PseudoLitteral.cpp \
		src/01-Char.cpp \
		src/02-Int.cpp \
		src/03-Float.cpp \
		src/04-Double.cpp \
		src/InfNan.cpp \
		src/Integral.cpp 

OBJS		= $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCS))
DEPS = $(OBJS:.o=.d)
all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

-include $(DEPS)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all