#pragma once
#include "object.h"
class ColissionHandeler
{
	void detectCollision(object obj0, object obj1);
	void newMomentum(double m1, double m2, double vx1, double vy1, double vx2, double vy2);
};

