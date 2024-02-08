#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

/* Make a C program to define a structure type (user_t) with name(8 letters) and unique id members. Then
   1) Make an array of user_t
   2) Make a function to fill users with random names and unique ids started from 1
   3) Make a function to print the users to a terminal
   4) Make a function to write the users to a binary file
   5) Make a function to read the users from the file
   6) Make a function to change a user name based on its id in the file
*/

typedef struct
{
    char name[9];
    int id;
} user_t;

void changeUser(char name[], int id);

void readUsers();

void randomNames(user_t myArray[]);

void printArray(user_t myArray[]);

void writeUsers(user_t myArray[]);

int main()
{
    user_t myArray[3]; // Declare an array of user_t structures
    srand(time(NULL)); // Seed the random number generator with the current time
    rand(); // Discard the first result of rand() to improve randomness
    randomNames(myArray); // Fill the array with random names and unique ids
    printArray(myArray); // Print the array to the terminal
    writeUsers(myArray); // Write the array to a binary file
    readUsers(); // Read the array from the file and print it
    changeUser("Dexter", 3); // Change the name of a user based on its id
    changeUser("Svampbob", 1); // Change the name of another user based on it's id
    readUsers(); // Read and print the updated array

    return 0;
}

void randomNames(user_t myArray[])
{
    for(int i = 0; i < 3; i++)
    {
        myArray[i].name[8] = '\0'; // Null-terminate the name
        myArray[i].id = i + 1; // Assign a unique id starting from 1
        for(int j = 0; j < 8; j++)
        {
            myArray[i].name[j] = 'A' + rand() % 26; // Fill the name with random uppercase letters
        }
    }
}

void printArray(user_t myArray[])
{
    for(int i = 0; i < 3; i++)
    {
        printf("%d %s\n", myArray[i].id, myArray[i].name);
    }
}

void writeUsers(user_t myArray[])
{
    FILE *file;
    file = fopen("my.bin", "wb"); // Open the file for writing in binary mode

    if(file == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }
    
    fwrite(myArray, sizeof(user_t), 3, file); // Write the array to the file
    
    fclose(file);
}

void readUsers()
{
    int i = 0;
    user_t read[50]; // Declare an array to read user data from the file

    FILE *file;
    file = fopen("my.bin", "rb"); // Open the file for reading in binary mode

    if(file == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }
    fread(&read, sizeof(user_t), 3, file); // Read user data from the file

    fclose(file);

    printf("Read from file:\n");
  
    for(int i = 0; i < 3; i++)
    {
        printf("%d %s\n", read[i].id, read[i].name);
    }
}

void changeUser(char name[], int id)
{
    int saveBytes = (id - 1) * sizeof(user_t); // Calculate the byte offset in the file
    user_t user;

    strcpy(user.name, name); // Copy the new name to the user structure
    user.id = id; // Assign the user id

    FILE *file;
    file = fopen("my.bin", "rb+"); // Open the file for reading and writing in binary mode

    if(file == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    fseek(file, saveBytes, SEEK_SET); // Move the file pointer to the position of the user to be changed

    fwrite(&user, sizeof(user_t), 1, file); // Write the updated user data to the file

    fclose(file);
}