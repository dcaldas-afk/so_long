/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaldas- <dcaldas-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 20:18:02 by dcaldas-          #+#    #+#             */
/*   Updated: 2024/02/06 07:04:21 by dcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/so_long.h"


int search_substr(char *str, char *sub)
{
    int i;
    int j;
    int temp_i;

    i = 0;
    j = 0;
    while (str[i])
    {
        if (str[i] == sub[0])
        {
            temp_i = i;
            while (sub[j] && str[temp_i] == sub[j])
            {
                temp_i++;
                j++;
            }
            if (!sub[j])
                return 1;
            j = 0;
        }
        i++;
    }
    return 0;
}