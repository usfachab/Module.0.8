/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:16:37 by yachaab           #+#    #+#             */
/*   Updated: 2023/11/14 13:16:38 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
