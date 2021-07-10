#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct DateOf_Birth{
   int year;
   int month;
   int day;
}Date_Of_Birth;
typedef struct student{
   char Name[50];
   int ID;
   struct DateOf_Birth dateof_birth;
   int Score;
}Student;
typedef struct listnode {
    struct listnode *next;
    Student entry;
}Listnode;
typedef struct list{
    Listnode *head;
    Listnode *current;
    int size;
    int current_pos;
}List;
void create_student(Student *ps){
    char str[50];
    printf ("enter the name of student \n");
    fflush(stdin);
    fgets(&str,50,stdin);
    //scanf("%s",str);
    strcpy(ps->Name,str);
    printf ("enter the ID of student \n");
    scanf("%d",&(ps->ID) );
    fflush(stdin);
    printf ("enter the Score of student \n");
    scanf("%d",&(ps->Score));
    fflush(stdin);
    printf ("enter the Day of birth of student \n");
    scanf("%d",&(ps->dateof_birth.day));
    fflush(stdin);
    printf ("enter the month of birth of student \n");
    scanf("%d",&(ps->dateof_birth.month));
    fflush(stdin);
    printf ("enter the year of birth of student \n");
    scanf("%d",&(ps->dateof_birth.year));
    fflush(stdin);
}
void create_list(List*pl){
    pl->size=0;
    pl->head=NULL;
    pl->current_pos=0;
    pl->current=NULL;
}
void insert_list(int pos , const Student *ps , List *pl ){
    Listnode *pe= (Listnode*) malloc(sizeof(Listnode));
    strcpy(pe->entry.Name,ps->Name);
    pe->entry.ID=ps->ID;
    pe->entry.Score=ps->Score;
    pe->entry.dateof_birth.day=ps->dateof_birth.day;
    pe->entry.dateof_birth.month=ps->dateof_birth.month;
    pe->entry.dateof_birth.year=ps->dateof_birth.year;
    if (pos==0){
        pe->next=pl->head;
        pl->head=pe;
        pl->current=pl->head;
        pl->current_pos=0;
    }
    else{

        if (pos<= pl->current_pos){
            pl->current_pos=0;
            pl->current=pl->head;
        }
        for (;pl->current_pos!=pos-1 ; pl->current_pos++){
            pl->current=pl->current->next;
        }
        pe->next=pl->current->next;
        pl->current->next=pe;
    }
    pl->size++;
}
int size_of_students(List *pl){
     return pl->size;
}
int main()
{
    printf("%s","WELCOME!\n");
    clock_t t;
    int switch_var;
    Student s;
    List l;
    create_list(&l);
    int pos;
    int num;
    printf("%s","insert the number of students you want to insert \n");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        create_student(&s);
        insert_list(i,&s ,&l);
        printf("insert done\n");
   }
    int sizee= size_of_students(&l);
    printf("size of student is :%d\n",sizee);
    while (1){
        printf ("%s\n","1-insert new student");
        printf ("%s\n","2-terminate");
        scanf("%d",&switch_var);
        switch (switch_var){
            case 1:
                create_student(&s);
                printf("enter the position of the student where it ranges from [0 : %d]\n",size_of_students(&l));
                scanf("%d",&pos);
                t = clock();
                insert_list(pos,&s ,&l);
                printf("insert done\n");
                t = clock() - t;
                double time_taken = ((double)t)/CLOCKS_PER_SEC;
                printf ("size of student is : %d\n",size_of_students(&l));
                printf("inserting took %f seconds to execute \n", time_taken);
                break;
            default:
                break;
        }
        if (switch_var==2){
            break;
        }
   }
    return 0;
}
//test line to check github push
