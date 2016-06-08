#include "Model.h"

TAsteroid CreateAsteroid(RECT r)
{
	TAsteroid result;

	int w = r.right - r.left;
	int h = r.bottom - r.top;

	result.X = r.left + rand() % w;
	result.Y = r.top + rand() % h;

	result.dX = -50 + rand() % 100;
	result.dY = -50 + rand() % 100;

	result.r = 10 + rand() % 10;

	return result;
}