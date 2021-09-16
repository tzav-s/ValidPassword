#include <stdio.h>
#include "simpio.h"

long encode (long i);
bool check(long final_code );

int main()
{
    int lower,upper,i;
    long final_code;
    printf("Lower limit:");
    lower=GetInteger();
    printf("Upper limit:");
    upper=GetInteger();

    for(i=lower;i<=upper;i++)
    {
        final_code=encode(i);
    if (check(final_code))
        {
            printf("Code:%d",i);
            printf(" Encoding:%ld",final_code);
            printf(" isValid:yes\n");
        }
        else
        {
            printf("Code:%d",i);
            printf(" Encoding:%ld",final_code);
            printf(" isValid:no\n");

        }
    }
    system("PAUSE");
    return 0;
}
long encode(long i )
{
    int control_dig;
    int extra_code;
    extra_code=i*100;
    control_dig=(98-(i*100)%97)%97;

    return (extra_code+control_dig);
}
bool check(long final_code)
{
    if(final_code%97==1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
