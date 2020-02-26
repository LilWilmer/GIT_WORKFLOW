#include<stdio.h>
void GetName(char*);

int main(void)
{
    char name[20];
    GetName(name);
    printf("Name = %s\n",name);
    return 0;
}

void GetName(char *name)
{
    printf("Enter Name: ");
    scanf("%s",name);
}
