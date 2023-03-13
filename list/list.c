/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaju <jaju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:44:56 by jaju              #+#    #+#             */
/*   Updated: 2023/03/12 00:13:04 by jaju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*new_list(void)
{
	t_list	*this;

	this = (t_list *)malloc(sizeof(t_list));
	list_init(this);
	return (this);
}

void	list_init(t_list *this)
{
	this->data = (void **)malloc(8 * sizeof(void *));
	this->capacity = 8;
	this->size = 0;
}

void	list_add(t_list *this, void *data)
{
	if (this->size == this->capacity)
		list_realloc(this, this->capacity * 2 + 1);
	this->data[this->size++] = data;
}


