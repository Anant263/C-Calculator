#include <stdio.h>
#include <math.h>

int main(){
    int choice;
    float a, b, result;
    
    do{
        printf("\n-----------Caculator-----------\n");
        printf("1.Addition (+)\n");
        printf("2.Subtraction (-)\n");
        printf("3.Division (/)\n");
        printf("4.Multiplication (x)\n");
        printf("5.Square (²)\n");
        printf("6.Square Root (√)\n");
    
        printf("Enter Your Choice: ");
        scanf("%d",&choice);
    
        switch(choice){
            case 1:
            printf("Enter any two number for addition:");
            scanf("%f%f",&a,&b);
            result = a+b;
            printf("Result=%f\n",result);
            break;
        
            case 2:
            printf("Enter any two number for Subtraction:");
            scanf("%f%f",&a,&b);
            result = a-b;
            printf("Result=%f\n",result);
            break;
        
            case 3:
            printf("Enter any two number for Division:");
            scanf("%f%f",&a,&b);
            if(b != 0) {
                    result = a/b;
                    printf("Result = %f\n", result);
                } else {
                    printf("Division by zero is not allowed.\n");
                }
            break;
            
            case 4:
            printf("Enter any two number for Multiplication:");
            scanf("%f%f",&a,&b);
            result = a*b;
            printf("Result=%f\n",result);
            break;
            
            case 5:
            printf("Enter any number for Square:");
            scanf("%f",&a);
            result = a*a;
            printf("Result=%f\n",result);
            break;
            
            case 6:
            printf("Enter any number for Square Root:");
            scanf("%f",&a);
            result = sqrt(a);
            printf("Result=%f\n",result);
            break;
            
            default:
            printf("Invalid choice.\n");
        }
    } while(choice!=0);
    return 0;
}