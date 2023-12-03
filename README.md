# EquationSolver
This C program can solve various types of equations, including linear equations, quadratic equations, and systems of linear equations.

## Environment Setup

Make sure you have a C compiler installed on your system. If not, you can install one such as GCC.
Please refer to the appropriate documentation for installing a C compiler for your Operating System.

## Dependencies

This program has no external dependencies.

## Execution Instructions

1. **Download the Repository:**

    Click the green "Code" button on the GitHub repository page and select "Download ZIP." Extract the downloaded ZIP file to a location of your choice.

2. **Compile the Program:**

    Once you have the file "B23CS1067_B23CS1065_B23BB1012_B23PH1014.c", you just need to compile and run it.

## Usage

Follow the on-screen instructions to choose the type of equation you want to solve:

- Enter `1` to solve a Linear Equation in one Variable.
- Enter `2` to solve a Quadratic Equation.
- Enter `3` to solve a System of 2 Linear Equations.
- Enter `4` to solve a System of 3 Linear Equations.
- Enter `5` to exit the program.

>**Note: Always write the coefficient before a variable, even if it is 1 or 0. For example, instead of x^2-2=0, write 1x^2+0x-2=0. Avoid unnecessary spaces within equations.**

## Examples

### Linear Equation

```
Enter your choice(1-5):
        >>> 1
Enter the equation of the form ax+b=0:
        >>> 2x+5=0
        >>> x=-2.500
```

### Quadratic Equation

```
Enter your choice(1-5):
        >>> 2          
Enter the equation of the form ax^2+bx+c=0:
        >>> 1x^2-3x+2=0
        >>> x=2.00, 1.00
```

### System of 2 Linear Equations

```
Enter your choice(1-5):
        >>> 3
Enter the equation of the form a1x+b1y+c1=0:
        >>> 2x+3y+4=0
Enter the equation of the form a2x+b2y+c2=0:
        >>> 1x-1y-3=0
        >>> x=1.000, y=-2.000
```

### System of 3 Linear Equations

```
Enter your choice(1-5):
        >>> 4
Enter the equation of the form a1x+b1y+c1z+d1=0:
        >>> 1x+2y+3z+4=0
Enter the equation of the form a2x+b2y+c2z+d2=0:
        >>> 2x+4y+6z+8=0
Enter the equation of the form a3x+b3y+c3z+d3=0:
        >>> 3x+6y+8z+13=0  
        >>> Infinite Solution
```

## Contributors

- Shardul Vikram Singh - B23CS1067
- Sarthak Bhiwaji Kolekar - B23CS1065
- Bhaskar Sharma - B23BB1012
- Murali Krishna - B23PH1014

---
