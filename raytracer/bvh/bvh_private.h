/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bvh_private.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaju <jaju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 06:22:19 by jaju              #+#    #+#             */
/*   Updated: 2023/03/12 15:09:51 by jaju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BVH_PRIVATE_H
# define BVH_PRIVATE_H

# include "../module/raytraceable.h"
# include "aabb.h"
# include "vec3.h"
# include "helper.h"
# include <stdlib.h>

typedef struct s_bvh
{
	int				size;
	t_raytraceable	**leaf;
	t_aabb			*volume;
}t_bvh;

typedef union u_union3
{
	t_vec3	v;
	float	c[3];
}	t_union3;

void	bvh_partition(t_bvh *this, int left, int right, t_vec3 split_dir);
void	bvh_sort(t_bvh *this, int left, int right, int index);

#endif