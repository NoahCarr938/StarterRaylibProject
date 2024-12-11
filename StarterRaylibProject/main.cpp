#include <iostream>
#include "raylib.h"

int main(void)
{
    // Order to write code for headers
    // If you intend for a class to be inherited a lot, then make it virtual ex. actor and component.
    // Constructors
    // Destructors

    // Public Member Functions
    // Protected Member Functions
    // Private Member Functions
    // 
    // Getters and setters

    // Public/Protected/Private 

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