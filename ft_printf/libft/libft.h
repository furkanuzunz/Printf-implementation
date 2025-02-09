#ifndef LIBFT_H
#define LIBFT_H 

#include <stddef.h> // #size_t tanimi icin
#include <stdlib.h>

int ft_atoi(const char *str);
int ft_isalpha(int c);
int ft_isdigit(int n);
int ft_ascii(int n);
int ft_isprint(int n);
int	ft_tolower(int c);
int	ft_toupper(int c);
int ft_strlen(const char *str);
int ft_memcmp(const void *str1,const void *str2,size_t n);
int	ft_strncmp(const char *s1, const char *s2, size_t n);



char *ft_strdup(const char *str);
char *ft_itoa(int n);
char *ft_substr(const char *str,unsigned int start,size_t len);
char *ft_strchr(const char *s,int d);
char *ft_strjoin(const char *str1,const char *str2);
char *ft_strmapi(const char *s,char (*f)(unsigned int,char));
char *ft_strnstr(const char *bigOne,const char *littleOne,size_t len);
char	*ft_strrchr(const char *s, int c);
char *ft_strtrim(const char *s1,const char *set);



void ft_bzero(void *s,int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *str, int fd);
void *ft_calloc(size_t n,size_t sizek);
void *ft_memchr(const void *s,int a,size_t n);
void *ft_memcpy(void *dest,const void *src,size_t sizek);
void *ft_memmove(void *dest,const void *src,size_t n);
void *ft_memset(void *s,int c,size_t n);
void ft_striteri(char *s,void (*f)(unsigned int,char *));
void	ft_putstr_fd(char *str, int fd);


size_t ft_strlcat(char *dst,const char *src,size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);


#endif