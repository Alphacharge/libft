/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:14:49 by amorvai           #+#    #+#             */
/*   Updated: 2021/11/24 22:00:25 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ex08/ft_sort_int_tab.c"

#include <stdio.h>

int main()
{
	int array[23] = {4, 2, 43, 68, 6, 2, 8, 19, 0, 1, -23, 3, 10, 5, 17, 20, 8, 23, -2, 18, 99, -69, 420};
	ft_sort_int_tab(array, 23);
	int a;

	a = 0;
	while(a < 23)
	{
		printf("%i ", array[a]);
		a++;
	}
}
