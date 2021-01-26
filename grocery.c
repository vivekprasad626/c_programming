/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int customerid;
    int age;
    char customertype[0]; //'R' Regular, 'T' Temporary
    int rate;
    int quantity; 
    char itempurchased[0]; // 'R' Rice, 'W' Wheat, 'S' Suger
    printf("Enter the customer id :");
    scanf("%d",&customerid);
    printf("Enter the age :");
    scanf("%d",&age);
    printf("Enter customer type: R for Regular, T Temporary:");
    scanf("%s", customertype);
    printf("Enter rate of the item (int only):");
 scanf("%d",&rate);
 printf("Enter the item to purchase: R for Rice, W for Wheat, S for Suger:");
 scanf("%s", itempurchased);
 printf("Enter the quantity of purchase(int only):");
 scanf("%d",&quantity);
 int bill;
 float gst;
 bill=rate*quantity;
 gst=bill*0.05; //0.05
 int finalbill;
 finalbill= bill + gst;
 printf("\n");
 printf("===Final bill===");
 printf("\n");
 printf("customerid: %d", customerid);
 printf("\n");
 printf("customertype:%s", customertype);
 printf("\n");
 printf("age:%d", age);
 printf("\n");
 printf("Item purchased : %s", itempurchased);
 printf("\n");
 printf("Rate: %d", rate);
 printf("\n");
 printf("quantity: %d", quantity);
 printf("\n");
 printf("Total GST %.2f%", gst);
 printf("\n");
 printf("finalbill: %d", finalbill);
 printf("\n");
 return 0;
 return 0;
}
