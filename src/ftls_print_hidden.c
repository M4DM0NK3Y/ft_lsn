/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_print_hidden.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:51:49 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/11 09:34:43 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_print_hidden(t_lsflags *f, t_lslink *l)
{
	t_lslink *tmp;

	if (f->a == 1 && f->d == 0 && f->g == 0 && f->l == 0)
	{
		tmp = l;
		while (tmp->next)
		{
			if (tmp->name)
			{
				ft_printf("%s", tmp->name);
				if (tmp->next->name != NULL)
					ft_printf("\t");
			}
			tmp = tmp->next;
		}
	}
}
