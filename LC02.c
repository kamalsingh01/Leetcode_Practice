/*******************************************************************************************
 * Complement of Base10 Integer
 * 
 * The complement of an integer is the integer you get when you flip all the 0's to 1's and 
 * all the 1's to 0's in its binary representation.
 * For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
 * 
 * 
Given an integer n, return its complement.

 

Example 1:

Input: n = 5
Output: 2
Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
Example 2:

Input: n = 7
Output: 0
Explanation: 7 is "111" in binary, with complement "000" in binary, which is 0 in base-10.
Example 3:

Input: n = 10
Output: 5
Explanation: 10 is "1010" in binary, with complement "0101" in binary, which is 5 in base-10.
 

Constraints:

0 <= n < 109
 * 
 */


#include <stdio.h>

int main()
{
    int num,count,tmp;
    int mask;
    // My Solution

    // printf("Enter the number: ");
    // scanf("%d",&num);
    // tmp=num;
    // count = 0;
    // while(tmp!=0)
    // {
    //     tmp=tmp>>1;
    //     count+=1;
    // }
    // while(count)
    // {
    //     tmp=tmp<<1;
    //     tmp=tmp|1;     
    //     count-=1;
    // }
    // num = num^tmp;
    // printf("Complement: %d",num);

    //Love's Solution
    printf("Enter the number: ");
    scanf("%d",&num);
    tmp=num;
    mask=0;
    if(num==0)
    {
        printf("Complement: %d",1);
        exit(0);
    }
    while(tmp)
    {
        mask=(mask<<1)|1;
        tmp=tmp>>1;
    }
    num=num^mask;
    printf("Complement: %d",num);
    return 0;
}