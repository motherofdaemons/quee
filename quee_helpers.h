#pragma once

#include <stdint.h>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

#define TARGET_FPS 60
#define TICKS_PER_FRAME 1000.0f / TARGET_FPS

typedef struct Pixel Pixel;

struct Pixel {
    uint8_t B;
    uint8_t G;
    uint8_t R;
    uint8_t A;
};


void check_sdl_code(int code);
void* check_sdl_ptr(void *ptr);
