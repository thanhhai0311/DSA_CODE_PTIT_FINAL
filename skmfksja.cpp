#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

bool nguyenTo(int n) {
        if (n < 2)
		return false;
	for (int i = 2; i <= (int)sqrt(n); i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

int nt(int n)
{
    if(n<2) return 0;
    for(int i=2; i<=sqrt(n); i++)
    {
            if(n%i==0) return 0;
    }
    return 1;
}
   
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
            cin >> a[i];
    }
    int dem=0;
    for(int i=0; i<n; i++)
    {
            if(nt(a[i])==1) dem++;
            cout << nguyenTo(a[i])<< " ";
    }
    cout << "\n";
    cout << dem;
    getch();
    return 0;
}
     
