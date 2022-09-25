/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:01:55 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/18 19:13:46 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
	if (argc != 4){
		std::cout << "need to enter 4 arguments for example : <program> <filename>  <substring>  <newText>";
		return 0;
	}
	if (!strcmp(argv[2], "") || !strcmp(argv[3], "")){
		std::cout << "arg is empty!" << std::endl;
		return (1);
	}
	std::string line;
	std::string text;
	std::ifstream in;
	std::ofstream out;
	std::string outFileName = (std::string)argv[1] + ".replace";
	out.open(outFileName);
	in.open(argv[1]);
	if (!in.is_open()){
		std::cout << "ERROR OPEN FILE" << std::endl;
	}
	while(std::getline(in, line)){
		text.append(line);
		if (!in.eof()){
			text.append("\n");
		}
	}
	in.close();
	
	for(size_t pos = 0;; pos += std::strlen(argv[3])){
		pos = text.find(argv[2], pos);
		if (pos ==std::string::npos){
			break;
		}
		text.erase(pos, std::strlen(argv[2]));
		text.insert(pos, argv[3]);
	}
	out << text;
	out.close();
	return 0;
}
