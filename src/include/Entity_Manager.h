#pragma once

#include "Game.h"

int EM_findIndexForNewEntity(Game * game);

Entity *EM_addEntity(Game * game, Entity entity);

void EM_removeEntity(Game * game, Entity * entity);
