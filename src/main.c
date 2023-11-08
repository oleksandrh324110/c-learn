#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef int i32;
typedef long long i64;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;

const u32 width = 120;
const u32 height = 30;
const f32 screen_aspect = (f32)width / height;
const f32 character_aspect = (f32)9 / 20;
const f32 aspect = screen_aspect * character_aspect;

int main() {
  char buffer[width * height + 1];
  buffer[width * height] = '\0';

  for (u64 t = 0;; t++) {
    for (u32 i = 0; i < height; i++) {
      for (u32 j = 0; j < width; j++) {
        f32 x = ((f32)j / width * 2 - 1) * aspect;
        f32 y = (f32)i / height * 2 - 1;

        x += sin(t * 0.03) * 0.5 * aspect;
        y += cos(t * 0.03) * 0.5;

        char pixel = ' ';
        if (pow(x, 2) + pow(y, 2) < 0.2) {
          pixel = '@';
        }

        buffer[i * width + j] = pixel;
      }
    }

    printf(buffer);

    usleep(1000000 / 120);
  }
}
