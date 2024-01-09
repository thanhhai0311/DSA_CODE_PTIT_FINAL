#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[200];
		gets(a);
		int dem=0;
		char *token=strtok(a, " ");
		while(token!=NULL){
			dem++;
			token=strtok(NULL, " ");
		}
		printf("%d\n", dem);
	}
}
