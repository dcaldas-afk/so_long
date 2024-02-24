/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaldas- <dcaldas-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:04:07 by dcaldas-          #+#    #+#             */
/*   Updated: 2024/02/05 17:05:34 by dcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/so_long.h"

void    error_exit(void)
{
    ft_putstr("Error\n");
    exit(STDERR_FILENO);
}

char   **parse_map(int fd)
{
    char **map;
    char    *mapstr;

    map = ft_split(mapstr, '\n');
    free(map);
    return (map);
}

char    **parser(int argc, char **argv)
{
    int fd;

    if (argc != 2)
        error_exit();
    fd = open(argv[1], O_RDONLY);
    if (!search_substr(argv[1], ".ber"))
        error_exit();
    return(parse_map(fd));
}