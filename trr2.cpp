#include <iostream>
#include <fstream>
using namespace std;

int x[20], n;
ofstream outFile("Result.out.txt");

void xuatkq(int x[])
{
for(int i=0; i<n; i++)
{
    cout<<" "<<x[i];
   if(outFile.is_open())
       outFile<<" "<<x[i];
    else
       cout<<"Error";
}
outFile<<endl;
cout<<endl;
}

void thu(int k)
{
    if (k==(n-1)/2+1)
    {
        if(n%2==0)
         {
            for(int j=0;j<n/2;j++)
                x[n-j-1]=x[j];
         }
         else
         {
                for(int j=0;j/2-1;j++)
                    x[n-j-1]=x[j];
         }
        xuatkq(x);
    }
    else
        for (int i=0; i<=1; i++)
        {
            x[k]= i;
            thu(k+1);
        }
 }

 int main()
 {

     cout<<"Nhap vao mot so n= ";
     cin>>n;
     outFile<<"Cac xau thuan nghich doc co do dai "<<n<<" la:"<<endl<<endl;
     thu(0);
     outFile.close();
     return 0;
 }
