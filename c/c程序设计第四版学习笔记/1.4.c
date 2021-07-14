#include <stdio.h>
//全局声明
int a,b;

int main(void)
{

    a = b = 123;
    int printab(int c);
    printab(456);
    printf("a 的值是 %d, b的值是 %d\n",a,b);

}

int printab(int c)
{
    a = b = c;
    printf("a 的值是 %d, b的值是 %d\n",a,b);
    return 0;
}