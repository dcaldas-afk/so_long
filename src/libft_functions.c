/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaldas- <dcaldas-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:05:32 by dcaldas-          #+#    #+#             */
/*   Updated: 2024/02/06 07:04:24 by dcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/so_long.h"

void    ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int    ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *str)
{
    char *dst;
    char *tmp;

    if (!str)
        return (NULL);
    dst = malloc(sizeof(char) * (ft_strlen(str) + 1));
    if (!dst)
        return (NULL);
    tmp = dst;
    while (*str)
        *dst++ = *str++;
    *dst = '\0';
    return (tmp);
}

