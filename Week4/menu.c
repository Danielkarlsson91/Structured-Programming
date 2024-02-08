//. Menu as if statements
//1. Add a patient
//2. View a patient
//3. Search patients
//4. Exit 

#include<stdio.h>

int main()
{ 
  printf("Choose a menu option 1-4:\n");
  printf("1. Add a patient\n");
  printf("2. View a patient\n");
  printf("3. Search patients\n");
  printf("4. Exit\n");

  int input;
  scanf("%d", &input);

  if(input == 1)
  {
     printf("Adding a patient\n");
  } else if(input == 2)
  {
     printf("Viewing a patient");
  } else if(input == 3)
  {
     printf("Searching patients\n");
  }  else if(input == 4)
  {
    printf("Exiting...\n");
  } else 
  {
    printf("Incorrect input");
  }


  
  return 0;
}




//Pointer

#include <stdio.h>

int main() 
{
    int num1 = 5;
    int num2 = 10;
    int *x;

    x = &num1;
    *x = *x + 2; // num1 = num1 + 2;

    x = &num2;
    *x = *x * 3;

    printf("Resultat: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}




//Strings and pointers

#include <stdio.h>

int main()
{
  char s1[] = "abcdef";

  s1[0] = 'X';

  printf("s1: %s\n", s1);

  char *s2 = "abcdef";

  //s2[0] = 'X';
  s2++;
  printf("s2: %s\n", s2);
  
  //s1 = "new string";

  s2 = "new string";

  printf("s2: %s\n", s2);

  printf("sizeof(s1): %d\n", sizeof(s1));
  printf("sizeof(s2): %d\n", sizeof(s2));

  return 0;
}




//Gererate random numbers between 1-20
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main() 
{
    srand(time(0));

    int number1 = (rand() % 20) + 1;
    int number2 = (rand() % 20) + 1;
    int number3 = (rand() % 20) + 1;

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);

    return 0;
}




#include<stdio.h>
#include<stdbool.h>
#include<math.h>

//This function is to make the unique random number
random = (rand() % 10);
while (unique(random, fill, array) == false)
{
random = (rand() % 10);
}
array[i] = random;

//Get input from the user
//Print all prime-numbers from that number down to zero(down to 2)

bool isPrime(int input)
{

  for(int i = sqrt (input); i > 1; i--)
  {
    if(input % i == 0)
    {
      return false;
    }
  }
  return true;

}

int main()
{ 
  int input;
  scanf("%d", &input);

  for(int i = input; i > 1; i--)
  {
  
  bool prime = isPrime(i);

  if(prime)
  {
    printf("%d Is Prime!\n", i);
  }

  }

  
  return 0;
}

#include<stdio.h>
#include<stdbool.h>





//While loop

#include<stdio.h>

int main()
{
  int i = 0;

  while(i != 5)
  {
    printf("Enter 5 to quit: ");
    scanf("%d", &i);
  }

  printf("Loop is over!\n");

  
  return 0;
}

#include<stdio.h>

int main()
{
  int i = 0;

  while(i < 10)
  {
    if(i == 7)
    {
      printf("7 is awesome ");
      i++;
      continue;
    }
    printf("%d ", i);
    i++;
  }

  #include<stdio.h>


int main()
{
  int i = 0;

  while(i != 5)
  {
    printf("Enter 5 to quit: ");
    scanf("%d", &i);
  }

  printf("Loop is over!\n");
  
  return 0;
}



  
  //A constant function that prints out the array-elements with pointers

#include<stdio.h>

#define LENGTH 10 //preprocessor constant(macro)

void print_array(int *array, int size);

int main()
{
int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
print_array(a, 10);

  printf("\n");
  int b[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  print_array(b, 11);

  
  
  return 0;
}

void print_array(int *array, int size)
{
  const int length = size; // constant variable
  for(int i = 0; i < length; i++)
  printf("array[%d] = %d\n", i, array[i]);
}

 return 0;
}




//A constant_pointer to pointer

#include <stdio.h>

int main()
{
  char a = 'a';
  char b = 'b';

  char *const constant_pointer = &a;

  *constant_pointer = 'x';

  //constant_pointer = &b;

  printf("a: %c\n", a);

  //char const *pointer_to_const = &a;
  const char *pointer_to_const = &a;

  printf("*pointer_to_const: %c\n", *pointer_to_const);

  pointer_to_const = &b;

  printf("*pointer_to_const: %c\n", *pointer_to_const);

  *pointer_to_const = 'z';

  //const char *const constant_pointer_to_constant = &a;
  char const *const constant_pointer_to_constant = &a;

  *constant_pointer_to_constant = 'z';
  constant_pointer_to_constant = &b;

  return 0;
}



// Do while loop

#include<stdio.h>


int main()
{
  int i = 0;

  do
  {
    printf("i: %d\n", i);
    i++;
  } while (i < 5); // The loop continues as long as this is true

  printf("Loop completed!\n");
  
  
  return 0;
}



//Find the maximum number in an array

#include <stdio.h>

int main()
{
  int myarray[] = {8, 7, 5, 3, 9, 10, 1, 2, 4};

  int max = myarray[0];

  for(int i = 0; i < 9; i++)
  {
    printf("myarray[%d] = %d\n", 
           i, myarray[i]);
    if(myarray[i] > max)
    {
      max = myarray[i];
      printf("New max found: %d\n", max);
    }
  }

  printf("Max: %d\n", max);

  return 0;
}




//Find the two maximum numbers in two arrays

#include <stdio.h>

int find_max(int array[], int length);

int main()
{
  int array1[] = {8, 7, 5, 3, 9, 10, 1, 2, 4}; 
  int array2[] = {5, 9, 3, 1, 0, 8}; 

  int max1 = find_max(array1, 9);
  int max2 = find_max(array2, 6);

  printf("Max1: %d\n", max1);
  printf("Max2: %d\n", max2);

  return 0;
}

int find_max(int array[], int length)
{
  int max = array[0];

  for(int i = 0; i < length; i++)
  { 
    if(array[i] > max)
    {
      max = array[i];
    }
  }

  return max;
}




//Find the second highest number in an array

#include <stdio.h>

int second_highest(int[], int length);

int main()
{
  int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  
  int result = second_highest(a, 10);
  printf("second highest: %d\n", result);

  return 0;
}

int second_highest(int a[], int length)
{
  int max1;
  int max2;

  if(a[0]> a[1])
  {
    max1 = a[0];
    max2 = a[1];
  }
  else
  {
    max1 = a[1];
    max2 = a[0];
  }

  for (int i = 2; i < length; i++)
  {
    if(a[i] > max1)
    {
      max2 = max1;
      max1 = a[i];
    }
    else if(a[i] > max2 && a[i] < max1)
    {
      max2 = a[i];
    }
  }

  return max2;
}




//To find and count two specific number in two arrays

#include <stdio.h>

int occurrences(int array[], int length, int to_find);

int main()
{
  int myarray1[] = {4, 9, 7, 5, 5, 5, 5, 6, 1, 5};
  int myarray2[] = {0, 0, 1, 1, 0, 2, 0, 3};

  int findarr1_5 = occurrences(myarray1, 10, 5);
  int findarr2_0 = occurrences(myarray2, 8, 0);

  printf("# of 5s found in myarray1: %d\n", findarr1_5);

  printf("# of 0s found in myarray2: %d\n", findarr2_0);

  return 0;

}

int occurrences(int array[], int length, int to_find)
{
  int count = 0;

  for(int i = 0; i < length; i++)
  
    if(array[i] == to_find) count++;

    return count;

}




//To find and count a specific number in an array

#include <stdio.h>

int main()
{
  int myarray[] = {4, 9, 7, 3, 6, 6, 6, 6, 1, 5};
  int count = 0;
  int to_find = 6;

  for(int i = 0; i < 10; i++)
  {
    printf("myarray[%d] = %d\n",
         i, myarray[i]);
    if(myarray[i] == to_find)
    {
      count++;
    }
  }

  printf("# of 6s found: %d\n", count);

  return 0;

}



//Multi-dimension-array
#include<stdio.h>

int main()
{

  int const columns = 3;
  int const rows = 2;
  int grades[][] = {
      {12, 23, 45},
      {64, 78, 89}
  };

  for(int i = 0; i < rows; i++)
  {
    for(int j = 0; j < columns; j++)
    {
      printf("%d ", grades[i][j]);
    }
    printf("\n");
  }

  return 0;
}




//Strings

#include<stdio.h>


int main()
{

  printf("What is your favorite food?: ");
  char favFood[50];
  scanf("%49s", favFood);
  printf("%s\n", favFood);

  int charCount = strlen(favFood);

  while(favFood[charCount] != '\0')
  {
    charCount++;
  }

  printf("The character count is %d\n", charCount);
  return 0;
}




//Pattern matching

#include <stdio.h>

int main()
{
  char buffer[100];

  printf("Enter: ");
  scanf("%[^\n]%*c", buffer);
  printf("Buffer: %s\n", buffer);


  

  return 0;
}



 // 5! = 5 * 4 * 3 * 2 * 1(Factorial)

 //Count the factorial by using functions. void = no return type.

#include<stdio.h>

int factorial(int number)
{
  int factorial = 1;

  for(int i = number; i > 1; i--)
  {
    factorial *= i;
    //factorial = factorial * i;
  }


  return factorial;
}

void outputFactorial(int input)
{
  printf("The factorial of %d is %d.\n", input, factorial(input));
}

int main()
{
  outputFactorial(5);
  outputFactorial(8);

  for(int i = 0; i < 10; i++)
  {
    outputFactorial(i);
  }
  
  return 0;
}




//pointers

#include<stdio.h>

int main()
{
  //Declaration of a pointer
  //Pointers instead of int i in a forloop in general when using pointers
  int slices = 20;
  int *p = &slices;

  printf("Slices: %d\n", slices);
  printf("Slices (through pointer): %d\n", *p);

  slices = 21;

  printf("Slices: %d\n", slices);
  printf("Slices (through pointer): %d\n", *p);

  *p = 25;
  
  printf("Slices: %d\n", slices);
  printf("Slices (through pointer): %d\n", *p);

  slices++;

  

  //*p++; --> *(p++);
  (*p)++;

  printf("Slices: %d\n", slices);
  printf("Slices (through pointer): %d\n", *p);  

  return 0;
}




#include <stdio.h>

int main()
{
  // Declare an integer variable 'b' and initialize it with the value 42.
  int b = 42;

  // Declare a pointer variable 'a' that can store the address of an integer.
  // Initialize 'a' with the address of variable 'b'.
  int *a = &b;

  // Print the initial values and addresses.
  printf("b: %d\n", b);      // Prints the value of b: 42
  printf("&b: %p\n", &b);    // Prints the address of b
  printf("a: %p\n", a);      // Prints the value of the pointer a (which is the address of b)

  // Dereference the pointer 'a' and assign the value 50 to the memory location it points to (which is the same as 'b').
  *a = 50;

  // Print the updated values and addresses.
  printf("b: %d\n", b);      // Prints the updated value of b: 50
  printf("&b: %p\n", &b);    // Prints the address of b (which remains the same)
  printf("a: %p\n", a);      // Prints the value of the pointer a (which is still the address of b)

  return 0;
}




//A swap function by using pointers

#include<stdio.h>

void swap(int *a, int *b);

int main()
{
  int x, y;
  x = 5;
  y = 10;

  printf("x: %d, y: %d\n", x, y);
  printf("&x: %p\n&y: %p\n", &x, &y);
  swap(&x, &y);
  printf("x: %d, y: %d\n", x, y);
  
  return 0;
}

//Array - pointer

arr[3] = *(arr + 3) (Same thing)
int a = 3
int *b = a
printf ("%d", *b)
printf ("%d", a)  (Same thing)


void swap(int *a, int *b)
{
  printf("a: %p\nb: %p\n", a, b);
  printf("*a: %d\n*b: %d\n", *a, *b);
  int temp = 0;
  temp = *a;
  *a = *b;
  *b = temp;
}

//Absolute value function

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() 
{
    int x = -5;

    int abs_x = abs(x);

    printf("abs(x): %d\n", abs_x);

    double y = -2.5;

    double fabs_y = fabs(y);

    printf("fabs(y): %f\n", fabs_y);

    return 0;
}


//array by using pointers and functions

#include<stdio.h>

void printArray(int arr[], int size)
{
  for(int i = 0; i < size; i++)
  {
    arr[i]++;
  printf("%d ", arr[i]);
  }
}

void doSomething(int a)
{
  a++;
}
int main()
{
  int slicesEachMeal[] = {4, 5, 4, 6, 3, 2};

  printArray(slicesEachMeal, 6);
  printf("\n");

  for(int i = 0; i < 6; i++)
  {
    printf("%d ", slicesEachMeal[i]);
  }
  
  return 0;
}

//Two arrays to find the largest number in each one

#include<stdio.h>

int find_max(int array[], int length);

int main() 
{
    int myarray1[] = {8, 7, 5, 3, 9, 10, 1, 2, 4};
    int myarray2[] = {5, 8 ,3, 1, 0, 8};

    int max1 = find_max(myarray1, 9);
    int max2 = find_max(myarray2, 6);

    printf("Max1: %d\n", max1);
    printf("Max2: %d\n", max2);


    return 0;
}
int find_max(int array[], int length)
{
    int max = array[0];

    for(int i = 1; i < length; i++)
    {
        printf("myarray[%d] = %d\n",
        i, array[i]);
        if(array[i] > max) 
       { 
        max = array[i];
       }
    }

    return max;
}




#include <stdio.h>
#include<string.h>

//A simple function to show how strtok works

int main()
{
  char s[] = "This is the way.";
  char d[] = " ";

  
  char *portion1 = strtok(s, d);
  printf("%s\n", portion1);

  char *portion2 = strtok(NULL, d);
  printf("%s\n", portion2);

  char *portion3 = strtok(NULL, d);
  printf("%s\n", portion3);

  char *portion4 = strtok(NULL, d);
  printf("%s\n", portion4);

  char *again = strtok(NULL, d);
  if(again == NULL)
  printf("We're done!");

  else
    printf("Still more to go!\n");
  
  
  return 0;

}

//Function prototype

#include<stdio.h>

int addNumbers(int number1, int number2);

int main() 
{
    int result = addNumbers(8, 9);
    printf("Result = %d", result); 

    return 0;
}

int addNumbers(int number1, int number2)
{
    int sum = number1 + number2;
    return sum;
    printf("After Return Statement");
}


//A larger program to show a strtok function

int main()
{
  char s[] = "This is the way again.";
  char d[] = " ";

  //char *p1 = strtok(s, d);
  //printf("p1: %p\n", p1);
  //printf(" s: %p\n", s);

  char *portion = strtok(s, d);

  while(portion!= NULL)
  {
    printf("%s\n", portion);
    portion = strtok(NULL, d);
  }
  
  for(int i = 0; i < 24; i++)
  if(s[i] == '\0') printf("\\0\n");
  else printf("%c\n", s[i]);

  /*
  char *portion1 = strtok(s, d);
  printf("%s\n", portion1);

  char *portion2 = strtok(NULL, d);
  printf("%s\n", portion2);

  char *portion3 = strtok(NULL, d);
  printf("%s\n", portion3);

  char *portion4 = strtok(NULL, d);
  printf("%s\n", portion4);

  char *again = strtok(NULL, d);
  if(again == NULL)
  printf("We're done!");

  else
    printf("Still more to go!\n");
  */
  
  return 0;

}

//A swap function with pointers
void swap(int *num1, int *num2)
{
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

//A swap function without pointers

void swap(int array[][6], int i, int j)
{
    for (int k = 0; k < 6; k++)
    {
        int temp = array[k][i];    // Store the value of array[k][i] in a temporary variable
        array[k][i] = array[k][j]; // Assign the value of array[k][j] to array[k][i]
        array[k][j] = temp;        // Assign the stored value of array[k][i] to array[k][j]
    }
}




//Gets 9 in return in this simple function
#include<stdio.h>

int add(int a, int b)
{
  int result = a + b;
  return result;
}

int main()
{
  
  int output = add(4, 5);
  printf("Output: %d\n", output);
  
  return 0;
}  




// A declaration of a function
int add(int a, int b);

//A simple function

#include<stdio.h>

int add(int a, int b)
{
  // A function definition
  int result = a + b;
  return result;
}

int main()
{
  
  int output = add(4, 5);
  printf("Output: %d\n", output);
  
  return 0;
}



//Function-prototype

#include <stdio.h>

int add(int a, int b);

int main()
{
int x, y;
add(x, y);
}

int add(int a, int b)
{
return a+b;
}





//A function with multiplication

#include<stdio.h>

int add(int a, int b);
int mult(int x, int y);
void print_int(int a);


int main()
{

  int output = add(4, 5);
  printf("Output: %d\n", output);

  int multoutput = mult(9, 7);
  printf("Mult output: %d\n", multoutput);

  print_int(5);
  
  return 0;
}

int add(int a, int b)
{
  int result = a + b;
  return result;
}
int mult(int x, int y)
{
  int result = 0;
  for(int i = 0; i < x; i++)
    result = add(result, y);
    return result;
}

void print_int(int a)
{
  printf("INT: %d", a);
}





//Making and declaring a file

#include <stdio.h>

int main()
{
  // Declare a file pointer variable fh_output
  FILE *fh_output;

  // Open a file named "io.txt" in write mode ("w")
  // If the file doesn't exist, it will be created; if it does, its content will be truncated
  fh_output = fopen("io.txt", "w");

  // Write the string "abc" to the file
  fputs("abc", fh_output);

  // Write the string "123" to the file
  fputs("123", fh_output);

  // Write the string "A string" followed by a newline character to the file
  fputs("A string\n", fh_output);

  // Close the file to ensure changes are saved and release resources
  fclose(fh_output);

  // Return 0 to indicate successful execution of the program
  return 0;
}





//Enum basics

#include<stdio.h>

enum Day{Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main()
{
  enum Day today = Tuesday;
  enum Day yesterday = Monday;
  enum Day tomorrow = Wednesday;
  
  printf("Yesterday: %d\n", yesterday);
  printf("Today: %d\n", today);
  printf("Tomorrow: %d\n", tomorrow);
  
  printf("Friday: %d\n", Friday);

 
  
  return 0;
}





//A struct function

#include<stdio.h>
#include<math.h>

typedef struct 
{
  int length;
  int width;
} rectangle;

typedef struct
{
  int x;
  int y;
} position;

typedef struct 
{
  char owner[30];
  rectangle rectangle;
  position position;
} buildingPlan;

int main()
{
  rectangle myRectangle = {5, 10};
  printf("Length: %d. Width: %d\n", myRectangle.length, myRectangle.width);
  
  buildingPlan myHouse = {"Daniel Karlsson", {5, 10}, {32, 48}};

  printf("%d The house at %d (size %d %d) is owned by %s\n",
          myHouse.position.x,
          myHouse.position.y,
          myHouse.rectangle.length,
          myHouse.rectangle.width,
          myHouse.owner

  );
  

  position path[] = {{0, 1}, {1, 2}, {3, 4}};

  for(int i = 0; i < 3; i++)
  {
    printf("%d %d\n", path[i].x, path[i].y);
  }
  buildingPlan *structPointer = &myHouse;
  printf("Position x: %d\n", structPointer->position.x);
  return 0;
}




//A simple struct-function

#include <stdio.h>
#include<string.h>
#include<stdlib.h>

struct Player
{
    char name[12];
    int score;

};

int main() 
{
    struct Player player1;
    struct Player player2;  

    strcpy(player1.name, "Bro");
    player1.score = 4;

    strcpy(player2.name, "James");
    player2.score = 5;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);


    return 0;
}




//A macro-function

#include<stdio.h>
#include<stdbool.h>

#define MAX 20

#define PI 3.14

#define print printf("PRINT THIS!\n");

#define inc(x) x + 1

#define area(base, height) 0.5 * base * height

int main()
{
  printf("Max: %d\n", MAX);

  print

  int a = 2;

  a = inc(a);
  printf("a: %d\n", a);

  int base1 = 20;
  int height1 = 20;
  int area1 = area(base1, height1);
  printf("area1: %d\n", area1);

  
  return 0;
}





#include<stdio.h>
#include<stdlib.h>

//Dynamical mallocations with pointers
int main()
{
  int *a;
  int length = 0;

  printf("Enter a length: ");
  scanf("%d", &length);

  a = malloc(length * sizeof(int));

  printf("a: %p\n", a);

  for(int i = 0; i < length; i++)
  a[i] = i;

  for(int i = 0; i < length; i++)
  printf("a[%d]=%d\n", i, a[i]);

  free(a);
  
  return 0;
}  




//Tic toc game 

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

// Global variables representing the Tic-Tac-Toe board and player symbols
char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

// Function prototypes
void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

int main() 
{
    // Variables for tracking game state
    char winner = ' ';
    char response;

    do
    {
        // Reset the board for a new game
        winner = ' ';
        response = ' ';
        resetBoard();
       
        // Main game loop
        while(winner == ' ' && checkFreeSpaces() != 0)
        {
            printBoard();

            // Player's move
            playerMove();
            winner = checkWinner();
            if(winner != ' ' || checkFreeSpaces() == 0)
            {
                break;
            }

            // Computer's move
            computerMove();
            winner = checkWinner();
            if(winner != ' ' || checkFreeSpaces() == 0)
            {
                break;
            }
        }

        // Display the final board and the game result
        printBoard();
        printWinner(winner);

        // Ask the user if they want to play again
        printf("\nWould you like to play again? (Y/N) ");
        scanf(" %c", &response);
        response = toupper(response);
    } while (response == 'Y');

    printf("Thanks for playing!");

    return 0;
}

// Function to reset the Tic-Tac-Toe board to its initial state
void resetBoard()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

// Function to print the current state of the Tic-Tac-Toe board
void printBoard()
{
    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

// Function to check the number of free spaces on the board
int checkFreeSpaces()
{
    int freeSpaces = 9;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(board[i][j] != ' ')
            {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}

// Function for the player to make a move
void playerMove()
{
    int x;
    int y;

    do
    {
        printf("Enter row #(1-3): ");
        scanf("%d", &x);
        x--;
        printf("Enter column #(1-3): ");
        scanf("%d", &y);
        y--;

        if(board[x][y] != ' ')
        {
            printf("Invalid move!\n");
        }
        else 
        {
            board[x][y] = PLAYER;
            break;
        }
    } while (board[x][y] != ' ');
}

// Function for the computer to make a move
void computerMove()
{
    // Create a seed based on current time
    srand(time(0));
    int x;
    int y;

    if(checkFreeSpaces() > 0)
    {
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        } while (board[x][y] != ' ');

        board[x][y] = COMPUTER;
    }
    else 
    {
        // If there are no free spaces, declare the game a draw
        printWinner(' ');
    }
}

// Function to check if there is a winner and return the winning symbol
char checkWinner()
{
    // Check rows  
    for(int i = 0; i < 3; i++)
    {
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2])
        {
            return board[i][0];
        }
    }

    // Check columns
    for(int i = 0; i < 3; i++)
    {
        if(board[0][i] == board[1][i] && board[0][i] == board[2][i])
        {
            return board[0][i];
        }
    }

    // Check diagonals
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2])
    {
        return board[0][0];
    }
    if(board[0][2] == board[1][1] && board[0][2] == board[2][0])
    {
        return board[0][2];
    }

    // If no winner is found, return a space to indicate a draw or ongoing game
    return ' ';
}

