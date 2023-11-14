/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:16:27 by yachaab           #+#    #+#             */
/*   Updated: 2023/11/15 00:09:32 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "MutantStack.tpp"

int main()
{

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    MutantStack<int> mmstack;

    mmstack = mstack;

    
    std::cout << "Top: " << mmstack.top() << std::endl;
    mmstack.pop();
    std::cout << "Top: " << mmstack.top() << std::endl;
    std::cout << "size: " << mmstack.size() << std::endl;
    // mstack.push(3);
    // mstack.push(5);
    // mstack.push(737);

    // mstack.push(0);
    // MutantStack<int>::iterator it = mstack.begin();
    // MutantStack<int>::iterator ite = mstack.end();
    // ++it;
    // --it;
    // while (it != ite)
    // {
    //     std::cout << *it << std::endl;
    //     ++it;
    // }
    // std::stack<int> s(mstack);

    // std::cout << "Top: " << s.top() << std::endl;
    // std::cout << "size: " << s.size() << std::endl;

    return 0;
}
