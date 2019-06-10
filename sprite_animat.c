/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** rpg
*/

sfIntRect clock_sprite(sfIntRect rect, sfClock *Clock)
{
    sfTime time = sfClock_getElapsedTime(Clock);

    if (time.microseconds > 100000) {
        rect.left = rect.left + 400;
        if (rect.left >= 1600)
            rect.left = 0;
        sfClock_restart(Clock);
    }
    return (rect);
}