// Function to print the result of the game
void printWinner(char winner)
{
    if(winner == PLAYER)
    {
        printf("YOU WIN!");
    }
    else if(winner == COMPUTER)
    {
        printf("YOU LOSE!");
    }
    else
    {
        printf("IT'S A DRAW!");
    }
}




//A program with pointers, functions and structs

#include <stdio.h>
#include <stdlib.h>

// Define the structure for an employee
struct Employee {
    char name[50];
    int age;
    float salary;
};

// Function prototypes
void inputEmployee(struct Employee *employee);
void printEmployee(const struct Employee *employee);

int main() {
    // Declare an array of employees
    struct Employee employees[3];

    // Use a pointer to iterate over the array
    struct Employee *ptrEmployee = employees;

    // Input information for each employee
    for (int i = 0; i < 3; ++i) {
        printf("Enter details for Employee #%d:\n", i + 1);
        inputEmployee(ptrEmployee);
        ptrEmployee++; // Move the pointer to the next employee
    }

    // Print information for each employee
    ptrEmployee = employees; // Reset the pointer to the beginning
    for (int i = 0; i < 3; ++i) {
        printf("\nDetails for Employee #%d:\n", i + 1);
        printEmployee(ptrEmployee);
        ptrEmployee++; // Move the pointer to the next employee
    }

    return 0;
}

