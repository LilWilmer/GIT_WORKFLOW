#include<stdio.h>
void GetName(char*);
void GetAge(int*);
void Hello();
void HelloWorldFormat(char* name, int age);

int main(void)
{
    char name[40];
	int age;
    GetName(firstName);
	GetAge(&age);
    HelloWorldFormat(name, age);
    return 0;
}

void Hello()
{
    printf("Hello World!\n");
}

void GetName(char *name)
{
    printf("Enter Full Name: ");
    scanf("%s",name);
}

void GetAge(int *age)
{
    printf("Enter Full Age: ");
    scanf("%d",age);
}

void HelloWorldFormat(char* name)
{
    Hello();
    printf("My name is %s\n",name);
}

void HelloWorldFormat(char* name, int age)
{
    Hello();
    printf("My name is %s and I am %d years old.\n", name, age);
}
