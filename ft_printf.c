/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <paphetpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 01:32:26 by paphetpr          #+#    #+#             */
/*   Updated: 2024/10/09 01:32:26 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

// int ft_printf(const char *, ...);

// static int type_check(){

// }

// int ft_printf(const char *, ...){

// }

int main(void)
{
    int i;

    i = printf("hi\n");
    printf("i: %i\n", i);
    return (0);
}
