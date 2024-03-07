#SRCDIR			= srcs/
SRC				= 	\
					strendptr	\
					isspace		\
					isalpha		\
					isdigit		\
					isalnum		\
					isascii		\
					isprint		\
					strlen		\
					memset		\
					bzero		\
					memcpy		\
					memmove		\
					strlcpy		\
					strlcat		\
					toupper		\
					tolower		\
					strchr		\
					strrchr		\
					strncmp		\
					memchr		\
					memcmp		\
					strnstr		\
					atoi		\
					calloc		\
					strdup		\
					substr		\
					strjoin		\
					strtrim		\
					split		\
					itoa		\
					strmapi		\
					striteri	\
					putchar_fd	\
					putstr_fd	\
					putendl_fd	\
					putnbr_fd	\

SRC_P			= $(addprefix ft_, $(SRC))
SRC_F			= $(addsuffix .c, $(SRC_P))
#SRCS			= $(addprefix $(SRCDIR), $(SRC_F))
#HEADER_DIR 	= includes/
HEADER			= libft.h
#HEADERS		= $(addprefix $(HEADER_DIR), $(HEADER))
#OBJDIR			= objs/
OBJS			= $(subst .c,.o,$(SRC_F))

SRC_BONUS		= 	\
					lstnew			\
					lstadd_front	\
					lstsize		\
					lstlast		\
					lstadd_back		\
					lstdelone		\
					lstclear		\
					lstiter			\
					lstmap			\

SRC_BONUS_P		= $(addprefix ft_, $(SRC_BONUS))
SRC_BONUS_F		= $(addsuffix _bonus.c, $(SRC_BONUS_P))
OBJS_BONUS		= $(subst .c,.o,$(SRC_BONUS_F))

NAME			= libft.a
IFLAGS			= -I$(HEADER)
CC				= cc
CFLAGS 			= -Wall -Wextra -Werror -c
AR				= ar -rcs
RM				= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(OBJS_BONUS) 
	$(AR) $(NAME) $(OBJS_BONUS)

#$(OBJDIR)%.o: $(SRCDIR)%.c
%.o: %.c
	$(CC) $(CFLAGS) $(IFLAGS) $< -o $@

clean:
	$(RM) $(OBJS)
	$(RM) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
