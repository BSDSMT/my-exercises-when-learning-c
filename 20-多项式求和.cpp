# include <stdio.h>
int main(){
	int m,n,i,cnt;
	double sum,j;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n);
		sum=0;
		j=1;
		cnt=1;
		for(j=1;j<n+1;j++){
			sum+=1/j*cnt;
			cnt*=-1;
		}
		printf("%.2f",sum);
		if(i<m){
			printf("\n");
		}
	}
	return 0;
}
