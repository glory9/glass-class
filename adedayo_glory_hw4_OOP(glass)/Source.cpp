#include "Glass.h"
#include <iostream>
//#include <stdio.h> 
#include <assert.h> 


namespace glassspace {
	Glass::Glass(int c, int v) {
		capacity = c;
		volume = v;
	}

	void Glass::setVolume(int v) {
		volume = v;
	}

	void Glass::setCapacity(int c) {
		capacity = c;
	}

	int Glass::getVolume() {
		return volume;
	}

	int Glass::getCapacity() {
		return capacity;
	}

	void Glass::add(int amt) {
		assert(amt + volume <= capacity);
		volume += amt;
	}

	void Glass::release(int amt) {
		assert(amt <= volume);
		volume -= amt;
	}

	void Glass::operator +=(Glass x) {
		capacity += x.getCapacity();
		volume += x.getVolume();
	}

	bool operator ==(Glass a, Glass b) {
		if (a.getCapacity() == b.getCapacity()) {
			if (a.getVolume() == b.getVolume()) {
				return true;
			}
		}

		return false;
	}

	Glass operator +(Glass a, Glass b) {
		Glass newGlass(0, 0);
		newGlass += a;
		newGlass += b;

		return newGlass;
	}
}