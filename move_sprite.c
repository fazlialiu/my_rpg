/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** move_sprite
*/

#include "include/my.h"

void position_sprite(my_sprites sprite, elements elem)
{
    sfVector2f position = {1425, 450};

    elem.rect.top = 0;
    elem.rect.left = 0;
    elem.rect.width = 62;
    elem.rect.height = 76;
    sfSprite_setTextureRect(sprite.player, elem.rect);
    sfSprite_setPosition(sprite.player, position);
    
}

void move_sprite(my_sprites sprite, elements elem)
{
    sfVector2f mover = {10, 0};
    sfVector2f movel = {-10, 0};
    sfVector2f moveu = {0, -10};
    sfVector2f moved = {0, 10};

    if (sfKeyboard_isKeyPressed(sfKeyRight) == sfTrue)
        sfSprite_move(sprite.player, mover);
    if (sfKeyboard_isKeyPressed(sfKeyLeft) == sfTrue)
        sfSprite_move(sprite.player, movel);
    if (sfKeyboard_isKeyPressed(sfKeyUp) == sfTrue)
        sfSprite_move(sprite.player, moveu);
    if (sfKeyboard_isKeyPressed(sfKeyDown) == sfTrue)
        sfSprite_move(sprite.player, moved);
}
