//#include<stdio.h>
//int main() {
//	printf("02/02/2000\n02/02/2002\n02/02/2020\n02/02/2022\n02/02/2200\n02/02/2202\n02/02/2220\n02/02/2222\n20/02/2000\n20/02/2002\n20/02/2020\n20/02/2022\n20/02/2200\n20/02/2202\n20/02/2220\n20/02/2222\n22/02/2000\n22/02/2002\n22/02/2020\n22/02/2022\n22/02/2200\n22/02/2202\n22/02/2220\n22/02/2222");
//}

#include<bits/stdc++.h>
using namespace std;
int a[9],ok;

void ktao(){
	for(int i=1;i<=8;i++){
		a[i]=0;
	}
}
void sinh(){
	int i=8;
	while( i >=1 && a[i]==2){
		a[i]=0;
		i--;
	}
	if( i==0){
		ok=0;
	}else{
		a[i]=2;
	}
}
bool check(){
	if( a[5]==0) return false;
	if( ( a[1]==0 && a[2]==0) || (a[3]==0 &&a[4]==0) ){
		return false;
	}
	if( a[3]==2) return false;
	return true;
}
int main(){
	ok=1;
	ktao();
	while(ok){
		if( check()){
			for(int i=1;i<=8;i++){
				if( i==2|| i==4){
					cout<<a[i]<<"/";
				}else{
					cout<<a[i];
				}
			}
			cout<<endl;
		}
		sinh();
	}
}
