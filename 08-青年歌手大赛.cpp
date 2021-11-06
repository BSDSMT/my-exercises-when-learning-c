# include <stdio.h>
int min(int a[],int len){
	int i;
	int min=a[0];
	for(i=1;i<len;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	return min;
}

int max(int a[],int len){
	int i;
	int max=a[0];
	for(i=1;i<len;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
int main(){
	int num[100]={0};
	int n,sum,i;
	while(scanf("%d",&n)!=EOF){
		i=0;
		sum=0;
		for(i=0;i<n;i++){
			scanf("%d",&num[i]);
		}
		for(i=0;i<n;i++){
			sum+=num[i];
		}
		sum=sum-min(num,n)-max(num,n);
		printf("%.2f\n",1.0*sum/(n-2));
	}
	return 0;
}
