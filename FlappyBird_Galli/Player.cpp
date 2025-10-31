#include "Player.h"

void PlayerMovement(Vector2& playerPos, int playerSize, float speed)
{

    playerPos.x = 200;

    if (IsKeyDown('w') || IsKeyDown('W'))
    {
        playerPos.y -= 1 * GetFrameTime() * speed;
    }
    else if (IsKeyDown('s') || IsKeyDown('S'))
    {
        playerPos.y += 1 * GetFrameTime() * speed;
    }
}