/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:02:44 by lschrafs          #+#    #+#             */
/*   Updated: 2022/10/14 13:31:38 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Usage: [./convert <char, int, float or double>]" << std::endl;
		return 0;
	}
	std::string str = argv[1];
	
	Converter converter = Converter();
	converter.set_arg(str);
	converter.print_conversions();
}