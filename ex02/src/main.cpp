/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:53:19 by lschrafs          #+#    #+#             */
/*   Updated: 2022/10/12 13:20:44 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void) {
	Base *base_array[10];
	for (int i = 0; i < 10; i++) {
		base_array[i] = generate();
		std::cout << "Pointer " << i << " of array is: ";
		identify(base_array[i]);
		std::cout << "Reference " << i << " of array is: ";
		identify(*base_array[i]);
		std::cout << std::endl;
		delete base_array[i];
	}
}