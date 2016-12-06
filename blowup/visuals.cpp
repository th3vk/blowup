#include "physics.h"
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Particle {
private:
	float speedx;
	float speedy;
	float angle;
	float x;
	float y;
public:
	float getSpeedx() { return speedx; }
	float getSpeedy() { return speedy; }
	float getAngle() { return angle; }
	float getX() { return x; }
	float getY() { return y; }
	float setSpeedx(float newspd) { speedx = newspd; }
	float setSpeedy(float newspd) { speedy = newspd; }
	float setAngle(float newang) { angle = newang; }
	float setX(float newx) { x = newx; }
	float setY(float newy) { y = newy; }
};

vector <Particle> particles;

void createParticle();

int main() {
	HANDLE hand = new HANDLE;
	
}

void createParticle() {
	Particle newp = new Particle;


}