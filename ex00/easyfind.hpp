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
int easyfind( T& container, int value )
{
    
    typename T::const_iterator it = container.begin();

    for ( ; it != container.end(); it++ )
    {
        if ( *it == value )
            return ( *it );
    }
    throw std::exception();
}

#endif