// Function to input employee details
void inputEmployee(struct Employee *employee) {
    printf("Enter employee name: ");
    scanf("%s", employee->name);

    printf("Enter employee age: ");
    scanf("%d", &(employee->age));

    printf("Enter employee salary: ");
    scanf("%f", &(employee->salary));
}

// Function to print employee details
void printEmployee(const struct Employee *employee) {
    printf("Name: %s\n", employee->name);
    printf("Age: %d\n", employee->age);
    printf("Salary: $%.2f\n", employee->salary);
}




//A union

#include <stdio.h>

// Declare an enumeration for different data types
enum DataType {
    INTEGER,
    FLOAT,
    CHAR
};

// Declare a union named MyUnion
union MyUnion {
    int integerMember;
    float floatMember;
    char charMember;
};

// Declare a struct to hold data along with its type
struct DataWithDataType 
{
    union MyUnion data;
    enum DataType type;
};

// Function to print data based on its type
void printData(struct DataWithDataType data) 
{
    switch (data.type) {
        case INTEGER:
            printf("Integer member: %d\n", data.data.integerMember);
            break;
        case FLOAT:
            printf("Float member: %f\n", data.data.floatMember);
            break;
        case CHAR:
            printf("Char member: %c\n", data.data.charMember);
            break;
        default:
            printf("Unknown data type\n");
    }
}

