#include "Game.h"
#include "Player.h"
#include "Obstacle.h"


int Start()
{
    srand((unsigned int)time(nullptr));

    Vector2 playerPos = { 0 };
    int playerSize = 40;

    Vector2 obstaclePos = { 0 };

    float speed = 200.0f;

    InitWindow(screenWidth, screenHeight, "Flappy Bird");


    while (!WindowShouldClose())
    {
        PlayerMovement(playerPos, playerSize, speed);

        ObstacleMovement(obstaclePos, speed);

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectangleV(playerPos, { 40,40 }, BLACK);

        DrawRectangleV(obstaclePos, { 40,screenHeight }, BLACK);

        DrawText("0.1", 5, 5, 10, BLACK);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}