#include <iostream>
#include "raylib.h"

int main(void)
{
    InitWindow(800, 450, "raylib [core] example - basic window");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        /*ClearBackground(RAYWHITE);
        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);*/
        ClearBackground(BLACK);
        DrawText("I Am Very Excited For Path Of Exiles 2!", 190, 200, 20, RED);
        
        EndDrawing();
    }

    CloseWindow();

    return 0;
}