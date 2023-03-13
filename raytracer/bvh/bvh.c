/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bvh.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaju <jaju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 06:07:07 by jaju              #+#    #+#             */
/*   Updated: 2023/03/12 15:03:06 by jaju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bvh.h"

t_bvh	*new_bvh(int size)
{
	t_bvh	*this;

	this = malloc(sizeof(t_bvh));
	bvh_init(this, size);
	return (this);
}

void	bvh_init(t_bvh *this, int size)
{
	this->size = size;
	this->leaf = malloc(size * sizeof(t_raytraceable **));
	this->volume = malloc((size - 1) * sizeof(t_aabb));
}

void	bvh_stratify(t_bvh *this)
{
	bvh_sort(this, 0, this->size, 0);
}

void	bvh_set(t_bvh *this, int index, t_raytraceable *obj)
{
	this->leaf[index] = obj;
}