int main() {
    // Declare variables of type MyUnion
    union MyUnion myInteger = { .integerMember = 42 };
    union MyUnion myFloat = { .floatMember = 3.14 };
    union MyUnion myChar = { .charMember = 'A' };

    // Declare variables of type DataWithDataType
    struct DataWithDataType dataInteger = { .data = myInteger, .type = INTEGER };
    struct DataWithDataType dataFloat = { .data = myFloat, .type = FLOAT };
    struct DataWithDataType dataChar = { .data = myChar, .type = CHAR };

    // Print data
    printData(dataInteger);
    printData(dataFloat);
    printData(dataChar);

    return 0;
}





//A larger program including Arrays, pointers, functions, malloc, structs

#include <stdio.h>
#include <stdlib.h>

// Define a struct to represent a course
struct Course 
{
    char courseName[50];
    int credits;
    float grade;
};

// Define a struct to represent a student
struct Student 
{
    char name[50];
    int age;
    struct Course *courses; // Array of courses for each student
    int numCourses;         // Number of courses
};

// Function to input information for a course
void inputCourse(struct Course *course) 
{
    printf("Enter course name: ");
    scanf("%s", course->courseName);

    printf("Enter credits for %s: ", course->courseName);
    scanf("%d", &course->credits);

    printf("Enter grade for %s: ", course->courseName);
    scanf("%f", &course->grade);
}

