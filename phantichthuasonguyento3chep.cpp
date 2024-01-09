#include<stdio.h>
main()
{ 
      int t; 
      scanf("%d",&t); 
      for(int x=1;x<=t;x++)
      { 
              int n; 
              scanf("%d",&n); 
              printf("Test %d: ",x); 
              for(int i=2;i<=n;i++)
              { 
                      int count =0; 
                      while(n%i==0)
                      { 
                                   n/=i; 
                                   count++; 
                      } 
                      if(count)
                      { 
                               if(n>=1) 
                               printf("%d(%d)",i,count); 
                               if(n>i) 
                               printf(" "); 
                      } 
              } 
              printf("\n"); 
      } 
}
