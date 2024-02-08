#include "person.h"

struct person_t
{
    int id;
    int age;
};

person_t *person_create(int id, int age)
{
  person_t p {id, age};
  return &p;
}

int person_get_id(person_t *person)
{
  
}
int person_get_age(person_t *person)
{

}

void person_set_id(person_t *person, int age)
{

}
void person_set_age(person_t *person, int age)
{

}

void person_destroy(person_t *&person)
{

}