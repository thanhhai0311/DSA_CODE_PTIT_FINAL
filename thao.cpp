//#include <stdio.h>
//int main()
//{
//    int n;
//    printf("Nhap chieu cao hinh tam giac: ");
//    scanf("%d", &n);
//     
//    int i,j;
//   //duy?t v�ng l?p i d? duy?t n h�ng
//    for(i = 0; i < n; i++){
//      //V�ng l?p j d? v? s? in ra s? lu?ng * c?n thi?t ? m?i h�ng
//        for(j = n-i; j < n; j++){
//            printf("* ");//In ra c�c k� t? * t?o n�n h�nh tam gi�c
//        }
//        printf("\n");
//    }
//}


#include<bits/stdc++.h>

int main(void)
{
   int midx, midy;
   initwindow(800,600);
   srand(time(0));
   float x=0,  r=100, x1=200,y1=100 , set=0 ;
   for(float i=0;i<1000;i=i+0.003)
   {
     if(kbhit()){
         exit(0);
     }
     float b=+100*cos(i*10);
     int a1=x1+r+(b)*sin(i);
  int b1=y1+r+(b)*cos(i);
  int clr;
  set=set+1;if(set==4000){set=0;  clr=rand()%16;}
     putpixel(a1,b1-100,rand()%15);
     putpixel(a1-200,b1-100,(clr+1));
     putpixel(a1+200,b1-100,(clr+2));

     putpixel(a1,b1+150,(clr+5));
     putpixel(a1-200,b1+150,(clr-1));
     putpixel(a1+200,b1+150,(clr-2));
  x=x+0.5;
     delay(1.5);
    }
    getch();
 }
