#ifndef QUEE_TEXTURE_H_
#define QUEE_TEXTURE_H_

#include <stdint.h>

#include "quee_helpers.h"

typedef struct SDL_Texture SDL_Texture;
typedef struct SDL_Renderer SDL_Renderer;

typedef struct quee_texture quee_texture;
typedef struct quee_texture_manager quee_texture_manager;

struct quee_texture {
    char name[MAX_STR_LEN];
    SDL_Texture *texture;
};

struct quee_texture_manager {
    quee_texture** textures;    
    uint64_t capacity;
};

quee_texture* create_quee_texture_from_image(const char *file);
void destroy_quee_texture(quee_texture **texture);

quee_texture_manager* create_quee_texture_manager(uint64_t capacity);
void destroy_quee_texture_manager(quee_texture_manager **manager);
quee_texture* get_quee_texture_from_texture_manager(quee_texture_manager *manager, const char *file);

#endif

