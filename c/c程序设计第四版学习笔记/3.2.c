#include <stdio.h>

int main()
{
    int num = 123456789;
    int num2 = 1234567890;
    printf("%d\t%d\n",num,num);
    printf("%d\v%d\n",num,num);
    printf("%d\r%d\n",num,num2);
}