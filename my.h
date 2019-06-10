/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/Window/Keyboard.h>
#include <SFML/System/Clock.h>
#include <SFML/System/Vector2.h>
#include <time.h>

typedef struct my_sprites
{
    sfTexture *game;
    sfTexture *background;
    sfTexture *character;
    sfTexture *enemy;
    sfSprite *player;
    sfSprite *map;
    sfSprite *space;
    sfSprite *target;
} my_sprites;

typedef struct elements
{
    sfRenderWindow *window;
    sfEvent event;
    sfFont *font;
    sfText *text;
    sfIntRect rect;
    sfVector2f move;
    time_t t;
    sfClock *clock;
    sfTime times;
}elements;

my_sprites create_texture_sprite(my_sprites sprite);
my_sprites open_game(my_sprites sprite, elements elem);
void draw_my_sprite(my_sprites sprite, elements hunter_elem);
void draw_sprite2(my_sprites sprite, elements elem);
void my_help(void);
void position_sprite(my_sprites sprite, elements elem);
void move_sprite(my_sprites sprite, elements elem);
void touch_target(my_sprites sprite, elements elem);
void destroy_sprites(my_sprites sprite);
void close_my_window(elements elem, my_sprites sprite);
void open_window(my_sprites sprite, elements elem);
void my_putchar(char);
void my_putstr(char *);

#endif
