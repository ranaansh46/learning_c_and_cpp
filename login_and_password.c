//program to display hello world on console 
//written by Ansh Rana 
//Contact : @ranaansh46 twitter and instgram
#include <stdio.h>
#include <stdlib.h>
void main()
{
    char a[26]={},b[26]={},c[50]={},d[]="@ranaindustries.in";
    int i,j,asc,ch,cas,str[3]={0,0,0};
    printf("welcome to VIPS sign up page\n");
    printf("Enter a username\n");
    gets(c);
    for(i=0;c[i]!='\0';i++);
    for(j=0;d[j]!='\0';j++,i++)
    {
        c[i]=d[j];
    }
    printf("Username is %s\n",c);
    p1:
    printf("Enter your password :\n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        asc=a[i];
        if(asc>=65&&asc<=90)
        {
            str[0]=1;
        }
        if(asc>=97&&asc<=122)
        {
            str[1]=1;
        }
        if(asc>=48&&asc<=57)
        {
            str[2]=1;
        }
    }
    if(i<=6)
    {
        printf("\nPassword must have atleast 7 characters\n");
        goto p1;
    }
    for(i=0;i!=2;i++)
    {
        if(str[i]==0)
        {
            printf("Password must have \n1. Lower case\n2. Uppercase\n3. Numbers\n");
            goto p1;
        }
    }
    printf("Verify your password\n");
    gets(b);
    for(i=0;a[i]!='\0';i++);
    for(j=0;b[j]!='\0';j++);
    if(i!=j)
    {
        printf("Password not verified start again\n");
        goto p1;
    }
    for(j=0;a[i]!='\0';j++)
    {
        if(a[j]!=b[j])
        {
            printf("Password not verified start again\n");
            goto p1;
        }
    }

    printf("Congratulations! account created successfully\n");
    //menu driven part starts from here
    system("cls");
    //system("c:/windows/system32/calc.exe");
    //to execute an application use path.
    p2:
    printf("Choose an operation to apply on password\n1. Print reverse of password.\n2. Check if password is palindrome or not.\n3. Print user details\n4. Exit\n");
    scanf("%d",&cas);
    switch (cas)
    {
    case 1:
        printf("You have selected to print reverse off the password\nto confirm press 1.\nto return to main menu press 0.\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            for(i=0;a[i]!='\0';i++);
            for(j=0,i=i-1;i>=0;i--,j++)
            b[j]=a[i];
            b[j]='\0';
            puts(b);
            goto p2;
        }
        if(ch==0)
        {
            goto p2;
        }
        else
        {
            printf("invalid confirmation\n");
            goto p2;
        }
        break;
    case 2:
        printf("You have selected to check if password is palindrome.\nto confirm press 1.\nto return to main menu press 0.\n");
        scanf("%d",&cas);
        if(cas==1)
        {
         for(i=0;a[i]!='\0';i++);
         for(j=0,i=i-1;i>=0;i--,j++)
         {
            b[j]=a[i];
            b[j]='\0';
         }
         for(i=0;a[i]!='\0';i++)
         {
             if(a[i]!=b[i])
             {
                 printf("\nnot a palindrome");
             }
             else
                printf("\npalindrome");
         }
        }
        if(cas==0)
        {
            goto p2;
        }
        break;
    case 3:
        printf("Username : %s\n",c);
        printf("Password : %s\n",a);
        goto p2;
        break;
    case 4:
         printf("Do you want to exit the program.\nto confirm press 1.\nto return to main menu press 0.\n");
        scanf("%d",&cas);
        if(cas==1)
        {
            exit(0);
        }
        if(cas==0)
        {
            goto p2;
        }
        else
        {
            printf("invalid confirmation\n");
            goto p2;
        }
    default:
        printf("invalid choice");
        goto p2;
    }
}
