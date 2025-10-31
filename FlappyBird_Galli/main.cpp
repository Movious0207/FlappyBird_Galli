#include "raylib.h"

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    Vector2 playerPos = { 0 };
    Vector2 obstaclePos = { 0 };


    InitWindow(screenWidth, screenHeight, "Flappy Bird");
 

    while (!WindowShouldClose())    
    {

        playerPos.x = 200;

        if (IsKeyDown('w')|| IsKeyDown('W'))
        {

        }
        else if (IsKeyDown('s') || IsKeyDown('S'))
        {

        }

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectangleV(playerPos, { 40,40 }, BLACK);

        DrawRectangleV(obstaclePos, { 40,screenHeight }, BLACK);

        EndDrawing();
    }

    CloseWindow();        
    return 0;
}