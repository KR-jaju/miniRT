/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaju <jaju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:41:33 by jaju              #+#    #+#             */
/*   Updated: 2023/03/12 00:13:50 by jaju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include "list_private.h"
# include <stdlib.h>

t_list	*new_list(void);
void	list_init(t_list *this);
void	list_add(t_list *this, void *data);

#endif