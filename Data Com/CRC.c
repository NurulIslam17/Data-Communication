#include<stdio.h>
#include<string.h>
int main()
{
    char d[100], k[100],temp[100],k1[10],rem[30];
    int i,j,count=0,Datal=0,Keyl=0;
    printf("Sender End:\n-----------\n");

    printf("Enter data: ");
    scanf("%s",d);
    Datal=strlen(d);

    printf("Enter key :");
    scanf("%s",k);
    Keyl=strlen(k);

    for(i=0; i<(Keyl-1); i++)
        strcat(d,"0");
    printf("\n Codeword :%s",d);

    for(i=0; i<Keyl; i++)
    {
        temp[i]=d[i];
    }
    temp[i]='\0';
    printf("\nTemporary data : %s\n",temp);

    for(i=0; i<(Datal-1); i++)
    {
        if(temp[0]=='0')
        {
            for(j=0; j<Keyl; j++)
                k1[j]='0';
            k1[j]='\0';

        }

        else
        {
            for(j=0; j<Keyl; j++)
                k1[j]=k[j];
        }

        for(j=(Keyl-1); j>0; j--)
        {
            if(temp[j]==k[j])
                rem[j-1]='0';
            else
                rem[j-1]='1';
        }

        strcpy(temp,rem);
        temp[Keyl-1]=d[Datal+i];

    }
    rem[i]='\0';
    printf("\n Remainder : %s",rem);
}
