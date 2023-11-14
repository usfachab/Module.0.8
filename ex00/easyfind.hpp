/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:16:46 by yachaab           #+#    #+#             */
/*   Updated: 2023/11/14 13:16:47 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template <typename T>
int easyfind( const T& container, int value )
{
    for ( size_t i = 0; i < container.size(); i++ )
    {
        if ( container[ i ]  == value )
            return i;
    }
    throw std::exception();
}

#endif