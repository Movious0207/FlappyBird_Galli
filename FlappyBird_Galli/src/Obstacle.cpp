#include "Obstacle.h"

void ObstacleMovement(Vector2& obstaclePos, float speed)
{
    obstaclePos.x -= 1 * GetFrameTime() * speed;

    if (obstaclePos.x < 0 - 40)
    {
        obstaclePos.x = screenWidth;
        obstaclePos.y = (rand() % (screenHeight - 100)) + 100;
    }
}