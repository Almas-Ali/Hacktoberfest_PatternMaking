//devika6001

#include <stdio.h>
int main()
{
           int n;
           printf("Enter the number:");
           scanf("%d",&n);
           for(int i=0;i<n;i++)
           {
                      for(int j=n-i-1;j>0;j--)
                                 printf(" ");
                      for(int k=0;k<=i;k++)
                                 printf("%d",k);
                      for(int m=i-1;m>=0;m--)
                                 printf("%d",m);
                      printf("\n");
           }
           for(int i=n-2;i>=0;i--)
           {
                      for(int j=n-i-1;j>0;j--)
                                 printf(" ");
                      for(int k=0;k<=i;k++)
                                 printf("%d",k);
                      for(int m=i-1;m>=0;m--)
                                 printf("%d",m);
                      printf("\n");
           }
           return 0;
}
