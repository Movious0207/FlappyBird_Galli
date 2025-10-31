#include "Player.h"

void PlayerMovement(Vector2& playerPos, int playerSize, float speed)
{

    playerPos.x = 200;
    
    if (IsKeyDown('w') || IsKeyDown('W'))
    {   
        if (playerPos.y  >= 0)
        {
            playerPos.y -= 1 * GetFrameTime() * speed;
        }
    }
    if (IsKeyDown('s') || IsKeyDown('S'))
    {
        if (playerPos.y + playerSize <= screenHeight)
        {
            playerPos.y += 1 * GetFrameTime() * speed;
        }
    }
}