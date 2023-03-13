/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_private.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaju <jaju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:51:40 by jaju              #+#    #+#             */
/*   Updated: 2023/03/11 21:13:28 by jaju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_PRIVATE_H
# define LIST_PRIVATE_H

# include <stdlib.h>

typedef struct s_list
{
	void	**data;
	int		capacity;
	int		size;
}t_list;


void	list_realloc(t_list *list, int target);

#endif