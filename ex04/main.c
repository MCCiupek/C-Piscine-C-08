/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 13:51:03 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/24 16:34:15 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);

int		main(int ac, char **av)
{
	t_stock_str	*strs;

	strs = ft_strs_to_tab(ac, av);
	ft_show_tab(strs);
	return (0);
}