// Function to input information for a student
void inputStudent(struct Student *student) 
{
    printf("Enter student name: ");
    scanf("%s", student->name);

    printf("Enter age for %s: ", student->name);
    scanf("%d", &student->age);

    printf("Enter the number of courses for %s: ", student->name);
    scanf("%d", &student->numCourses);

    // Allocate memory for an array of courses for the student
    student->courses = (struct Course *)malloc(student->numCourses * sizeof(struct Course));

    if (student->courses == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        exit(1); // Exit with an error code
    }

    // Input information for each course
    for (int i = 0; i < student->numCourses; ++i) {
        printf("\nCourse %d for %s:\n", i + 1, student->name);
        inputCourse(&student->courses[i]);
    }
}

// Function to print information for a course
void printCourse(const struct Course *course) {
    printf("Course: %s\n", course->courseName);
    printf("Credits: %d\n", course->credits);
    printf("Grade: %.2f\n", course->grade);
}

// Function to print information for a student
void printStudent(const struct Student *student) {
    printf("\nStudent: %s\n", student->name);
    printf("Age: %d\n", student->age);

    // Print information for each course
    for (int i = 0; i < student->numCourses; ++i) {
        printf("\nCourse %d:\n", i + 1);
        printCourse(&student->courses[i]);
    }
}

// Function to free memory allocated for courses in a student
void freeStudent(struct Student *student) {
    free(student->courses);
}

int main() {
    int numStudents;

    // Get the number of students from the user
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Allocate memory for an array of students
    struct Student *students = (struct Student *)malloc(numStudents * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1; // Exit with an error code
    }

    // Input information for each student
    for (int i = 0; i < numStudents; ++i) {
        printf("\nStudent %d:\n", i + 1);
        inputStudent(&students[i]);
    }

    // Print information for each student
    printf("\nStudents Information:\n");
    for (int i = 0; i < numStudents; ++i) {
        printStudent(&students[i]);
    }

    // Free the allocated memory
    for (int i = 0; i < numStudents; ++i) {
        freeStudent(&students[i]);
    }
    free(students);

    return 0; // Exit successfully
}



//How to Dynamically Allocate An Array Of Structs

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a struct named Point to represent a point in 2D space
typedef struct {
    int x;
    int y;
    char *description; // a dynamically allocated string to describe the point
} Point;

// Main function to dynamically allocate an array of structs
int main() {
    int length = 3;

    Point *array; // Declare a pointer to a Point struct

    // Dynamically allocate memory for an array of Point structs
    array = malloc(sizeof(Point) * length);

    // Initialize the first element of the array
    array[0].x = 1;
    array[0].y = 1;
    array[0].description = malloc(10); // Dynamically allocate memory for the description string
    strcpy(array[0].description, "point 1"); // Copy the description to the allocated memory

    // Initialize the second element of the array
    array[1].x = 2;
    array[1].y = 2;
    array[1].description = malloc(10);
    strcpy(array[1].description, "point 2");

    // Initialize the third element of the array using a different notation
    array[2].x = 3;
    (*(array + 2)).y = 3;
    array[2].description = malloc(10);
    strcpy(array[2].description, "point 3");

    // Print the contents of the array
    printf("Array...\n");
    for (int i = 0; i < length; i++) {
        printf("(%d, %d)\n", array[i].x, array[i].y);
        printf(" - %s\n", array[i].description);
    }
    printf("\n");

    // Free dynamically allocated memory for each description string
    for (int i = 0; i < length; i++)
        free(array[i].description);

    // Free dynamically allocated memory for the array
    free(array);

    return 0;
}

