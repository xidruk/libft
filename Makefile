# Variables
NAME = libft.a
C_COMPILER_COMMAND = cc        # Compiler command
C_FLAGS = -Wall -Wextra -Werror # Compiler flags for warnings
AR = ar

# Part I files
PART_I_CFILES = ft_isalpha.c \
                ft_isdigit.c \
                ft_isalnum.c \
                ft_isascii.c \
                ft_isprint.c \
                ft_strlen.c \
                ft_memset.c \
                ft_bzero.c \
                ft_memcpy.c \
                ft_memmove.c \
                ft_strlcpy.c \
                ft_strlcat.c \
                ft_toupper.c \
                ft_tolower.c \
                ft_strchr.c \
                ft_strrchr.c \
                ft_strncmp.c \
                ft_memchr.c \
                ft_memcmp.c \
                ft_strnstr.c \
                ft_atoi.c \
                ft_calloc.c \
                ft_strdup.c

# Part II files
PART_II_CFILES = ft_substr.c \
                 ft_strjoin.c \
                 ft_strtrim.c \
                 ft_split.c \
                 ft_itoa.c \
                 ft_strmapi.c \
                 ft_striteri.c \
                 ft_putchar_fd.c \
                 ft_putstr_fd.c \
                 ft_putendl_fd.c \
                 ft_putnbr_fd.c

# Part III files (bonus)
PART_III_CFILES = ft_lstnew.c \
                  ft_lstadd_front.c \
                  ft_lstsize.c \
                  ft_lstlast.c \
                  ft_lstadd_back.c \
                  ft_lstdelone.c \
                  ft_lstclear.c \
                  ft_lstiter.c \
                  ft_lstmap.c

# Object file lists
PART_I_OBJECTS_FILES = $(PART_I_CFILES:.c=.o)
PART_II_OBJECTS_FILES = $(PART_II_CFILES:.c=.o)
PART_III_OBJECTS_FILES = $(PART_III_CFILES:.c=.o)

# Create library from all object files
all: $(NAME)

$(NAME): $(PART_I_OBJECTS_FILES) $(PART_II_OBJECTS_FILES) $(PART_III_OBJECTS_FILES)
	$(AR) -rcs $@ $^

# Partial builds
spart: $(PART_I_OBJECTS_FILES) $(PART_II_OBJECTS_FILES)
	$(AR) -rcs $(NAME) $^

tpart: $(PART_II_OBJECTS_FILES) $(PART_III_OBJECTS_FILES)
	$(AR) -rcs $(NAME) $^

# Compile C files into object files
%.o: %.c
	$(C_COMPILER_COMMAND) $(C_FLAGS) -c $< -o $@

# Cleaning up
clean:
	rm -f $(PART_I_OBJECTS_FILES) $(PART_II_OBJECTS_FILES) $(PART_III_OBJECTS_FILES)

fclean: clean
	rm -f $(NAME)

# Rebuild
re: fclean all

# Phony targets
.PHONY: all spart tpart clean fclean re
