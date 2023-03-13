/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaju <jaju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:45:40 by jaju              #+#    #+#             */
/*   Updated: 2023/03/12 10:48:53 by jaju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3.h"

t_vec3	vec3(float x, float y, float z)
{
	t_vec3	result;

	result.x = x;
	result.y = y;
	result.z = z;
	return (result);
}

float	length(t_vec3 a)
{
	return (a.x * a.x + a.y * a.y + a.z * a.z);
}

float	dot(t_vec3 a, t_vec3 b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}

t_vec3	normalized(t_vec3 a)
{
	float	magnitude;

	magnitude = length(a);
	return (vec3(a.x / magnitude, a.y / magnitude, a.z / magnitude));
}