#include"person.h"
#include<iostream>
#include <cassert>

int main()
{
   person_t *stefan = person_create(100, 20);

   assert(stefan != nullptr);

   std::cout << person_get_age(stefan) << std:: endl;

   person_t *eva = person_create(1001, 30);

   assert(eva != nullptr);

   std::cout << person_get_age(eva) << std:: endl;

   person_destroy(stefan);
   person_destroy(eva);

    return 0;
}