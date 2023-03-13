/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raytraceable.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaju <jaju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 06:02:01 by jaju              #+#    #+#             */
/*   Updated: 2023/03/12 15:02:27 by jaju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAYTRACEABLE_H
# define RAYTRACEABLE_H

# include "module/module.h"
# include "aabb.h"

typedef struct s_raytraceable
{
	t_module	base;
	t_aabb		aabb;
}t_raytraceable;

#endif