/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** my_rpg
*/

#include "include/my.h"

int main(int ac, char **av)
{
    my_sprites sprite;
    elements elem;
    sfVideoMode mode = {1920, 1080, 32};

    elem.window = sfRenderWindow_create(mode, "SFML window", \
    sfResize | sfClose, NULL);
    if (!elem.window)
        return (84);
    sprite = create_texture_sprite(sprite);
    position_sprite(sprite, elem);
    open_window(sprite, elem);
    sfRenderWindow_destroy(elem.window);
    destroy_sprites(sprite);
    return (0);
}
