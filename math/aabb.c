/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aabb.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaju <jaju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 06:14:18 by jaju              #+#    #+#             */
/*   Updated: 2023/03/12 08:41:05 by jaju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabb.h"
#include "math.h"

t_aabb	aabb_union(t_aabb a, t_aabb b)
{
	t_aabb	ret;

	ret.start = vec3(min(a.start.x, b.start.x),
			min(a.start.y, b.start.y),
			min(a.start.z, b.start.z));
	ret.end = vec3(max(a.end.x, b.end.x),
			max(a.end.y, b.end.y),
			max(a.end.z, b.end.z));
	return (ret);
}

t_vec3	aabb_center(t_aabb a)
{
	t_vec3	ret;

	ret.x = (a.start.x + a.end.x) * 0.5f;
	ret.y = (a.start.y + a.end.y) * 0.5f;
	ret.z = (a.start.z + a.end.z) * 0.5f;
	return (ret);
}
