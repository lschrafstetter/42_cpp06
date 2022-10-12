/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:35:03 by lschrafs          #+#    #+#             */
/*   Updated: 2022/10/12 11:39:37 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() {
	this->member_ = "empty";
}

Data::Data(const Data &copy) {
	this->member_ = copy.member_;
}

Data::~Data() {

}

Data &Data::operator=(const Data &other) {
	this->member_ = other.member_;
	return *this;
}

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}
