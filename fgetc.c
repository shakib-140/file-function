
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *file4;
    char name;

    file4=fopen("name and age.txt","r" );

    if(file4==NULL)
    {
        printf("file doesn't open");
    }

    else
    {
        printf("file is open\n");
        for(int i=0; i<=30; i++)
        {
            name=fgetc(file4);
            printf("%c",name);
        }
        printf("\n file is opened successfully");
    }



    getch();
}
