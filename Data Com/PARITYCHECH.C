#include<stdio.h>
int main()

{
     char data[50],p;
     int i=0,count=0;
     gets(data);

     while(data[i]!='\0')
        {
         if(data[i]=='1')
            {
             count++;
             }
            i++;
         }
     if(count%2==0)
         {
         strcat(data, "0");
         p='0';

         }

     else
    {
         strcat(data,"1");
         p='1';

    }


     printf("\n Transmitted data: %s",data);

     char c=data[0];
    i=0;
     while(data[i+1]!='\0')
        {
         c=c^data[i+1];

       i++;
       }
     printf("\n Received data : %d",c);

     return 0;
    }
