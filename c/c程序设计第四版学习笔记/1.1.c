#include <stdio.h>
int main()
{
    printf("This is a C program.\n");
    //c语言允许两种注释
    //1.以//开始的单行注释
    //2.以/*开始，以*/结束的块式注释
    /*
        但是字符串中的//和/*都不作为注释的开始，而是作为字符串的一部分
    */
    printf("//how do you do!\n");
    printf("/*how do you do!*/\n");
    return 0;
}