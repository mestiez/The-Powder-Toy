#ifndef PARTICLE_H_
#define PARTICLE_H_
#include "Config.h"

#include <vector>
#include "StructProperty.h"

struct Particle
{
	int type;
	int life, ctype;
	float x, y, vx, vy;
	float temp;
	int tmp3;
	int tmp4;
	int flags;
	int tmp;
	int tmp2;
	unsigned int dcolour;
	/** Returns a list of properties, their type and offset within the structure that can be changed
	 by higher-level processes referring to them by name such as Lua or the property tool **/
	static std::vector<StructProperty> const &GetProperties();
};

#endif
