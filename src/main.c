#include "include/World_Scene.h"
#include "include/Entity_Manager.h"

void MenuScene(Game * game){
    ClearBackground(RAYWHITE);
    DrawText("Menu Scene", 190, 200, 20, LIGHTGRAY);
    if(IsKeyDown(KEY_A)) game->current_scene = 1;
}

int main(){
    InitWindow(1280, 720, "Expedition 33");
    SetTargetFPS(60);

    Game game = {0};

    game.world.player = EM_addEntity(&game, (Entity){(Vector2){50,50}});
    EM_addEntity(&game, (Entity){(Vector2){250,250}});
    EM_addEntity(&game, (Entity){(Vector2){350,350}});

    while(!WindowShouldClose()){

        BeginDrawing();

        switch(game.current_scene){
            case 0:
                MenuScene(&game);
                break;
            case 1:
                World_Scene(&game);
                break;
        }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
