#include "raylib.h"
int main()
{
    InitWindow(350, 200, "Axe");
    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(RED);
        EndDrawing();
    }
}