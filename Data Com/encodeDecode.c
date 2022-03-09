#include<stdio.h>
#include<string.h>

int main()
{
    char str[50],temp[50];
    int i,j,k;
    char C;
    printf("Enter string : ");
    gets(str);
    printf("Enter key :");
    scanf("%d",&k);

//-----------------------------------Encoder -----------------------------------------------//
    for(i=0; str[i]!='\0'; i++)
    {
        C=str[i];
        if(C>='A' && C<='Z')
        {
            C=C+k;
            if(C>'Z')
                C=C-'Z'+'A'-1;
            temp[i]=C;
        }
        else
        {
            C=C+k;
            if(C>'z')
                C=C-'z'+'a'-1;
            temp[i]=C;
        }
    }
    temp[i]='\0';
    printf("Encoded String : %s",temp);

//-------------------------Decoding-----------------------------------//

    for(i=0; temp[i]!='\0'; i++)
    {
        C=temp[i];
        if(C>='A' && C<='Z')
        {
            C=C-k;
            if(C<'A')
                C=C+26;
            temp[i]=C;
        }
        else
        {
            C=C-k;
            if(C<'a')
                C=C+26;
            temp[i]=C;
        }
    }
    temp[i]='\0';
    printf("\nDecoded String : %s",temp);
}
