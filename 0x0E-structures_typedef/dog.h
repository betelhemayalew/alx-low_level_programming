#ifndef _HEADER_
#define _HEADER_

/** 
 * struct dog with the following elements:
 * @name, type = char *
 * @age, type = float
 * @owner, type = char *
 */

struct dog {
    char *name;  
    float age;   
    char *owner; 
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog (dog_t);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void free_dog(dog_t *d);
char *strcpy(char *dest, const char *src);
int strlen(const char *str);

#endif

