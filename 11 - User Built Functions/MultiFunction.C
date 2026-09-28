/*
			Author - Ishaan Chauhan
			DOC - 26 / 09 / 2026
			Objective - Task by Dhiraj Sir
*/

#include<stdio.h>
#include<conio.h>

/* ---------- Function Declarations ---------- */
void evenOdd(int n);
int square(int n);
int cube(int n);
float CtoF(float c);
int maxNum(int a, int b);
float circleArea(float radius);
float rectArea(float length, float width);
float triArea(float base, float height);
float SI(float p, float r, float t);

void main()
{
    int choice;
    int a, b, n;
    float x, y, z;

    clrscr();

    printf("---------- MENU ----------\n");
    printf("1. Check Even or Odd\n");
    printf("2. Find Square of a Number\n");
    printf("3. Find Cube of a Number\n");
    printf("4. Convert Celsius to Fahrenheit\n");
    printf("5. Find Maximum of Two Numbers\n");
    printf("6. Area of Circle\n");
    printf("7. Area of Rectangle\n");
    printf("8. Area of Triangle\n");
    printf("9. Calculate Simple Interest\n");
    printf("---------------------------\n");
    printf("Enter your choice (1-9): ");
    scanf("%d", &choice);

    switch(choice)
    {
	case 1:
	    printf("Enter a number: ");
	    scanf("%d", &n);
	    evenOdd(n);
	    break;

	case 2:
	    printf("Enter a number: ");
	    scanf("%d", &n);
	    printf("Square = %d", square(n));
	    break;

	case 3:
	    printf("Enter a number: ");
	    scanf("%d", &n);
	    printf("Cube = %d", cube(n));
	    break;

	case 4:
	    printf("Enter temperature in Celsius: ");
	    scanf("%f", &x);
	    printf("Temperature in Fahrenheit = %.2f", CtoF(x));
	    break;

	case 5:
	    printf("Enter two numbers: ");
	    scanf("%d %d", &a, &b);
	    printf("Maximum = %d", maxNum(a, b));
	    break;

	case 6:
	    printf("Enter radius of circle: ");
	    scanf("%f", &x);
	    printf("Area of Circle = %.2f", circleArea(x));
	    break;

	case 7:
	    printf("Enter length and width of rectangle: ");
	    scanf("%f %f", &x, &y);
	    printf("Area of Rectangle = %.2f", rectArea(x, y));
	    break;

	case 8:
	    printf("Enter base and height of triangle: ");
	    scanf("%f %f", &x, &y);
	    printf("Area of Triangle = %.2f", triArea(x, y));
	    break;

	case 9:
	    printf("Enter Principal, Rate and Time: ");
	    scanf("%f %f %f", &x, &y, &z);
	    printf("Simple Interest = %.2f", SI(x, y, z));
	    break;

	default:
	    printf("Invalid choice! Please enter a number between 1 and 9.");
    }

    getch();
}//main end

/* ---------- Function Definitions ---------- */

// even or odd
void evenOdd(int n)
{
    if(n % 2 == 0)
	printf("%d is Even", n);
    else
	printf("%d is Odd", n);
}//evenOdd end

// square of a number
int square(int n)
{
    return n * n;
}//square end

//cube of a number
int cube(int n)
{
    return n * n * n;
}//cube end

// Celsius to Fahrenheit
float CtoF(float c)
{
    float f;
    f = (c * 9 / 5) + 32;
    return f;
}//CtoF end

//the maximum of two numbers
int maxNum(int a, int b)
{
    if(a > b)
	return a;
    else
	return b;
}//maxNum end

//area of a circle
float circleArea(float radius)
{
    float area;
    area = 3.14 * radius * radius;
    return area;
}//circleArea end

// area of a rectangle
float rectArea(float length, float width)
{
    return length * width;
}//rectArea end

//area of a triangle
float triArea(float base, float height)
{
    return 0.5 * base * height;
}//triArea end

// simple interest = (P * R * T) / 100
float SI(float p, float r, float t)
{
    float si;
    si = (p * r * t) / 100;
    return si;
}//SI end
