/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaju <jaju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:06:52 by jaju              #+#    #+#             */
/*   Updated: 2023/03/12 15:08:27 by jaju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.h"

void	ft_swap(void *a, void *b)
{
	void	*tmp;

	tmp = *(void **)a;
	*(void **)a = *(void **)b;
	*(void **)b = tmp;
}