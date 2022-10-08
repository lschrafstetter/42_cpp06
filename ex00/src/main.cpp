/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:02:44 by lschrafs          #+#    #+#             */
/*   Updated: 2022/10/07 15:09:03 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv) {
  if (argc != 2)
    std::cout << "Usage: [./convert <char, int, float or double>]" << std::endl;
	std::string str = argv[1];
	if (str.length() == 1)
	std::cout << str << std::endl;
}