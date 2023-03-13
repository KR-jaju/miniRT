/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   module.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaju <jaju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 00:41:05 by jaju              #+#    #+#             */
/*   Updated: 2023/03/12 00:41:49 by jaju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "module.h"

t_module	*new_module(void)
{
	t_module	*this;

	this = (t_module *)malloc(sizeof(t_module));
	module_init(this);
	return (this);
}

void	module_init(t_module *this)
{
	
}