#include <stdio.h>

enum {
    COLOR_REG = 0,
    COLOR_GREEN,
    COLOR_BLUE
};

typedef struct{
    char name_color[32];
    int r;
    int g;
    int b;
}color_t;

color_t mycolor[] = {
    [COLOR_BLUE] = {"blue", 0, 0, 255},
    [COLOR_REG] = {"reg", 255, 0, 0},
    [COLOR_GREEN] = {"green", 0, 255, 0},
};

void print_color(int color){
    printf("color<%s>: r = %d, g = %d, b = %d \n",
           mycolor[color].name_color,
           mycolor[color].r,
           mycolor[color].g,
           mycolor[color].b
           );
}

int main(int argc, char **argv)
{

    print_color(COLOR_REG);
    print_color(COLOR_GREEN);
    print_color(COLOR_BLUE);

    return 0;
}	
