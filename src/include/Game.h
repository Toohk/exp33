#pragma once

#include <raylib.h>
#include <stddef.h>

#define MAX_ENTITIES 50

typedef struct Entity{
    Vector2 pos;
    int id;
    bool active;
} Entity;

typedef struct EntityManager {
    int index;
    int map[MAX_ENTITIES];
} EntityManager;

typedef struct World {
    Entity* player;
    Entity entities[MAX_ENTITIES];
} World;

typedef struct Game{
    int current_scene;
    World world;
    EntityManager em;
} Game;
