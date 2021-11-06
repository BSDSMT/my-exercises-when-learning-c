# include <stdio.h>
int main(){
	int num[1001]={0};
	char c[1001];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++){
		c[i]=num[i];
	}
	for(i=0;i<n;i++){
		printf("%c",c[i]);
	}
	return 0;
}

