#ifndef _DOG_H
#define _DOG_H
#include <stdio.h>
/**
 * struct dog -  information of dog structure
 * @name:  is char type ,name of the dog
 * @age: is float type, age of the dog
 * @owner: is char type owner of the dog
 */

struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*_DOG_H */
