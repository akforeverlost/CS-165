#include "lander.h"
#include "velocity.h"

#include <iostream>


Lander::Lander(): velocity()
{
   _alive = true;
   _landed = false;
}

void Lander::applyGravity(float value)
{
   velocity.setDy(velocity.getDy() - value);
}

void Lander::applyThrustRight()
{
   velocity.setDx(velocity.getDx() + 0.1);
   _fuel -= 1; 
}

bool Lander::canThrust()
{
   if (_fuel > 0 && !isLanded())
      return true;
   else
      return false;
}
void Lander::applyThrustLeft()
{
   velocity.setDx(velocity.getDx() + -0.1);
   _fuel -= 1; 
}
void Lander::applyThrustBottom()
{
   velocity.setDy(velocity.getDy() + 0.3);
   _fuel -= 3; 
}

void Lander::advance()
{
   velocity.advance();
}

void Lander::draw()
{
   drawLander(velocity.getPoint());
	
}

