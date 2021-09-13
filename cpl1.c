#include <stdio.h>

int main()  {
    printf("This is a calculator application and the first CPL question");
    printf("Enter the choice as 1 for addition,2 for subtraction,3 for multiplication,4 for division \n");
    int choice,a,b,c;
    scanf(" %d", &a);
    scanf(" %d", &b);
    printf("\n Choice=");
    scanf("%d \n", &choice);

    if(choice==1){
        printf("you choose for addition");
    
        c=a+b;
        printf("the result is:%d",c);
    }
    if(choice==2){
        printf("you choose for Subtract");
        
        c=a-b;
        printf("the result is:%d",c);
        
    }
    if(choice==3){
        printf("you choose for multiplication");

        c=a*b;
        printf("the result is:%d",c);
    }
    if(choice==4){
        printf("you choose for division");
        
        c=a/b;
        printf("the result is:%d",c);
    }
    return 0;
}