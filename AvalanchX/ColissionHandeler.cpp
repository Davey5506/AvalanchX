#include "ColissionHandeler.h"
#include "object.h"
#include <cmath>

void ColissionHandeler::detectCollision(object obj0, object obj1)
{
    double pos0[3] = {obj0.getPositionX(),obj0.getPositionY(),obj0.getRadius()};
    double pos1[3] = {obj1.getPositionX(),obj1.getPositionY(),obj1.getRadius()};
    
    double dist = sqrt(pow(pos0[0] - pos1[0], 2) + pow(pos0[1] - pos1[1], 2));
    if (dist <= (pos0[2] + pos1[2]))
    {
        this->newMomentum(obj0.getMass(),obj1.getMass(),obj0.getVelocityX(),obj0.getVelocityY(), obj1.getVelocityX(), obj1.getVelocityY());
    }
}

void ColissionHandeler::newMomentum(double m1, double m2, double vx1, double vy1, double vx2, double vy2)
{
}
