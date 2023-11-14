/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:16:37 by yachaab           #+#    #+#             */
/*   Updated: 2023/11/15 00:38:15 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

template <typename T>
typename std::deque<T>::iterator MutantStack<T>::begin()
{
    return ( this->c.begin() );
}

template <typename T>
typename std::deque<T>::iterator MutantStack<T>::end()
{
    return ( this->c.end() );
}

template <typename T>
typename std::deque<T>::iterator MutantStack<T>::begin() const
{
    return ( this->c.begin() );
}

template <typename T>
typename std::deque<T>::iterator MutantStack<T>::end() const
{
    return ( this->c.end() );
}

#endif