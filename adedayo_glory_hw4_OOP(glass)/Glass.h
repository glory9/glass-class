#pragma once
#ifndef GLASS
#define GLASS
namespace glassspace {
	class Glass
	{
	private:
		int volume, capacity;

	public:
		Glass(int c = 100, int v = 0);
		void setVolume(int v);
		void setCapacity(int c);
		int getVolume();
		int getCapacity();
		void add(int amt);
		void release(int amt);
		void operator +=(Glass x);
	};
	
	bool operator ==(Glass a, Glass b);
	Glass operator +(Glass a, Glass b);
}

#endif



