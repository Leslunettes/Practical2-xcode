/*
 * Vector.cpp
 */

#include <iostream>
#include "Vector.h"

Vector::Vector() {
	for (int i = 0; i < SIZE; i++) {
		vector[i] = 0;
	}
	lastposition = 0;
}

Vector::Vector(int size, int val) {
	if (size < SIZE) {
		for (int i = 0; i < size; i++) {
			vector[i] = val;
		}
		lastposition = size;
	} else {
		for (int i = 0; i < SIZE; i++) {
			vector[i] = 0;
		}
		lastposition = 0;
	}
}

bool Vector::addElem(int val) {
	if (lastposition != SIZE) {
		vector[lastposition] = val;
		lastposition++;
		return true;
	} else {
		return false;
	}
}

int Vector::getElem(int loc) const {
	return vector[loc];
}

bool Vector::setElem(int loc, int val) {
	if (loc >= 0 && loc < SIZE && val != 0) {
		vector[loc] = val;
		return true;
	} else {
		return false;
	}
}

int Vector::size() const {
	int counter = 0;
	for (int i = 0; i < SIZE; i++) {
		if (vector[i] != 0) {
			counter++;
		}
	}
	return lastposition;
}

void Vector::clear() {
	for (int i = 0; i < SIZE; i++) {
		vector[i] = 0;
	}
	lastposition = 0;
}
