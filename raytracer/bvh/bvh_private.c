/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bvh_private.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaju <jaju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 06:22:04 by jaju              #+#    #+#             */
/*   Updated: 2023/03/12 15:09:56 by jaju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bvh_private.h"

static t_vec3	longest(t_vec3 a)
{
	if (a.x >= a.y && a.x >= a.z)
		return (vec3(1, 0, 0));
	if (a.y >= a.x && a.y >= a.z)
		return (vec3(0, 1, 0));
	if (a.z >= a.x && a.z >= a.y)
		return (vec3(0, 0, 1));
	return (vec3(1, 0, 0));
}

static t_aabb	bvh_volume(t_raytraceable **array, int offset, int size)
{
	t_aabb	volume;
	int		i;

	volume = array[offset]->aabb;
	i = 0;
	while (i < size)
	{
		volume = aabb_union(volume, array[offset + i]->aabb);
		i++;
	}
	return (volume);
}

static int	bvh_smaller_than(t_bvh *this
	, int i, int j, t_vec3 split_dir)
{
	float	i_value;
	float	j_value;

	i_value = dot(aabb_center(this->leaf[i]->aabb), split_dir);
	j_value = dot(aabb_center(this->leaf[j]->aabb), split_dir);
	if (i_value < j_value)
		return (1);
	if (i_value == i_value && i < j)
		return (1);
	return (0);
}

void	bvh_partition(t_bvh *this, int offset, int size, t_vec3 split_dir)
{
	int		i;
	int		left_idx;
	int		smaller;
	int		k;

	i = 0;
	left_idx = 0;
	while (i < size)
	{
		smaller = 0;
		k = 0;
		while (k < size)
		{
			if (bvh_smaller_than(this, k + offset, i + offset, split_dir))
				smaller++;
			k++;
		}
		if (smaller < (size + 1) / 2)
		{
			ft_swap(&this->leaf[offset + i], &this->leaf[offset + left_idx]);
			left_idx++;
		}
		i++;
	}
}

void	bvh_sort(t_bvh *this, int offset, int size, int index)
{
	t_aabb	volume;
	int		left_size;
	int		right_size;

	if (size <= 1)
		return ;
	left_size = (size + 1) / 2;
	right_size = size - left_size;
	volume = bvh_volume(this->leaf, offset, size);
	this->volume[index] = volume;
	bvh_partition(this, offset, size, longest(aabb_center(volume)));
	bvh_sort(this, offset, left_size, index * 2 + 1);
	bvh_sort(this, offset + left_size, right_size, index * 2 + 2);
}




