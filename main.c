#include<stdio.h>
void GetName(char*);
void Hello();
void HelloWorldFormat(char* name);

int main(void)
{
    char name[20];
    GetName(name);
    HelloWorldFormat(name);
    return 0;
}


void Hello()
{
    printf("Hello World!\n");
}

void GetName(char *name)
{
    printf("Enter Name: ");
    scanf("%s",name);
}

void HelloWorldFormat(char* name)
{
    Hello();
    printf("My name is %s\n",name);
}
