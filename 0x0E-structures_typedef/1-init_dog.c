#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: is struct dog type
 * @name: is char type
 * @age: is float type
 * @owner: is char type
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
