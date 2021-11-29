#include <stdio.h>
void checkPrime(int num);

int main() 
{
    int num;     
    printf("Enter the number\n");
    scanf("%d",&num);  

    checkPrime(num); 
    
    return 0;
}
void checkPrime(int num)    
{
     int count=0;
    for(int i=2;i<=num/2;i++)  
    {
        if(num%i==0)
        {
            count++;         
            break;
        }
    }
    if(count!=0)        
    {
        printf("Not a prime number\n");
    }
    else
    {
        printf("Prime number\n");
    }
}
