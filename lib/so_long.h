/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaldas- <dcaldas-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:21:48 by dcaldas-          #+#    #+#             */
/*   Updated: 2024/02/11 23:32:19 by dcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <string.h>
# include <limits.h>
# include <mlx.h>
# include <fcntl.h>
# include <GLES3/gl3.h>
# include <math.h>

// funções da libft
void    ft_putstr(char *str);
int    ft_strlen(char *str);
int search_substr(char *str, char *sub);
int	count_words(const char *str, char c);
char	*word_dup(const char *str, int start, int finish);
char	**ft_split(char const *s, char c);
char    *ft_strdup(char *str);

// parser e afins
char    parser(int argc, char **argv);
void    error_exit(void);

//inicialização
void	initialize(char **map, t_map stage);

#endif