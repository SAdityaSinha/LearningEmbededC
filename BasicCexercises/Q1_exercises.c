/*

1. program to check whether the number is even or odd(with and without using arithmetic ops)
2. program to swap two numbers (without and without third variable )
3. program to check whether two numbers are equal (with and without == operator)
4. program to find the sum of digits of a number (with and without recursion)
5. program to reverse the digits of a number
6. program to find the sum of even and odd numbers 
7. program to print a identity matrix in simplest logic
8. WACP to multiply 2 numbers without using * operator
9. WACP to find the greatest/smallest  of 3 numbers
10.WACP to find the greatest/smallest of 3 numbers using ternary operator
11.WACP to find the area of a triangle, square, circle, volume of a sphere 
  12.WACP to find the consonants and vowels in a sentence.
13.WACP to find whether a number is a prime or not.
  14.WACP to print all the factors of a number 
15.WACP to print convert lower case characters to upper case and vicecersa in a string.
16.WACP to print all visible ASCII values and ASCII characters using a C program.
17.WACP to copy one string to another.
18.WACP to reverse a string 
19.WACP to concatenate one string to another
20.WACP to find the factorial of a number
21. WACP to find whether a number is strong number or not
22. WACP to find whether a number a amstrong number or not
23. WACP to find whether a processor is endian or not using typecast
24. WACP to use preprocessor constants in GCC
25. WACP to check whether a number is pallindrome or not.
26. WACP to check whether the entered year is a leap year or not .
27. WACP read a bit of a byte at a particular position.
28. WACP to set a bit of a byte at a particular position.
29. WACP to reset a bit of a byte at a particular position.
30. WACP to toggle a bit of a byte at a particular position.
31. WACP to perform all 4 operations using a macro.
32.  
33. 
34.
35.
36.

*/





#include <stdio.h>
 
void main()
{
    int i, num, odd_sum = 0, even_sum = 0;
 
    printf("Enter the value of num\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            even_sum = even_sum + i;
        else
            odd_sum = odd_sum + i;
    }
    printf("Sum of all odd numbers  = %d\n", odd_sum);
    printf("Sum of all even numbers = %d\n", even_sum);
}

#include <stdio.h>
void main()
{
    int m, n;
 
    printf("Enter the values for M and N\n");
    scanf("%d %d", &m, &n);
    if (m ^ n)
        printf("M and N are not equal\n");
    else
        printf("M and N are equal\n");
}

#include <stdio.h>
 
int main(void)
{
    int num, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
 
    // Keep dividing until the number is not zero
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("Sum of digits of the number is %d", sum);
    return 0;
}


using recursion

#include <stdio.h>
 
int sum (int a);
 
int main()
{
    int num, result;
 
    printf("Enter the number: ");
    scanf("%d", &num);
    result = sum(num);
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;
}
 
int sum (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }
}


