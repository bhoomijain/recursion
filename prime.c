#include <stdio.h>
 
int prime ();
 
int main()
{
    int num,result,i;
 
    printf("Enter the number: ");
    scanf("%d", &num);
    result = prime();
    if(result==0)
    {
    	printf("Number is not prime\n");
    }
    else
    {
    	printf("Number is prime\n");
	}
    return 0;
}
 
int prime (int num,int i)
{
    if (num%i==0)
    {
        return (1);
    }
    else
    {
       return 0;
    }
}
