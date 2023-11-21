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
    printf("DONT ENTER CHARACTERS AS THIS MIGHT BREAK THE PROGRAM\n");
}
void solveLinearEquation(){
    // printf("Linear Equation Solved\n");
    printf("Enter the coefficients of the equation ax+b=0: ");
    double a;
    double b;
    scanf("%lf %lf",&a,&b);
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
}
void solveQuadraticEquation(){
    // printf("Quadratic Equation Solved\n");
    double a;
    double b;
    double c;
    printf("Enter the coefficients of the equation ax^2+bx+c=0: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    double D;
    D = b*b-4*a*c;
    if (D>0)
    {
        printf("\t>>> x=%.2lf,%.2lf\n",(-b+sqrt(D))/(2*a),(-b-sqrt(D))/(2*a));
    }
    if (D==0)
    {
        printf("\t>>> x=%.2lf\n",-b/(2*a));
    }
    if (D<0)
    {
        printf("\t>>> x=%.2lf+%.2lfi,%.2lf-%.2lfi\n",(-b)/(2*a),sqrt(-D)/(2*a),(-b)/(2*a),sqrt(-D)/(2*a));
    }
    
    
    
}
void solveSysOfLinearEq(){
    // printf("System of Linear Equations Solved\n");
    double a1;
    double b1;
    double c1;
    printf("Enter the coefficients of the equation a1x+b1y+c1=0: ");
    scanf("%lf %lf %lf",&a1,&b1,&c1);
    double a2;
    double b2;
    double c2;
    printf("Enter the coefficients of the equation a2x+b2y+c2=0: ");
    scanf("%lf %lf %lf",&a2,&b2,&c2);
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


}
int main(){
    printInstructions();
    while(1){
        int choice = askChoice();
        // printf("choice Entered = %d\n",choice);
        if(choice == 1){
            solveLinearEquation();
        }else if (choice == 2)
        {
            solveQuadraticEquation();
        }else if (choice == 3)
        {
            solveSysOfLinearEq();
        }else if (choice == 4){
            break;
        }else
        {
            printf("Invalid Choice Entered\n");
        }
        
        
        
    }
}