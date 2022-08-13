/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:13:59 by chduong           #+#    #+#             */
/*   Updated: 2022/08/13 15:31:46 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>


int main()
{
    std::cout << "======================= std::stack ======================" << std::endl;
    {
        MutantStack<int> mstack;
        std::cout << "------- push 5 and 17--------"<< std::endl;
        mstack.push(5);
        mstack.push(17);
        std::cout << "Top of stack : " << mstack.top() << std::endl << std::endl;

        std::cout << "------- Remove top element : pop() --------"<< std::endl;
        mstack.pop();
        
        std::cout << "Size of stack : " << mstack.size() << std::endl << std::endl;
        
        std::cout << "------- push 3 5 737 0 --------"<< std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        
        std::cout << std::endl << "------- construct copy mstack & print by the end --------" << std::endl;
        std::stack<int> s(mstack);
        while (!s.empty())
        {
            std::cout << s.top() << std::endl;
            s.pop();
        }
    }

    std::cout << "\n\n======================= std::list ======================" << std::endl;
    {
        std::list<int> mlist;
        std::cout << "------- push 5 and 17--------"<< std::endl;
        mlist.push_back(5);
        mlist.push_back(17);
        std::cout << "Top of stack : " << mlist.back() << std::endl << std::endl;

        std::cout << "------- Remove top element : pop() --------"<< std::endl;
        mlist.pop_back();
        
        std::cout << "Size of stack : " << mlist.size() << std::endl << std::endl;
        
        std::cout << "------- push 3 5 737 0 --------"<< std::endl;
        mlist.push_back(3);
        mlist.push_back(5);
        mlist.push_back(737);
        mlist.push_back(0);
        
        std::list<int>::iterator it = mlist.begin();
        std::list<int>::iterator ite = mlist.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    
    return 0;
}