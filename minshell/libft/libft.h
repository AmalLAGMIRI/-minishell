/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:28:24 by alagmiri          #+#    #+#             */
/*   Updated: 2023/06/23 08:52:30 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
void	ft_putnbr_fd(int n, int fd);
size_t	ft_strlen(const char *str);
int		ft_isascii(int c);
void	ft_bzero(void *s, size_t n);
void	ft_putendl_fd(char *s, int fd);
char	*ft_strchr(const char *s, int c);
int		ft_tolower(int c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char s, int fd);
char	*ft_strtrim(char const *s1, char const *set);
int		ft_atoi(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isprint(int c);
size_t	ft_strlcat(char *dst, const char *src, size_t len );
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_putchar_fd(char c, int fd);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strdup(const char *s1);
void	*ft_calloc(size_t count, size_t size);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_itoa(int n);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	ft_free(char **str);

#endif
