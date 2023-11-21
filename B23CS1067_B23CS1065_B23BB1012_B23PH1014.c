#include <stdio.h>
#include <math.h>
int askChoice(){
    int choice;
    printf("Enter your choice(1-4):\n\t>>> ");
    scanf("%d", &choice);
    
    return choice;
}
void printInstructions(){
    printf("Enter 1 to solve a Linear Equation in one Variable\n");
    printf("Enter 2 to solve a Quadratic Equation\n");
    printf("Enter 3 to solve a system of Linear Equations\n");
    printf("Enter 4 to exit the program\n");
    printf("+------------------------------------------------------------------------+\n");
    printf("| Always write the coefficient before a variable, even if it is 1 or 0.  |\n");
    printf("| For example, instead of x^2 - 2 = 0, write 1x^2 + 0x - 2 = 0.          |\n");
    printf("+------------------------------------------------------------------------+\n\n");
}
int solveLinearEquation(){
    // printf("Linear Equation Solved\n");
    double a;
    double b;
    
        printf("Enter the equation of the form ax+b=0:\n\t>>> ");
        int result = scanf("%lfx  %lf = 0",&a,&b);
        if(result!=2){
            printf("INVALID INPUT. RUN THE PROGRAM AGAIN\n");
            return -1;
        }
    
    
    if(a!=0){
        printf("\t>>> x=%.3lf\n",(-b/a));
    }else{
        if (b==0)
        {
            printf("\t>>> Infinite solutions\n");
        }else{
            printf("\t>>> No solution\n");
        }
        
    }
    return 0;
}
int solveQuadraticEquation(){
    // printf("Quadratic Equation Solved\n");
    double a;
    double b;
    double c;
    
        printf("Enter the equation of the form ax^2+bx+c=0:\n\t>>> ");
        int result = scanf("%lfx^2  %lfx  %lf = 0",&a,&b,&c);
        if(result!=3){
            printf("INVALID INPUT. RUN THE PROGRAM AGAIN\n");
            return -1;
        }
    
    
    double D;
    D = b*b-4*a*c;
    if (D>0)
    {
        printf("\t>>> x=%.2lf, %.2lf\n",(-b+sqrt(D))/(2*a),(-b-sqrt(D))/(2*a));
    }
    if (D==0)
    {
        printf("\t>>> x=%.2lf\n",-b/(2*a));
    }
    if (D<0)
    {
        printf("\t>>> x=%.2lf+%.2lfi, %.2lf-%.2lfi\n",(-b)/(2*a),sqrt(-D)/(2*a),(-b)/(2*a),sqrt(-D)/(2*a));
    }
    return 0;
    
    
}
int solveSysOfLinearEq(){
    // printf("System of Linear Equations Solved\n");
    double a1;
    double b1;
    double c1;
    // printf("Enter the coefficients of the equation a1x+b1y+c1=0: ");
    // scanf("%lf %lf %lf",&a1,&b1,&c1);
    printf("Enter the equation of the form a1x+b1y+c1=0:\n\t>>> ");
        int result = scanf("%lfx  %lfy  %lf = 0",&a1,&b1,&c1);
        if(result!=3){
            printf("INVALID INPUT. RUN THE PROGRAM AGAIN\n");
            return -1;
        }
    
    double a2;
    double b2;
    double c2;
    // printf("Enter the coefficients of the equation a2x+b2y+c2=0: ");
    // scanf("%lf %lf %lf",&a2,&b2,&c2);
    printf("Enter the equation of the form a2x+b2y+c2=0:\n\t>>> ");
        int result1 = scanf("%lfx  %lfy  %lf = 0",&a2,&b2,&c2);
        if(result1!=3){
            printf("INVALID INPUT. RUN THE PROGRAM AGAIN\n");
            return -1;
        }
    
    double D = a1*b2 - b1*a2;
    double D1= -c1*b2 - (-c2*b1);
    double D2= a1*(-c2) - a2*(-c1);
    if(D!=0){
        printf("\t>>> x=%.3lf, y=%.3lf\n",D1/D,D2/D);
    }else{
        if(D1==0 && D2==0){
            printf("\t>>> Infinte Solutions\n");
        }else{
            printf("\t>>> No Solutions\n");
        }
    }
    return 0;

}
int main(){
    printInstructions();
    while(1){
        int choice = askChoice();
        // printf("choice Entered = %d\n",choice);
        if(choice == 1){
            if(solveLinearEquation()==-1){
                return 0;
            }
        }else if (choice == 2)
        {
            
            if(solveQuadraticEquation()==-1){
                return 0;
            }
        }else if (choice == 3)
        {
            if(solveSysOfLinearEq()==-1){
                return 0;
            }
        }else if (choice == 4){
            break;
        }else
        {
            printf("Invalid Choice Entered\n");
            printf("RUN THE PROGRAM AGAIN\n");
            return 0;
        }
        
        
        
    }
}