/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:43:08 by lmarquin          #+#    #+#             */
/*   Updated: 2024/07/31 11:43:11 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, World!\n");
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "Test string");
    ft_printf("Pointer: %p\n", main);
    ft_printf("Decimal: %d\n", 123);
    ft_printf("Integer: %i\n", 456);
    ft_printf("Unsigned: %u\n", 789);
    ft_printf("Hex lowercase: %x\n", 0xabcdef);
    ft_printf("Hex uppercase: %X\n", 0xABCDEF);
    ft_printf("Percent: %%\n");
    return 0;
}
