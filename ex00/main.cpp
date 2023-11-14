/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:16:49 by yachaab           #+#    #+#             */
/*   Updated: 2023/11/14 13:16:50 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> vector;

    vector.push_back( 0 );
    vector.push_back( 1 );
    vector.push_back( 2 );
    vector.push_back( 3 );
    vector.push_back( 4 );

    try
    {
        const int idx = easyfind< std::vector<int> >( vector, 4 );
        std::cout << idx << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: no value was found" << '\n';
    }

    return 0;
}
