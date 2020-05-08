#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Please, Enter a number between 1 and 5 to order a food item: ");
scanf("%d",&a);
printf("\n");
switch(a)
{
 case 1: Printf("Food item: Pizza\nPrice- Rs239");
         break;
 case 2: Printf("Food item: Cheeseburger\nPrice- Rs159");
         break;
 case 3: printf("Food item: Red Sauce Pasta\nPrice- Rs199");
         break;
 case 4: printf("Food item: Chicken Biriyani\nPrice- Rs399");
         break;
 case 5: printf("Food item: Non-veg Club Sandwich\nPrice- Rs249");
         break;
 Default: printf("Enter a number between 1 and 5 to obtain a valid result");
}
if(a>=1 && a<=5)
printf("\nEnjoy your meal...!");
getch();
}