// Replace a character in a string with another character

#include <stdio.h>
#include <string.h>

// Function prototype to replace a character in a string
void replace_char(char *string, char replace, char new);

int main() 
{
    // Example 1: Replace 'i' with 'Z' in the string "This is my string!"
    char s1[] = "This is my string!";
    replace_char(s1, 'i', 'Z');
    printf("s1: %s\n", s1);

    // Example 2: Replace 'a' with 'Z' in the string "aaaaaBBBBaBBBBaaaBBBBcdea!"
    char s2[] = "aaaaaBBBBaBBBBaaaBBBBcdea!";
    replace_char(s2, 'a', 'Z');
    printf("s2: %s\n", s2);

    return 0;
}

// Function to replace a character in a string with another character
void replace_char(char *string, char replace, char new)
{
    int slen = strlen(string);

    // Loop through each character in the string
    for (int i = 0; i < slen; i++) {
        // If the current character matches the one to be replaced, replace it with the new character
        if (string[i] == replace) {
            string[i] = new;
        }
    }
}




//A largers program with malloc, pointers, structs and arrays

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for a student
typedef struct {
    char name[50];
    int *grades;
    int numGrades;
} Student;

// Function to initialize a student
void initializeStudent(Student *student, const char *name, int numGrades) {
    strncpy(student->name, name, sizeof(student->name));
    student->numGrades = numGrades;

    // Allocate memory for the grades array
    student->grades = (int *)malloc(numGrades * sizeof(int));

    if (student->grades == NULL) {
        printf("Memory allocation failed for grades array.\n");
        exit(1); // Exit with an error code
    }

    // Initialize grades to 0
    for (int i = 0; i < numGrades; i++) {
        student->grades[i] = 0;
    }
}


// Function to display student information
void displayStudent(const Student *student) {
    printf("Name: %s\nGrades:", student->name);

    for (int i = 0; i < student->numGrades; i++) {
        printf(" %d", student->grades[i]);
    }

    printf("\n");
}

// Function to free allocated memory for a student
void freeStudent(Student *student) {
    free(student->grades);
}

int main() {
    // Create an array of students
    int numStudents = 3;
    Student *students = (Student *)malloc(numStudents * sizeof(Student));

    if (students == NULL) {
        printf("Memory allocation failed for students array.\n");
        return 1; // Exit with an error code
    }

    // Initialize each student
    initializeStudent(&students[0], "Alice", 3);
    initializeStudent(&students[1], "Bob", 4);
    initializeStudent(&students[2], "Charlie", 5);

    // Display information for each student
    for (int i = 0; i < numStudents; i++) {
        displayStudent(&students[i]);
    }

    // Free allocated memory for each student
    for (int i = 0; i < numStudents; i++) {
        freeStudent(&students[i]);
    }

    // Free allocated memory for the array of students
    free(students);

    return 0;
}


// A quiz game

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_QUESTION 256
#define MAX_ANSWER 128
#define TOTAL_QUESTIONS 5

// Define a structure to represent a quiz question
typedef struct 
{
    char question[MAX_QUESTION];
    char answerA[MAX_ANSWER];
    char answerB[MAX_ANSWER];
    char answerC[MAX_ANSWER];
    char answerD[MAX_ANSWER];
    char correct_answer;
} quiz_question;

int main() {
    // Declare an array of quiz_question structures to store the quiz questions and answers
    quiz_question quiz[TOTAL_QUESTIONS];

    // Initialize quiz questions and answers
    // Question 0
    strcpy(quiz[0].question, "What does the ++ operator do?");
    strcpy(quiz[0].answerA, "Add two to a number");
    strcpy(quiz[0].answerB, "Add one to a number");
    strcpy(quiz[0].answerC, "Subtract one from a number");
    strcpy(quiz[0].answerD, "Subtract two from a number");
    quiz[0].correct_answer = 'B';

    // Question 1
    strcpy(quiz[1].question, "C is a successor of which language?");
    strcpy(quiz[1].answerA, "B");
    strcpy(quiz[1].answerB, "C++");
    strcpy(quiz[1].answerC, "Python");
    strcpy(quiz[1].answerD, "Java");
    quiz[1].correct_answer = 'A';

    // Question 2
    strcpy(quiz[2].question, "When is a do-while loop condition checked?");
    strcpy(quiz[2].answerA, "Before the loop body executes");
    strcpy(quiz[2].answerB, "Never");
    strcpy(quiz[2].answerC, "While the loop body executes");
    strcpy(quiz[2].answerD, "After the loop body executes");
    quiz[2].correct_answer = 'D';

    // Question 3
    strcpy(quiz[3].question, "What does a pointer variable store?");
    strcpy(quiz[3].answerA, "A floating-point number");
    strcpy(quiz[3].answerB, "A string");
    strcpy(quiz[3].answerC, "A memory address");
    strcpy(quiz[3].answerD, "An array");
    quiz[3].correct_answer = 'C';

    // Question 4
    strcpy(quiz[4].question, "How can we check if x does not equal y in C?");
    strcpy(quiz[4].answerA, "x <> y");
    strcpy(quiz[4].answerB, "x != y");
    strcpy(quiz[4].answerC, "x == y");
    strcpy(quiz[4].answerD, "x DNE y");
    quiz[4].correct_answer = 'B';

    // Initialize variables to keep track of correct answers
    double total_correct = 0;
    char answer;

    // Loop through each question
    for (int i = 0; i < TOTAL_QUESTIONS; i++) 
    {
        // Display the current question and answer choices
        printf("Question %d: %s\n\n", (i + 1), quiz[i].question);
        printf("A) %s\n", quiz[i].answerA);
        printf("B) %s\n", quiz[i].answerB);
        printf("C) %s\n", quiz[i].answerC);
        printf("D) %s\n", quiz[i].answerD);
        printf("\nEnter Answer (A, B, C, or D): ");

        // Get the user's answer
        scanf(" %c", &answer);

        // Check if the answer is correct
        if (toupper(answer) == quiz[i].correct_answer) {
            total_correct++;
            printf("\n\nCorrect Answer!");
        } else {
            printf("\n\nIncorrect Answer!");
            printf("\n\nThe correct answer was %c.", quiz[i].correct_answer);
        }

        printf("\n\n\n");
    }

    // Display the total number of correct answers and the percentage
    printf("%d/%d questions answered correctly",
           (int)total_correct,
           TOTAL_QUESTIONS);
    printf(" (%.2f%%)\n\n",
           (total_correct / TOTAL_QUESTIONS) * 100);

    return 0;
}
    
