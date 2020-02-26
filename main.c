#include<stdio.h>
void GetName(char*);
void Hello();

int main(void)
{
    char name[20];
    GetName(name);
    printf("Name = %s\n",name);
    Hello();
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
