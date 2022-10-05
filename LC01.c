/**************************************Medium************************************************
Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21

Constraints: -231 <= x <= 231 - 1

*/

#include <stdio.h>
#include <limits.h>

int main()
{
    int num,rem;
    int rev=0, flag=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        rem = num%10;
        if((rev>INT_MAX/10)||(rev<INT_MIN/10))  // dividing by 10 prevents overflow.
        {
            printf("0");
            flag=1;
        } 
        rev = rev*10+rem;  
        num/=10;
    }
    // if(flag==0)
    //     printf("\nReverse: %d",rev);
    return 0;
}