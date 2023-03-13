/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bvh.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaju <jaju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 05:52:23 by jaju              #+#    #+#             */
/*   Updated: 2023/03/12 06:25:08 by jaju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BVH_H
# define BVH_H

# include "bvh_private.h"

t_bvh	*new_bvh(int size);
void	bvh_init(t_bvh *this, int size);
void	bvh_stratify(t_bvh *this);

#endif