#include "raylib.h"
int main()
{
    // Window dimensions
    int width{350};
    int height{200};
    InitWindow(width, height, "Axe");

    // Circle Coordinates
    int circle_x{175};
    int circle_y{100};

    SetTargetFPS(60);
    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(WHITE);

        // Game Logic Start

        DrawCircle(circle_x, circle_y, 25, BLUE);
        if (IsKeyDown(KEY_D))
        {
            circle_x += 10;
        }
        if (IsKeyDown(KEY_A))
        {
            circle_x -= 10;
        }

        // Game Logic End
        EndDrawing();
    }
}