# Name of the Project
NAME = libft.a

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# All files
ALL_SRCS = $(wildcard *.c)

# Files to be ignored in general compilation
IGNORE = main.c ft_lstnew.c ft_lstadd_front.c                     \
         ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
         ft_lstclear.c ft_lstiter.c ft_lstmap.c

# Mandatory files
SRCS = $(filter-out $(IGNORE), $(ALL_SRCS))
OBJS = $(SRCS:.c=.o)

# Bonus
BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c                            \
             ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
             ft_lstclear.c ft_lstiter.c ft_lstmap.c
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Main rule
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Bonus rule
bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

# Cleaning
clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

