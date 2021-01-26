#include <stdio.h>
int main(){
    int a;
    float b;
    char c[100];
    printf("Enter a integer value: ");
    scanf("%d",&a);
    printf("%d",a);
    
    printf("\n");
    
    printf("Enter a decimal value: ");
    scanf("%f",&b);
    printf("%f",b);
    printf("\n");
    
    printf("Enter a string value: ");
    scanf("%[^\n]s",c);
    printf("%s",c);
    
    
    
}



