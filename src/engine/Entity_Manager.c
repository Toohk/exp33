#include "../include/Entity_Manager.h"

int EM_findIndexForNewEntity(Game * game){
    for(int i = 0; i < MAX_ENTITIES; i++){
        if(game->em.map[i] == 0) return i;
    }
    return -1;
}

Entity *EM_addEntity(Game * game, Entity entity){
    int pos = EM_findIndexForNewEntity(game);
    if(pos == -1) return NULL;
    game->world.entities[pos] = entity;
    game->em.map[pos] = 1;
    return &game->world.entities[pos];
}

void EM_removeEntity(Game * game, Entity * entity){
    entity->active = false;
    game->em.map[entity->id] = 0;
}

