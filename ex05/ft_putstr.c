/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 12:16:08 by mabele            #+#    #+#             */
/*   Updated: 2020/07/17 12:27:27 by mabele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void ft_putstr(char *str)
{
	int i;

	i = 0
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);        //write(1, &str[i], 1);
		i++;
	}
}
