#pragma once
#include <string>
using namespace std;

class object
{

private:
	int type = 0;
	double mass = 0.0;
	double radius = 0.0;
	double originalPositionX = 0.0;
	double originalPositionY = 0.0;
	double originalVelocityX = 0.0;
	double originalVelocityY = 0.0;
	double originalAccelerationX = 0.0;
	double originalAccelerationY = 0.0;
	double originalMomentumX = 0.0;
	double originalMomentumY = 0.0;
	double positionX = 0.0;
	double positionY = 0.0;
	double velocityX = 0.0;
	double velocityY = 0.0;
	double momentumX = 0.0;
	double momentumY = 0.0;
public:
	//Get object data
	string getType();
	double getMass() const;
	double getRadius() const;
	double getOriginalPositionX() const;
	double getOriginalPositionY() const;
	double getOriginalVelocityX() const;
	double getOriginalVelocityY() const;
	double getOriginalAccelerationX() const;
	double getOriginalAccelerationY() const;
	double getOriginalMomentumX() const;
	double getOriginalMomentumY() const;
	double getPositionX() const;
	double getPositionY() const;
	double getVelocityX() const;
	double getVelocityY() const;
	double getMomentumX() const;
	double getMomentumY() const;

	//Set object data
	void setType(int t);
	void setMass(double m);
	void setRadius(double r);
	void setOriginalPositionX(double x);
	void setOriginalPositionY(double y);
	void setOriginalVelocityX(double x);
	void setOriginalVelocityY(double y);
	void setOriginalAccelerationX(double x);
	void setOriginalAccelerationY(double y);
	void setOriginalMomentumX(double x);
	void setOriginalMomentumY(double y);

	//Calculate new data
	void newPositionX(double t);
	void newPositionY(double t);
	void newVelocityX(double t);
	void newVelocityY(double t);
	void newMomentumX(double t);
	void newMomentumY(double t);
};

