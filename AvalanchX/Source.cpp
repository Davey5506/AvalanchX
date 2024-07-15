#include <iostream>
#include <string>
#include "object.h"
#include <fstream>
using namespace std;

int main() {
	object circle;
	fstream f;

	circle.setType(0);
	circle.setOriginalAccelerationY(-9.81);
	circle.setOriginalVelocityX(5);
	circle.setOriginalVelocityY(30);

	double posX = 0.0;
	double posY = 0.0;

	f.open("data.csv");
	f << "Time (sec),X Position (meters),Y Position (meters)\n";
	cout << "Time (sec)\tX Position(meters)\tY Position (meters)\n";
	for (double t = 0.0; t <= 10 && f.is_open(); t += 0.1)
	{
		circle.newPositionX(t);
		circle.newPositionY(t);
		circle.newVelocityX(t);
		circle.newPositionY(t);

		cout << t << "\t\t" << circle.getPositionX() << "\t\t\t" << circle.getPositionY() << "\n";
		f << t << circle.getPositionX() << circle.getPositionY() << "\n";
	}
	f.close();
	return 0;
}