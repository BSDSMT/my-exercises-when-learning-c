# include <stdio.h>
int main(){
	int num[100]={0};
	int n,i,min,t;
	scanf("%d",&n);
	while(n!=0){
		i=0;
		for(i=0;i<n;i++){
			scanf("%d",&num[i]);
		}
		min=0;
		for(i=1;i<n;i++){
			if(num[i]<num[min]){
				min=i;
			}
		}
		t=num[0];
		num[0]=num[min];
		num[min]=t;
		for(i=0;i<n;i++){
			printf("%d",num[i]);
			if(i<n-1){
				printf(" ");
			}
		}
		printf("\n");
		scanf("%d",&n);
	}
}
