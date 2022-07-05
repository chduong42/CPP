/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:14:15 by chduong           #+#    #+#             */
/*   Updated: 2022/07/05 17:53:44 by chduong          ###   ########.fr       */
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
    if (!strlen(argv[2]))
    {
        std::cout << "Error: Nothing to replace" << std::endl;
        return (1);
    }
    std::fstream inputFile;
    inputFile.open(argv[1]);
    if (inputFile.is_open() == false)
    {
        std::cout << "Error: Your file can't be opened" << std::endl;
        return (1);
    }
    inputFile.close();
    return (0);
}

int main(int argc, char **argv)
{
    // if (check_arg(argc, argv))
    //     return (1);
    (void)argc;
    
    std::ifstream   inFile;
    std::ofstream   outFile;
    std::string     buff(argv[1]);
    buff += ".replace";
    inFile.open(argv[1]);
    outFile.open(buff.c_str());
    outFile << inFile.rdbuf();
    
    buff.clear();
    buff = 
    inFile.close();
    outFile.close();
    return (0);
}