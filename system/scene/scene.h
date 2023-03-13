/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaju <jaju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 23:39:55 by jaju              #+#    #+#             */
/*   Updated: 2023/03/12 01:52:00 by jaju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCENE_H
# define SCENE_H

# include "scene_private.h"
# include "../entity/entity.h"
# include "aabb.h"

typedef struct s_scene
{
	int			size;
	t_entity	**bvh;
	t_aabb		*volumes;
}t_scene;

t_scene	*new_scene(int size);
void	scene_init(t_scene *this, int size);
void	scene_stratify(t_scene *this);

#endif