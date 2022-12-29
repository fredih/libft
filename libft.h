/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:26:06 by aantonio          #+#    #+#             */
/*   Updated: 2022/12/29 15:41:08 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_strlen(const char *str);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
unsigned long	ft_strlcat(char *dest, char *src, unsigned int destsize);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n);
void			*ft_memchr(const void *s, int c, unsigned int n);
void			ft_bzero(void *s, int n);
void			*ft_memset(void *s, int c, int n);
void			ft_memcpy(void *dest, void *src, unsigned int n);
void			ft_memmove(void *dest, void *src, unsigned int n);
int				toupper(int c);
#endif