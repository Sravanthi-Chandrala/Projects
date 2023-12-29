//1 Write a program to print area of rectangle
# include <stdio.h>
int main(){
    int length, breadth, area;
    printf("Enter the legth of the Rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);
    area=length*breadth;
    printf("Area of the Rectangleis = %d",area);
    return 0;
}


//2 write a program to print the perimeter of the rectangle
# include <stdio.h>
int main(){
    int length, breadth, perimeter;
    printf("Enter the length of the rectangle:");
    scanf("%d",&length);
    printf("Enter the breadth of the rectangle:");
    scanf("%d", &breadth);
    perimeter=2*(length+breadth);
    printf("The perimeter of the Rectangle is=%d",perimeter);
    return 0;
}

//3 area of sqare
# include <stdio.h>
int main(){
    int side, area;
    printf("enter the side of sqare:");
    scanf("%d",&side);
    area=side*side;
    printf("Area of Square=%d",area);
    return 0;
}

// 4. Perimeter of a square p=4a
#include <stdio.h>
int main(){
    int side, perimeter;
    printf("enter the side of a square:");
    scanf("%d", &side);
    perimeter=4*side;
    printf("The Perimeter of the square is= %d",perimeter);
    return 0;
}

//5.  Area of triangle 
#include <stdio.h>
int main(){
    int base, heigth, area;
    base=10;
    heigth=20;
    area=0.5*base*heigth;
    printf("The area of triangle is=%d",area);
    return 0;
}

//6 Perimeter of a triangle 
# include <stdio.h>
int main(){
    int side1, side2, side3, perimeter;
    side1=10;
    side2=10;
    side3=20;
    perimeter=side1+side2+side3;
    printf("The perimeter of the triangle is=%d",perimeter);
}