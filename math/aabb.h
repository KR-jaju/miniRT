/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aabb.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaju <jaju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 01:43:22 by jaju              #+#    #+#             */
/*   Updated: 2023/03/12 08:40:14 by jaju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AABB_H
# define AABB_H

# include "vec3.h"

typedef struct s_aabb
{
	t_vec3	start;
	t_vec3	end;
}t_aabb;

t_aabb	aabb_union(t_aabb a, t_aabb b);
t_vec3	aabb_center(t_aabb a);

#endif
