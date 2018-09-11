/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_print_ldirect.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 10:17:00 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/11 11:34:10 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_print_ldirect(t_lsflags *f, t_lslink *l)
{
	t_lslink	*tmp;
	int			total;

	total = 0;
	if (f->a == 0 && f->d == 1 && f->g == 0 && f->l == 1)
	{
		tmp = l;
		while (tmp->next)
		{
			if (tmp->name && tmp->name[0] && ft_isdir(tmp->name))
				total += tmp->block;	
			tmp = tmp->next;
		}
		tmp = l;
			if (tmp->name && tmp->name[0] && ft_isdir(tmp->name))
				ft_printf("%s ", tmp->perm);
				ft_printf("%3i ", tmp->links);
				ft_printf("%s  ", tmp->owner);
				ft_printf("%s ", tmp->group);
				ft_printf("%6i", tmp->fsize);
				ft_printf("%s ", tmp->time);
				ft_printf("%s\n", tmp->name);
	}
}