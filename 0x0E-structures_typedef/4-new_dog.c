#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - function create new dog
 * @name: is char type
 * @age: is float type
 * @owner: is char type
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));
int i = 0;
int j = 0;
if (new_dog == NULL)
return (new_dog);
while (owner[i])
{
i++;
}
while (name[j])
{
j++;
}
new_dog->owner = malloc((i + 1) * sizeof(char));
new_dog->name = malloc((j + 1) * sizeof(char));
if (new_dog->owner == NULL || new_dog->name == NULL)
{
free(new_dog->owner);
free(new_dog->name);
free(new_dog);
return (NULL);
}
i = 0;
while (owner[i])
{
new_dog->owner[i] = owner[i];
i++;
}
j = 0;
while (name[j])
{
new_dog->name[j] = name[j];
j++;
}
new_dog->owner[i] = 0;
new_dog->name[j] = 0;
new_dog->age = age;
return (new_dog);
}
