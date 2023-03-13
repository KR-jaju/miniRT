/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaju <jaju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 00:43:00 by jaju              #+#    #+#             */
/*   Updated: 2023/03/12 01:58:16 by jaju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scene.h"

t_scene	*new_scene(int size)
{
	t_scene	*this;

	this = (t_scene *)malloc(sizeof(t_scene));
	scene_init(this, size);
	return (this);
}

void	scene_init(t_scene *this, int size)
{
	this->bvh = (t_entity *)malloc(size * sizeof(t_entity));
	this->volumes = (t_aabb *)malloc((size - 1) * sizeof(t_aabb));
	this->size = size;
}

void	scene_stratify(t_scene *this)
{
	
}