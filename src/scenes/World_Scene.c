#include "../include/World_Scene.h"

void handle_input(Game * game){
    if(IsKeyDown(KEY_Z)) game->current_scene = 0;
    if(IsKeyDown(KEY_DOWN)) game->world.player->pos.y +=1;
    if(IsKeyDown(KEY_UP)) game->world.player->pos.y -=1;
    if(IsKeyDown(KEY_RIGHT)) game->world.player->pos.x +=1;
    if(IsKeyDown(KEY_LEFT)) game->world.player->pos.x -=1;
    if(IsKeyDown(KEY_U)){
        EM_addEntity(game, (Entity){(Vector2){450,450}});
    }
}

void draw(Game * game){
    ClearBackground(SKYBLUE);
    DrawText("World Scene", 190, 200, 20, LIGHTGRAY);
    for(int i = 0; i < MAX_ENTITIES; i++){
        if(game->em.map[i] == 0) continue;
        Vector2 pos = game->world.entities[i].pos;
        DrawCircle(pos.x, pos.y, 50.0, RED);
    }
}

void World_Scene(Game * game){
    draw(game);
    handle_input(game);
}
