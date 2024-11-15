HDRDIR			=	includes/

SRCDIR			=	srcs/
FT_PRE			=	ft_

CHARDIR			=	$(SRCDIR)$(FT_PRE)char_utils/
CHARSRC			=		\
						isalnum		\
						isalpha		\
						isascii		\
						isdigit		\
						isprint		\
						isspace		\
						ishex		\

CHARSRCS		=	$(addprefix $(CHARDIR)$(FT_PRE), $(CHARSRC))


MEMDIR			=	$(SRCDIR)$(FT_PRE)mem_utils/
MEMSRC			=		\
						bzero		\
						calloc		\
						memalloc	\
						memchr		\
						memclear	\
						memcmp		\
						memcpy		\
						memdel		\
						memmove		\
						memset		\
						
MEMSRCS			=	$(addprefix $(MEMDIR)$(FT_PRE), $(MEMSRC))


STRDIR			=	$(SRCDIR)$(FT_PRE)string_utils/
STRSRC			=		\
						atoi				\
						atol				\
						atoi_base			\
						free_ft_split		\
						itoa				\
						itol				\
						split				\
						split_tok			\
						strappend			\
						strchr				\
						strclr				\
						strcmp				\
						strdel				\
						strdup				\
						strendptr			\
						striteri			\
						strjoin				\
						strlcat				\
						strlcpy				\
						strlen				\
						strmapi				\
						strmatch_pattern	\
						strnappend			\
						strncmp				\
						strnew				\
						strnstr				\
						strrchr				\
						strtrim				\
						strtok				\
						strtok_r			\
						strvappend			\
						substr				\
						tolower				\
						toupper				\
						
STRSRCS			=	$(addprefix $(STRDIR)$(FT_PRE), $(STRSRC))


PRNTDIR			=	$(SRCDIR)$(FT_PRE)print_utils/
PRNTSRC			=		\
						putchar_fd		\
						putstr_fd		\
						putendl_fd		\
						putnbr_fd		\
						putnbr_base_fd	\
						putdbl_fd		\
						
PRNTSRCS		=	$(addprefix $(PRNTDIR)$(FT_PRE), $(PRNTSRC))


LSTDIR			=	$(SRCDIR)$(FT_PRE)lst_utils/
LSTSRC			=		\
						lstnew			\
						lstadd_front	\
						lstsize			\
						lstlast			\
						lstadd_back		\
						lstdelone		\
						lstclear		\
						lstiter			\
						lstmap			\
						lstprint		\
						lstmin			\
						lstmax			\
						lstrotate		\
						lstrevrotate	\
						lstswap			\
						lstpush			\
						lstfind_index	\

						
LSTSRCS			=	$(addprefix $(LSTDIR)$(FT_PRE), $(LSTSRC))


ERRDIR			=	$(SRCDIR)$(FT_PRE)error_utils/
ERRSRC			=		\
						error		\

ERRSRCS			=	$(addprefix $(ERRDIR)$(FT_PRE), $(ERRSRC))


GNLDIR			=	$(SRCDIR)get_next_line/
GNLSRC			=		\
						get_next_line			\
						get_next_line_utils		\

GNLSRCS			=	$(addprefix $(GNLDIR), $(GNLSRC))


PRNTFDIR		=	$(SRCDIR)$(FT_PRE)printf/
PRNTFSRC		=		\
						atowp			\
						in				\
						nbrlen_base		\
						printchar		\
						printstring		\
						printnbr		\
						buffer_utils	\
						format_addr		\
						format			\
						printf			\

PRNTFSRCS		=	$(addprefix $(PRNTFDIR)$(FT_PRE), $(PRNTFSRC))

MATHDIR			=	$(SRCDIR)$(FT_PRE)math_utils/
MATHSRC			=		\
						abs							\
						copysign					\
						swap						\
						modf						\
						floor						\
						ceil						\
						round						\
						fractional					\
						rev_fractional				\
						fmod						\
						power						\
						sqrt						\
						sin							\
						cos							\
						tan							\
						asin						\
						acos						\
						atan						\
						atan2						\
						quatset						\
						quatset_id					\
						quatcpy						\
						quat_isequal				\
						quat_print					\
						quat_from_axis_angle		\
						quat_from_xrotation			\
						quat_from_yrotation			\
						quat_from_zrotation			\
						quatget_magnitude			\
						quat_normalise				\
						quat_to_axis_angle			\
						quat_from_euler_zyx			\
						quat_to_euler_zyx			\
						quat_conjugate				\
						quat_mult					\
						quat_rotate					\
						quat_slerp					\

MATHSRCS		=	$(addprefix $(MATHDIR)$(FT_PRE), $(MATHSRC))


SRC_AGG			=	\
					$(CHARSRCS)		\
					$(MEMSRCS)		\
					$(STRSRCS)		\
					$(PRNTSRCS)		\
					$(LSTSRCS)		\
					$(ERRSRCS)		\
					$(GNLSRCS)		\
					$(PRNTFSRCS)	\
					$(MATHSRCS)		\

SRCS			=	$(addsuffix .c, $(SRC_AGG))

OBJDIR			=	objs/
OBJS			=	$(subst $(SRCDIR), $(OBJDIR), $(subst .c,.o,$(SRCS)))
OBJDIRS			=	$(sort $(dir $(OBJS)))

NAME			=	libft.a
IFLAGS			=	-I$(HDRDIR)
CC				=	cc
CFLAGS 			=	-Wall -Wextra -Werror -c
AR				=	ar -rcs
RM				=	rm -rf

UP				=	\033[1A
FLUSH			=	\033[2K
RED				=	\033[0;91m
GREEN			=	\033[92m
RESET			=	\033[0m


all: $(NAME)

bonus: all

$(NAME): $(OBJDIRS) $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(GREEN)libft compiled successfully!$(RESET)"

$(OBJDIRS):
	@mkdir -p $@

$(OBJDIR)%.o: $(SRCDIR)%.c
	$(CC) $(CFLAGS) $(IFLAGS) $< -o $@
	@echo "$(UP)$(FLUSH)$(UP)"

clean:
	@$(RM) $(OBJDIR)
	@echo "$(RED)libft objects removed!$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@$(RM) tests/main
	@$(RM) tests/main.dSYM
	@echo "$(RED)libft program and test removed!$(RESET)"

re: fclean all

test: re
	gcc -o tests/main tests/main.c -L. libft.a -fsanitize=address -g
	./tests/main

.PHONY: all bonus clean fclean re test
