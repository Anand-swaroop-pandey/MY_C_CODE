#include <stdio.h>
void fun1(void);
void fun2(void);
void fun3(void);
void fun4(void);
void fun5(void);
int main()
{
    fun1();
    fun2();
    fun3();
    fun4();
    fun5();
    return 0;
}
void fun1()
{
    if(printf("hello\n"))
    {
    }
}
void fun2()
{
    switch(printf("hello\n"))
    {
    }
}
void fun3()
{
    while(!printf("hello\n"))
    {
    }
}
void fun4()
{
    do
    {
    }
    while(!printf("hello\n"));
}
void fun5()
{
    for(!printf("hello\n");;)
    {
    }
}
