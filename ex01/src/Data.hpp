/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:34:38 by lschrafs          #+#    #+#             */
/*   Updated: 2022/10/12 14:50:19 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
#define DATA_H

#include <string>
#include <iostream>
#include <stdint.h>

class Data {
 public:
	Data();
	Data(const Data &copy);
	~Data();
	Data &operator=(const Data &other);

 private:
	std::string member_;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif