#include<Stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char last[50],fast[50],email[100];
    printf("Enter the Fast name:");
    scanf("%s",&fast);
    printf("Enter the last name:");
    scanf("%s",&last);
    strcpy(email,fast);
    strcat(email,last);
    strcat(email,"in@gmail.com");
    for(int i=0;email[i]!='\0';i++)
    {
        email[i]=tolower(email[i]);
    }
    printf("Your Email:%s\n",email);
}
