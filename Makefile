FLAGS := -Wall -Wextra -Werror
CC	:= cc
SRC_FILES := ft_isascii.c ft_memcpy.c ft_split.c ft_strlcpy.c ft_strtrim.c \
	ft_atoi.c ft_isdigit.c ft_memmove.c ft_strchr.c ft_strlen.c ft_substr.c \
	ft_bzero.c ft_isprint.c ft_memset.c ft_strdup.c ft_strmapi.c ft_tolower.c \
	ft_calloc.c ft_itoa.c ft_putendl_fd.c ft_striteri.c ft_strncmp.c ft_toupper.c \
	ft_isalnum.c ft_memchr.c ft_putnbr_fd.c ft_strjoin.c ft_strnstr.c ft_isalpha.c \
	ft_memcmp.c ft_putstr_fd.c ft_strlcat.c ft_strrchr.c ft_putchar_fd.c
OBJ_FILES := $(SRC_FILES:.c=.o)
BONUS_FILES := ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
	ft_lstiter_bonus.c ft_lstmap_bonus.c
BONUS_OBJ_FILES := $(BONUS_FILES:.c=.o)
NAME := libft.a

# -------------RULES--------------

$(NAME): $(OBJ_FILES)
	ar rcs $@ $^

$(OBJ_FILES): %.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

$(BONUS_OBJ_FILES): %.o : %.c | $(NAME)
	$(CC) $(FLAGS) -c $< -o $@

.bonus: $(BONUS_OBJ_FILES)
	ar rcs $(NAME) $^
	touch .bonus

# ----------- PHONIES ------------

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:
	rm -f $(OBJ_FILES) $(BONUS_OBJ_FILES)
	rm -f .bonus

.PHONY: fclean
fclean: clean
	rm -f libft.a

.PHONY: re
re: fclean all

.PHONY: bonus
bonus: .bonus 
