#include<stdio.h>
void input();
void book();
void cancel();
void print();
void close();
void printAvailable();

struct Register{
    int sno;
    char name[30];
    int age;
    char gender;
    char berthp;
    struct Register *link;
}r;
struct Register *root = NULL;

void input(){
    int num;
    printf(" 1. Booking\n");
    printf(" 2. Cancel\n");
    printf(" 3. Print Booked Tickets\n");
    printf(" 4. Print Available Tickets\n");
    printf(" 5. Exit\n");
    scanf("%d",&num);
    system("clear");
    switch(num){
        case 1: printf("Book your Ticket Now\n");
                book();
                break;
        case 2: printf("Cancel your Ticket Now\n");
                cancel();
                break;
        case 3: printf("printing the Tickets\n");
                print();
                break;
        case 4: printf("printing available Tickets\n");
                printAvailable();
                break;
        case 5: printf("Exit\n");
                close();
                break;
        default:printf("Enter Valid Option....\n");
                input();
                break;
    }
}

void book(){
    system("clear");
    char gender,berthp;
    int age;
    struct Register *temp;
    temp = (struct Register*)malloc(sizeof(struct Register));
     printf("In Booking...\n"); 
     printf("Enter Name:\n");
     scanf("%s",temp->name);
     printf("Enter Age:\n");
     scanf("%d",&age);
     temp->age = age;
     printf("Enter Gender M for Male and F for Female:\n");
     scanf("\n%c",&gender);
     temp->gender = gender;
     printf("Enter Berth Preference N for No, L for Lower,U for Upper, W for Window :\n");
     scanf("\n%c",&berthp);
     temp->berthp = berthp;
     temp->link = NULL;
     system("clear");
     printf("Successfully booked!!!\n");
    if(root == NULL){
        temp->sno = 1;
        root = temp;
    }else{
        struct Register *sample;
        sample = root;
        while(sample->link != NULL){
            sample = sample->link;
        }
        temp->sno = sample->sno +1;
        sample ->link = temp;
    }
   input();
}

void cancel(){
    system("clear");
    printf("In Cancel....\n");
    system("clear");
    input();
}

void print(){
  system("clear");
   struct Register *print;
   print = root;
   if(print == NULL){
       printf("No data Available!!!\n");
       input();
   }
   printf("In printing...\n"); 
   printf("The Booked Tickets are...\n");
   printf("S.no | Name | Age | Gender | Berth\n");
   while(print->link != NULL){
   printf(" %d | %s |  %d  |  %c  |  %c\n",print->sno,print->name,print->age,print->gender,print->berthp);
   printf("-------------------------------------------------------\n");
   print = print->link;
   }
   printf(" %d | %s |  %d  |  %c  |  %c\n",print->sno,print->name,print->age,print->gender,print->berthp);
   printf("-------------------------------------------------------\n");
   input();
}

void printAvailable(){
   printf("In PrintAvailabe...\n"); 
   input();
}

void close(){
    char ch;
   printf("Are you Sure Want to close type [Y/y] to confirm or any other button to Cancel\n");
   scanf("\n%c",&ch);
   if(ch=='Y'||ch=='y'){
       printf("Good Bye...!!!");
       return 0;
   }else{
       system("clear");
       input();
   }
}

int main(){
    input();
    return 0;
}