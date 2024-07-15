#include "object.h"
#include <string>
using namespace std;

//Get object data
string object::getType()
{
	switch (this->type) {
		case 0:
			return "Circle";
		case 1:
			return "Square";
		case 2:
			return "triangle";
		default:
			return "Circle";
	}
}

double object::getMass() const
{
	return this->mass;
}

double object::getRadius() const
{
	return this->radius;
}

double object::getOriginalPositionX() const
{
	return this->originalPositionX;
}

double object::getOriginalPositionY() const
{
	return this->originalPositionY;
}

double object::getOriginalVelocityX() const
{
	return this->originalVelocityX;
}

double object::getOriginalVelocityY() const
{
	return this->originalVelocityY;
}

double object::getOriginalAccelerationX() const
{
	return this->originalAccelerationX;
}

double object::getOriginalAccelerationY() const
{
	return this->originalAccelerationY;
}

double object::getOriginalMomentumX() const
{
	return this->momentumX;
}

double object::getOriginalMomentumY() const
{
	return this->originalMomentumY ;
}

double object::getPositionX() const
{
	return this->positionX;
}

double object::getPositionY() const
{
	return this->positionY;
}

double object::getVelocityX() const
{
	return this->velocityX;
}

double object::getVelocityY() const
{
	return this->velocityY;
}

double object::getMomentumX() const
{
	return this->momentumX;
}

double object::getMomentumY() const
{
	return this->momentumY;
}

//Set object data
void object::setType(int t)
{
	this->type = t;
}

void object::setMass(double m)
{
	this->mass = m;
}

void object::setRadius(double r)
{
	this->radius = r;
}

void object::setOriginalPositionX(double x)
{
	this->originalPositionX = x;
}

void object::setOriginalPositionY(double y)
{
	this->originalPositionY = y;
}

void object::setOriginalVelocityX(double x)
{
	this->originalVelocityX = x;
}

void object::setOriginalVelocityY(double y)
{
	this->originalVelocityY = y;
}

void object::setOriginalAccelerationX(double x)
{
	this->originalAccelerationX = x;
}

void object::setOriginalAccelerationY(double y)
{
	this->originalAccelerationY = y;
}

void object::setOriginalMomentumX(double x)
{
	this->momentumX = x;
}

void object::setOriginalMomentumY(double y)
{
	this->velocityY = y;
}


//Calculate new data
void object::newPositionX(double t)
{
	//x = x_0 + v_0t + 0.5at^2
	this->positionX = this->originalPositionX + (this->originalVelocityX * t) + (0.5 * this->originalAccelerationX * (t * t));
}

void object::newPositionY(double t)
{
	//x = x_0 + v_0t + 0.5at^2
	this->positionY = this->originalPositionY + (this->originalVelocityY * t) + (0.5 * this->originalAccelerationY * (t * t));
}

void object::newVelocityX(double t)
{
	//v = v_0 + at
	this->velocityX = this->originalVelocityX + (this->originalAccelerationX * t);
}

void object::newVelocityY(double t)
{
	//v = v_0 + at
	this->velocityY = this->originalVelocityY + (this->originalAccelerationY * t);
}

void object::newMomentumX(double t)
{
}

void object::newMomentumY(double t)
{
}
