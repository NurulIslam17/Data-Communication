#include<stdio.h>
#include<string.h>
int main()
{
    int i,p,c=0,k,n;
    char data[100];
    printf("Enter Binary bits  : ");
    scanf("%s",data);
    n=strlen(data);
    printf("\n\nAfter stuffing : ");
    for(i=0; i<n; i++)
    {
        if(data[i]=='1')
            c++;

        else

            c=0;
        if(c==5)
        {
            p=i+1;
            for(i=n; i>p; i--)
                data[i]=data[i-1];

            data[i]='0';
            c=0;
            n++;
        }
    }
    data[i]='\0';
    printf("%s ",data);
    n=strlen(data);
    c=0,i=0;
    printf("\n\nAfter de-stuffing : ");

    while (i<n)
    {
        if(data[i]=='1')
        {
            i++;
            c++;
            if(c==5)
            {
                for(k=i; k<n+1; k++)
                    data[k]=data[k+1];
            }


        }
        else
        {
            i++;
            c=0;
        }
    }
    data[i]='\0';

    for(i=0; i<n; i++)
        printf("%c",data[i]);

    printf("\n\n");
}
