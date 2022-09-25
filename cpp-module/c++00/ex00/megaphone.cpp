/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 20:53:21 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/17 16:13:11 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char const *argv[])
{
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    argv++;
    while(*argv) {
        std::string str = *argv;
        for (size_t i = 0; i < str.size(); ++i) {
            std::cout << static_cast<char>(std::toupper(str[i]));
        }
        argv++;
    }
    std::cout << std::endl;
    
    return 0;
}
