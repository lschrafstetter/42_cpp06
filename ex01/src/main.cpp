/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:35:13 by lschrafs          #+#    #+#             */
/*   Updated: 2022/10/12 11:42:28 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void) {
	Data *data = new Data();
	
	std::cout << data << std::endl;
	uintptr_t ptr = serialize(data);
	Data *dataptr = deserialize(ptr);
	std::cout << dataptr << std::endl;

	delete data;
}