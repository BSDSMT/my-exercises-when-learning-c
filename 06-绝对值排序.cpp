# include <stdio.h>
#include<math.h>
int min(int a[],int len){
	int minid=0;
	int i=1;
	for(i=1;i<len;i++){
		if(abs(a[i])<abs(a[minid])){
			minid=i;
		}
	}
	return minid;
}

void order(int a[],int len){
	int i=len-1;
	for(i=len-1;i>0;i--){
		int minid=min(a,i+1);
		int t;
		t=a[i];
		a[i]=a[minid];
		a[minid]=t;
	}
	i=0;
	for(i=0;i<len;i++){
		if(i<len-1){
			printf("%d ",a[i]);
		}else{
			printf("%d\n",a[i]);
		}
	}
}

int main(){
	int n;
	int num[100]={0};
	scanf("%d",&n);
	if(n>0){
		do{
			int i=0;
			for(i=0;i<n;i++){
				scanf("%d",&num[i]);
			}
			order(num,n);
			scanf("%d",&n);
		}while(n>0);
	}
	return 0;
}

