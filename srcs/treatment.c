/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treatment.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 19:55:14 by dhojt             #+#    #+#             */
/*   Updated: 2018/04/25 22:38:45 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int treatement(t_DATA *DATA)
{
    DATA->i++;

    parse_converter(DATA);
    parse_field_width(DATA);
    parse_precision(DATA);
    parse_arguments(DATA);
    parse_specifier(DATA);

    switch_display(DATA);

    return (DATA->len);
}