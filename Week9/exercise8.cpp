/*Make a struct type named person_t which has, name, age and id members.

Make a program to create an array of 3 persons. Then read 3 persons from the standard input and then sort the persons according their ids and print the persons to the standard output. To sort and print use only pointers.*/

#include<iostream>
#include <algorithm>

using namespace std;

//Define the struct type person_t
struct person_t
{
    string name;
    int age;
    int id;
  
};

// Function to compare persons based on their ids for sorting
bool compareById(const person_t& a, const person_t& b)
{
    return a.id < b.id;
}

int main()
{   
    // Create an array of 3 person_t objects
    person_t persons[3];

    // Read input for each person
    for(int i = 0; i < 3; ++i)
    {
        cout << "Please enter details for person" << i + 1 << ":\n";
        cout << "Name: ";
        cin >> persons[i].name;
        cout << "Age: ";
        cin >> persons[i].age;
        cout << "ID: ";
        cin >> persons[i].id;
    }

    //Sort the persons array based on their ids using pointers
    sort(persons, persons + 3, compareById);
    
    //Print the sorted persons using pointers
    cout << "\nSorted Persons:\n";
    for(int i = 0; i < 3; ++i)
    {
        cout << "Name: " << persons[i].name << ", Age: " << persons[i].age << ", ID: " << persons[i].id << "\n";
    }


    return 0;
}