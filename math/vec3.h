/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaju <jaju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 08:29:33 by jaju              #+#    #+#             */
/*   Updated: 2023/03/12 11:05:05 by jaju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_H
# define VEC3_H

typedef struct s_vec3
{
	float	x;
	float	y;
	float	z;
}t_vec3;

t_vec3	vec3(float x, float y, float z);
float	length(t_vec3 a);
float	dot(t_vec3 a, t_vec3 b);
t_vec3	normalized(t_vec3 a);

#endif
