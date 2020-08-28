 #include <stdio.h>
 
int lcm(int,int);
 
int main()
{
    int a, b, result;
    int prime[100];
 
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    result = lcm(a,b);
    printf("LCM of %d and %d is %d\n", a, b, result);
    return 0;
}
 
int lcm(int a, int b)
{ 
    static int temp = 1;
 
    if (temp % a == 0 && temp % b == 0)
    {
        return temp;
    }
    temp++;
    lcm(a, b);
    return temp;
}
