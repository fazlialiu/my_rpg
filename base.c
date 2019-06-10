/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** my_rpg
*/

#include "include/my.h"

my_sprites create_texture_sprite(my_sprites sprite)
{
    sprite.background = sfTexture_createFromFile("rpg_map.png", NULL);
    sprite.map = sfSprite_create();
    sprite.character = sfTexture_createFromFile("ichigo_stand.png", NULL);
    sprite.player = sfSprite_create();
    sfSprite_setTexture(sprite.map, sprite.background, sfTrue);
    sfSprite_setTexture(sprite.player, sprite.character, sfTrue);
    return (sprite);
}

void draw_sprite(my_sprites sprite, elements elem)
{
    sfRenderWindow_drawSprite(elem.window, sprite.map, NULL);
    sfRenderWindow_drawSprite(elem.window, sprite.player, NULL);
}

void destroy_sprites(my_sprites sprite)
{
    sfSprite_destroy(sprite.map);
    sfSprite_destroy(sprite.player);
    sfTexture_destroy(sprite.background);
}

void close_my_window(elements elem, my_sprites sprite)
{
    while (sfRenderWindow_pollEvent(elem.window, &elem.event))
    {
        if (elem.event.type == sfEvtClosed)
            sfRenderWindow_close(elem.window);
        move_sprite(sprite, elem);
    }
}

void open_window(my_sprites sprite, elements elem)
{
    while (sfRenderWindow_isOpen(elem.window)) {
        close_my_window(elem, sprite);
        sfRenderWindow_display(elem.window);
        draw_sprite(sprite, elem);
    }
}
