#include "Collisions.h"

bool rectToRect(Vector2 Rect1,Vector2 Rect1Size, Vector2 Rect2, Vector2 Rect2Size)
{
	if (Rect1.x > Rect2.x &&
		Rect1.x < Rect2.x + Rect2Size.x &&
		Rect1.y > Rect2.y && 
		Rect1.y < Rect2.y + Rect2Size.y)
	{
		return true;
	}
	if (Rect1.x + Rect1Size.x > Rect2.x &&
		Rect1.x + Rect1Size.x < Rect2.x + Rect2Size.x &&
		Rect1.y > Rect2.y &&
		Rect1.y < Rect2.y + Rect2Size.y)
	{
		return true;
	}
	if (Rect1.x > Rect2.x &&
		Rect1.x < Rect2.x + Rect2Size.x &&
		Rect1.y + Rect1Size.y > Rect2.y &&
		Rect1.y + Rect1Size.y < Rect2.y + Rect2Size.y)
	{
		return true;
	}
	if (Rect1.x + Rect1Size.x > Rect2.x &&
		Rect1.x + Rect1Size.x < Rect2.x + Rect2Size.x &&
		Rect1.y + Rect1Size.y > Rect2.y &&
		Rect1.y + Rect1Size.y < Rect2.y + Rect2Size.y)
	{
		return true;
	}
}