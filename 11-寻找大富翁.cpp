# include <stdio.h>
int main(){
    int num[100000]={0};
	long n;
	int m,i,j,t;
	scanf("%ld %d",&n,&m);
	while(n!=0||m!=0){
		for(i=0;i<n;i++){
			scanf("%d",&num[i]);
		}
		for(i=n-1;i>1;i--){
			for(j=0;j<i+1;j++){
				if(num[j]<num[j+1]){
					t=num[j];
					num[j]=num[j+1];
					num[j+1]=t;
				}
			}
		}
		if(n<=m){
			for(i=0;i<n;i++){
				printf("%d",num[i]);
				if(i<n-1){
					printf(" ");
				}
			}
		}else{
			for(i=0;i<m;i++){
				printf("%d",num[i]);
				if(i<m-1){
					printf(" ");
				}
			}
		}
		printf("\n");
		scanf("%ld %d",&n,&m);
	}
	return 0;
}
