//devika6001

#include <stdio.h>
int main()
{
           int num;
           printf("Enter the number:");
           scanf("%d",&num);
           for(int i=0;i<num;i++)
           {
                      for(int j=num-i;j>0;j--)
                                 printf("*");
                      printf("\n");
           }
           printf("\n");
           for(int i=1;i<=num;i++)
           {
                      for(int j=i;j>0;j--)
                                 printf("*");
                      printf("\n");
           }
           return 0;
}