//How '\0' works

#include <stdio.h>


int main() 
{
  char a[] = "Hej";
  char b[] = {'H','e','j', '\0'}; 

  printf("%s\n%s", a, b);
   

  return 0;
}



//Convert Celsius to Fahrenheit 

#include <stdio.h>

int main() 
{
    double C = 0;
    double start = 0;
    double end = 0;
    double step = 0;
    double F = 0;
    
    printf("Enter start C temp: ");
    scanf("%lf", &start);
    
    printf("Enter end C temp: ");
    scanf("%lf", &end);

    printf("Enter step value: ");
    scanf("%lf", &step);

    printf("C           F\n");
    printf("*******************\n");
    for(C = start; C < end; C += step)
    {
        F = (C * 1.8) + 32;
    printf("%-8.2lf %8.2lf\n", C, F);
    }


    return 0;
}


//Conditional Compilation Directives processor macros

#include <stdio.h>

#define BUFFER_SIZE 100

#undef DEBUG_MODE

#define DEBUG_MODE
 

int main() 
{
    #ifdef DEBUG_MODE
      printf("Debug mode!\n");
    #endif

    #ifndef DEBUG_MODE
    printf("Not debug mode!\n");
    #else
    printf("Not debug mode 2!\n");
    #endif


    printf("BUFFER_SIZE: %d\n", BUFFER_SIZE);

    return 0;
}

//Reverse an integer

#include<stdio.h>

int main() 
{
    // Declare variables
    int n, reverse = 0, remainder;

    // Prompt the user to enter a number
    printf("Enter a number you want to reverse:\n");
    
    // Read the input number
    scanf("%d", &n);

    // Loop to reverse the number
    while(n != 0)
    {
        // Get the last digit of the original number
        remainder = n % 10;

        // Build the reversed number by appending the last digit
        reverse = reverse * 10 + remainder;

        // Remove the last digit from the original number
        n /= 10;
    }

    // Print the reversed number
    printf("Reversed number = %d", reverse);

    // Return 0 to indicate successful execution
    return 0;
}



