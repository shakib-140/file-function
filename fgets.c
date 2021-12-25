#include<stdio.h>
#include<conio.h>
int main()
{
    char name[20];
    int age,i=0;
    char ch;
    FILE *file3;
    file3=fopen("name and age.txt","w");
    if(file3==NULL)
    {
        printf("file doesn,t open\n");
    }
    else
    {
        printf("file is open\n");
        printf("ENTER YOUR NAME=");
        gets(name);
        int length=strlen(name);
        fputs(name,file3);
         //fputs("\n",file3);

    }
}
