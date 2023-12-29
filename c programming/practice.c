// // C - program to print a sentence
// # include <stdio.h>
// int main(){
//     printf("Wishing you Happy vinayaka chamithi to all");
//     return 0;
// }


// // C - program to print an integer entered by the user
// # include <stdio.h>
// int main(){
//     int integer;
//     printf("Enter an integer:");
//     scanf("%d",&integer);
//     printf("The entered integer is: %d",integer);
//     return 0;
// }


// // C - program to add two integers entered by the user
// # include <stdio.h>
// int main(){
//     int integer1, integer2;
//     printf("Enter the first integer:");
//     scanf("%d",&integer1);
//     printf("Enter the second integer:");
//     scanf("%d",&integer2);
//     int sum=integer1+integer2;
//     printf("The sum of two integers is:%d+%d=%d",integer1,integer2,sum);
//     return 0;
// }


// //C -program to display ASCII value of a charecter entered by the user
// # include <stdio.h>
// int main(){
//     char chr;
//     printf("Enter any character:");
//     scanf("%c", &chr);
//     printf("The ASCII value of a given character is:%d",chr);
// }


// //C - program to print quotient and remainder
// # include <stdio.h>
// int main(){
//     int dividened, divisor, quotient, remainder;
//     printf("Enter the dividend: ");
//     scanf("%d", &dividened);
//     printf("Enter the divisor: ");
//     scanf("%d", &divisor);
//     //quotient
//     quotient=dividened/divisor;
//     printf("Quotient=%d\n",quotient);
//     //remainder
//     remainder=dividened%divisor;
//     printf("Remainder=%d",remainder);
// }


// //swaping using temporal variable
// # include <stdio.h>
// int main(){
//     double first, second, temp;
//     printf("Enter first number: ");
//     scanf("%lf", &first);
//     printf("Enter second number: ");
//     scanf("%lf", &second);
//     //value is first is assigned to temp
//     temp=first;
//     //value of second is assigned to second
//     first=second;
//     //value of temp is assigned to temp
//     second=temp;
//     //%.2lf displays numbers upto 2 decimal points
//     printf("\nAfter swapping, first number = %.2lf\n",first);
//     printf("After swapping, second number=%.2lf",second);
//     return 0;
// }


// Write a program to print student pass or fail using OR and And operators
//  # include <stdio.h>
//  int main(){
//      int eng, mats, phy,chem;
//      printf("Enter the marks: ");
//      scanf("%d%d%d%d",&eng, &mats, &phy, &chem);
//      if(eng>35&&mats>35&&phy>35&&chem>35){
//          printf("Students is pass in all the subjects");
//      }
//      else{
//          printf("student is fail");
//      }
//      return 0;
//  }


// write a program to print whether the entered character is vowel or consonant
// #include <stdio.h>
//  int main(){
//      char aa;
//      printf("Enter any character:");
//      scanf("%c",&aa);
//      if(aa=='A'|| aa=='a'|| aa=='E'|| aa=='e'|| aa=='I'|| aa=='i'|| aa=='O' || aa=='o' || aa=='U' || aa=='u'){
//          printf("Entered character is vowel");
//      }
//      else{
//          printf("Entered character is consonant");
//      }
//      return 0;
//  }


// if else if
//  Program to relate two integers using =, > or < symbol

// #include <stdio.h>
// int main() {
//     int number1, number2;
//     printf("Enter two integers: ");
//     scanf("%d %d", &number1, &number2);

//     //checks if the two integers are equal.
//     if(number1 == number2) {
//         printf("Result: %d = %d",number1,number2);
//     }

//     //checks if number1 is greater than number2.
//     else if (number1 > number2) {
//         printf("Result: %d > %d", number1, number2);
//     }

//     //checks if both test expressions are false
//     else {
//         printf("Result: %d < %d",number1, number2);
//     }

//     return 0;
// }

// write a program to print student pass or fail
// write a program to print whether the entered character is vowel or cosonat
// #include <stdio.h>
// int main()
// {
//     char character;
//     printf("Enter any character:");
//     scanf("%c", &character);
//     if (character == 'A')
//     {
//         printf("Entered character %c is vowel", character);
//     }
//     else if (character == 'E')
//     {
//         printf("Entered character %c is vowel", character);
//     }
//     else if (character == 'I')
//     {
//         printf("Entered character %c is vowel", character);
//     }
//     else if (character == 'O')
//     {
//         printf("Entered character %c is vowel", character);
//     }
//     else if (character == 'U')
//     {
//         printf("Entered character %c is vowel", character);
//     }
//     else
//     {
//         printf("Entered character %c is -consonant", character);
//     }
//     return 0;
// }

// Write a program to print student class grade
// #include <stdio.h>
// int main(){
//     int marks;
//     printf("Enter marks:");
//     scanf("%d", &marks);
//     if(marks>85 && marks<=100)
//     {
//         printf("Congrats! You scored grade A...");
//     }
//     else if(marks>60 && marks<=85)
//     {
//         printf("You scored grade B+...");
//     }
//      else if(marks>40 && marks<=60)
//     {
//         printf("You scored grade B...");
//     }
//      else if(marks>30 && marks<=40)
//     {
//         printf("You scored grade C...");
//     }
//     else{
//         printf("Sorry You are FAIL...");
//     }
//     return 0;
// }
// Addition Multiplication Substaction Division if n=1//add if n=2//sublike
// #include <stdio.h>
// int main(){
//     int  n,num1, num2, add, mul, div, sub;
//     printf("Enter Two numbers:");
//     scanf("%d%d",&num1, &num2);
//     printf("Enter n value:");
//     scanf("%d",&n);
//     if(n==1){
//         add=num1+num2;
//         printf("Addition of two numbers=%d",add);
//     }
//     else if(n==2){
//         mul=num1*num2;
//         printf("Multiplication of two numbers=%d",mul);
//     }
//      else if(n==3){
//         sub=num1-num2;
//         printf("substraction of two numbers=%d",sub);
//     }
//      else if(n==4){
//         div=num1/num2;
//         printf("Division of two numbers=%d",div);
//     }
//     else{
//         printf("invalid number");
//     }
//     return 0;
// }



// biggest among three integers

// #include <stdio.h>
// int main(){
//     int a, b, c;
//     printf("enter three values:");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>b && a>c){
//         printf("a is big");
//     }
//     else if(b>a && b>c){ffffff
//         printf("b is big");
//     }
//     else{
//         printf("c is big");
//     }
//     return 0;
// }


