/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:56:36 by chduong           #+#    #+#             */
/*   Updated: 2022/08/11 19:59:41 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY__HPP

template<typename T>
class Array {
    public:
        Array();
        Array(unsigned int n);
        Array(Array const &src);
        ~Array();

        Array&      operator=(Array const &src);
    
};

#endif