/*  Exercise 1

1) Make the Hello World program.
 
2) Comment your program using the doxygen format.
 
3) Compile your program in a terminal.
 
3) Run your program.


Exercise 2

Make a program to print your full name to the terminal.

Your full name shall be defined as a macro in the command line when you compile your program.


Exercise 3

/*In a shell script file build the program in preprocessors.zip. You need to define BUFSIZE=10 when you compile the program.

Exercise 4

Make a program to print a macro(NUMBER) whose value is an integer to the terminal.
   If NUMBER has not been defined, an error message shall be generated and compilation shall be terminated.
   If NUMBER is not equal to 8 or 16, an error message shall be generated and compilation shall be terminated.
   The macro shall be defined when you compile the program.

Exercise 5

Make a program using the printf function in stdio.h, the sizeof operator, and the min/max values defined in limits.h and float.h to display:

Size, min, and max values of char, signed char, and unsigned char
Size, min, and max values of int, unsigned int, short int, unsigned short int, signed long int, unsigned long int, signed long long int, and usigned long long int.
Size, min, and max values of float, double, and long double
Size of enum color { RED, GREEN, BLUE, YELLOW, WHITE, BLACK };

Exercise 6

1. Read a lowercase letter from terminal and convert it to uppercase and then print the converted letter to the terminal.
   2. Generate two random numbers and print them to the terminal.


Exercise 7

1) Make an instance of date_t
2) Read day, month, and year from a terminal
3) Print the instance to the terminal in the format of YYYY-MM-DD


Exercise 8

Evaluate the following program


Exercise 9

Write a program to let a user guess a secret random number in the range of 0 and 99.
   The user shall have a maximum of 10 attempts to guess the secret number.
   After every guess, a message should be presented informing the user if the entered value was correct, too small, or too big.
   After each game, the program shall offer a new game.
   Check for all possible errors.

Exercise 10

Make a program to read a number in the range of 0 and 255 from the standard input using the scanf function in stdio.h 
   and print the binary form of the number to the output. While the entered number is not in the range, 
   the program shall ask for a new number.

Exercise 11

Make a program to read a full name character by character from the standard input.
   The program shall filter, capitalize, and then print it out to the standard output (terminal).
   The filtered name can only contain one space between parts of the name and uppercase/lowercase letters (a-z).
   Don’t use an array to store the name. The entered name shall be handled character by character.

Exercise 12

Make a program to read a positive integer number from the standard input, then sum all the even numbers 
   from 0 to the entered number and print it to the output.

Exercise 13 

Make a program to print all the numbers in the range of 0 and 1000 whose last digit is 7.

E.g. 7, 17, 27,  37, and etc.


Exercise 14

Make a program to read an integer number in the range of 2 and 10000 from the terminal usign the scanf function in stdio.h and check if the number is a prime number or not. 
Until the entered number is not in the range, the program shall ask for a new number.

A prime number is a number which is divisible only by 1 and itself. E.g. 2, 7, 17, 23 and etc.


Exercise 15

Analyse the following program. What is the output? "Hello Linda"


Exercise 16

Make a program to fill a 10-element int array with random numbers, then
   Print the array to the output.
   Sort the array ascending (from the smallest to the largest) and then
   Print the sorted array to the output.


Exercise 17

Make a program to get a string from the standard input, then print the string to the output in the reversed order.
   For example:
   Enter a string: ABCDEF
   Reversed string: FEDCBA


Exercise 18

Write a program to make a 2-dimensional (3x3) array of type int.
   Then ask the user to enter all the elements and print the array to the output.
   Print the array to the output like a table.
   For example:
   123   234  456
   54    678  987
   12    987  100

Exercise 19

Make a program to read a string from the standard input, then split the string by spaces as the delimiter
   and print the substrings to the output.
   Example:
   The input string: I am a C programmer
   The output:
   I
   am
   a
   C
   programmer


   Exercise 20

Make a program to read date and time from a terminal and then
   check if the entered date and time are in the format of YYYY-MM-DD HH:mm:ss or not.   


   Exercise 21

Make a program to fill a 10-element int array with random numbers in the range of 0 and 99, then
   print the array to the output.
   sort the array ascending (from the smallest to the largest) and then
   Print the sorted array to the output.
   To fill, print and sort the array use only pointers.  


   Exercise 22

Make a program to read a string from a terminal and then convert
   the uppercase letters to lowercase and vice versa and
   in the end print the string to the standard output.
   To change and print the string use only pointers.  


   Exercise 23

Make a program to fill a 2D array (2x3) of type int with random numbers in the range of 0 and 99
   and then print the array to the terminal.
   To fill and print the array, use only pointers. 


   Exercise 24

Make a program to read date time in the format of YYYY-MM-DD HH:mm:ss from the input and validate it.
   A leap year is exactly divisible by 4 except for century years (years ending with 00).
   The century year is a leap year only if it is perfectly divisible by 400.
   If the year is a leap year, then February 29 is the leap day.


   Exercise 25

Make a function to fill an array of type int with unique random numbers in the range of 1 and 99.

Make another function to print an array of type int to the output.

Example: An array filled with random numbers: {9, 3, 8, 13, 5, 2, 6, 7, 1, 4}     


  Exercise 26

Make a function named get_person, to create an instance of person_t and then
ask the user to enter values for the members in a terminal and
in the end return the instance.
 

typedef struct {


    int age;

    float height;

    char name[16];

} person_t;

  
  Exercise 27

Make a function to find the largest value in an array of type int.
Make a function to get the average of values in an array of type int. 
Make a function to find a specific value in an array of type int.
If the value exists in the array, index of the element containing the value in the array shall be returned; otherwise -1.  


  Exercise 28

Make a function to compare two strings.

If they are equal, the function shall return 1; otherwise 0.  


  Exercise 29

Make a function to print all prime numbers in the range of m and n to the ouput.

m and n are two unsigned integers.


  Exercise 30

1) Create two pointers, pa and pb to point to a and b; int a = 5; char b = ’s’;

2) Change values of a and b using the pointers.

3) Create a function that takes address of an int and adds 5 to the integer.

4) Create a function pointer, funcptr, to the following function and call it. void say_value(int a) { printf("Value of a is %d\n", a); } 


  Exercise 31

1) Make a function to fill an array of type int with random numbers.

2) Make a function to print an array of type int to the output.

3) Make a function to print a 2D array of type int to the output.

* To handle the arrays use only pointers


  Exercise 32

*1) Make a function to fill an array of type int with random numbers int the range 0 and 99.

2) Make a function to print an array of type int to the output.

3) Make a function to swap values of two int variables.

4) Make a function to sort an array of type int. The function shall accept a function pointer of type compare_t to compare two values

    typedef bool (*compare_t)(int, int);

void sort_array(int *arr, size_t length, compare_t compare);

    a) When you sort the array, the compare function shall be used to compare the elements

    b) To swap the elements, the swap function of step 3 shall be used.

    c) Implement two functions, compare_asc and compare_desc, to sort the array ascending and descending

bool compare_asc(int a, int b); and bool compare_desc(int a, int b);

    d) You shall be able to sort the array ascending and descending by calling sort_array with different compare functions

* To handle the arrays use only pointers


  Exercise 33

Make a program to find the number of years it takes to move 64 disks from a peg to another peg if each move takes 1 second. 86400 seconds a day, 31 536 000 seconds a year


  Exercise 34

Make a function to count number of digits of a given integer number using recursion.
For example: 456 has 3 digits
Make a function to calculate XY using recursion. X and Y are two integers.
For example: 23 = 8.

  
  Exercise 35

Make a program to get a positive integer as an argument from the command line and then check if the number is prime or not.


  Exercise 36

Write a program to make an array of person_t dynamically.

The program shall ask the user to enter length of the array.
Then the program shall allocate memory for the array.
Then the program shall ask the user to enter name and age of each person.
Memory for the name member shall be allocated dynamically.
Then the program shall print all the persons to the output.
In the end the program shall release all the dynamically allocated memory.  


  Exercise 37

Make a stand-alone and self-contained function like strtok to split a string using a delimiter which is one character  


  Exercise 38

Make a C program to define a structure type (user_t) with name(8 letters) and unique id members. Then
   1) Make an array of user_t
   2) Make a function to fill users with random names and unique ids started from 1
   3) Make a function to print the users to a terminal
   4) Make a function to write the users to a binary file
   5) Make a function to read the users from the file
   6) Make a function to change a user name based on its id in the file  


   Exercise 39

Make a utility module to provide the following functionalities:
A function to get the greatest common divisor (gcd) of two unsigned integers greater than 0.
Example: the gcd of 8 and 12 is 4.
A function to get the least common multiple(lcm) of two unsigned integers greater than 0.
Example: the lcm of 4 and 6 is 12.
A function to sort a string in alphabetical order.
Example:
String: jsaNSHosAlPWnSJq
Sorted String: AaHJjlNnoPqSSssW
Make a test program to test the functions using assertion.   

*/




/*We have a 2-dimensional array: matrix[R][C], where R is a rows number and C is the column number.  Write a C program to do some operations on this matrix: 
1.   Make a function to fill the matrix with random even, unique numbers, in the range of min and max. 
2.   Make a function to print the matrix to the terminal. 
3.   Make a function to calculate sum of elements in each row of the matrix and store the result in an element of an array passed to the function.     
The function shall calculate sum for all rows. 
4.   Make a function to calculate sum of elements in each column of the matrix and store the result in an element of an array passed to the function.   
  The function shall calculate sum for all columns. 
  5.   In the program:     Ask the user to enter the array dimensions (R and C)     
  Make a J x K array and fill it with random, even unique numbers in the range of 10 and 1000.     
  Use pointers in your functions. For G, the requirements shall be fulfilled. */



