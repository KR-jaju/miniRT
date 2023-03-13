/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   module.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaju <jaju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:38:10 by jaju              #+#    #+#             */
/*   Updated: 2023/03/12 00:42:06 by jaju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_H
# define MODULE_H

# include <stdlib.h>

typedef struct s_module
{
	
}t_module;

t_module	*new_module(void);
void		module_init(t_module *this);

#endif