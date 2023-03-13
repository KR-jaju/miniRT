/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entity.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaju <jaju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 23:41:13 by jaju              #+#    #+#             */
/*   Updated: 2023/03/12 00:40:41 by jaju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITY_H
# define ENTITY_H

# include "list.h"
# include <stdlib.h>

typedef struct s_entity
{
	t_list	*modules;
}t_entity;

t_entity	*new_entity(void);
void		entity_init(t_entity *this);

#endif