.PHONY: all re clean fclean

NAME		= iter
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -MD
INCLUDES	= -I ./include

SRCDIR		= src
OBJDIR		= obj

SRCS = src/main.cpp \

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