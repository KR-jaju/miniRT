/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_private.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaju <jaju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:53:01 by jaju              #+#    #+#             */
/*   Updated: 2023/03/12 00:13:37 by jaju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list_private.h"

void	list_realloc(t_list *this, int target)
{
	void	**data;
	int		i;

	data = (void **)malloc(target * sizeof(void *));
	i = 0;
	while (i < this->capacity)
	{
		data[i] = this->data[i];
		i++;
	}
	free(this->data);
	this->data = data;
	this->capacity = target;
}
