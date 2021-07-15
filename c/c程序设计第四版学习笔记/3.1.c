//将华氏发表示转换为以摄氏发表示的温度
//转换公式 c = 5/9(f-32) ,f表示华氏温度，c标识摄氏温度

#include <stdio.h>
int main()
{
    float f,c;
    f = 64.0;
    c = (5.0/9)*(f-32);
    printf("f=%f\nc=%f\n",f,c);
    return 0;
}