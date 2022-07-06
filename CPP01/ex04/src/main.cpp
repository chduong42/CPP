/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:14:15 by chduong           #+#    #+#             */
/*   Updated: 2022/07/06 14:42:43 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int check_arg(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Using : ./replace.exec <filename> <toReplace> <replaceWith>" << std::endl;
        return (1);
    }
    std::ifstream inputFile;
    inputFile.open(argv[1]);
    if (inputFile.is_open() == false)
    {
        std::cout << "Error: Your Replace can't be opened" << std::endl;
        return (1);
    }
    inputFile.close();
    if (!strlen(argv[2]))
    {
        std::cout << "Error: Nothing to replace" << std::endl;
        return (1);
    }
    return (0);
}

int main(int argc, char **argv)
{
    if (check_arg(argc, argv))
        return (1);
    
    Replace r;
    r.openfiles(argv[1]);
    r.replace(argv[2], argv[3]);
    return (0);
} 