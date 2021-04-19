#include <stdio.h>
#include <stdlib.h>
struct DateOf_Birth{
   int year;
   int month;
   int day;
};
struct Student{
   char Name[50];
   int ID;
   struct DateOf_Birth dateof_birth;
   int Score;
};
int main()
{
    printf("WELCOM!\n");

    return 0;
}
