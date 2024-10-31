#pragma once

// libraries i use ! 
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t num, size_t size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int arg);
char *ft_itoa(int n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dest_str, const void *src_str, size_t n);
void    *ft_memmove(void *dest_mb, const void *src_mb, size_t numOfBytes);
void *ft_memset(void *str, int c, size_t n);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char **ft_split(const char *s, char c);
char *ft_strchr(const char *str, int search_str);
char *ft_strdup(const char *_ORG_STR);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
char *ft_strjoin(int _STR_SIZE, char **_STR, char *_SEP);
size_t ft_strlcat(char *dest, const char *src, size_t size);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
size_t ft_strlen(char *comstr);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *str, int c);
char *strtrim(const char *str, const char *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int ft_tolower(int ch);
int ft_toupper(int ch);

//// ::: bonus part ! 

// struct for bonus part ! 
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;


t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstdelone(t_list *lst, void (*del)(void*));
void ft_lstclear(t_list **lst, void (*del)(void*));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
