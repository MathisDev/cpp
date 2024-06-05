/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:06:39 by mamottet          #+#    #+#             */
/*   Updated: 2024/06/05 21:16:38 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

void print(char *str)
{
	std::cout << str << std::endl;
}

void printc(char c)
{
	std::cout << c;
}

int main(int ac, char **av)
{
	int i;
	int ii;

	i = 1;
	ii = 0;
	if (ac < 2)
	{
		print((char *)"* LOUD AND UNBEARABLE FEEDBACK NOISE *");
		return (0);	
	}
	while (av[i] != NULL)
	{
		ii = 0;
		while (av[i][ii] != '\0')
		{
			printc(toupper(av[i][ii]));
			ii ++;
		}
		i ++;
	}
	std::cout << std::endl;
	return (0);
}
