/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entity.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaju <jaju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:05:31 by jaju              #+#    #+#             */
/*   Updated: 2023/03/12 00:40:37 by jaju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "entity.h"

t_entity	*new_entity(void)
{
	t_entity	*this;

	this = (t_entity *)malloc(sizeof(t_entity));
	entity_init(this);
	return (this);
}

void	entity_init(t_entity *this)
{
	this->modules = new_list();
}
