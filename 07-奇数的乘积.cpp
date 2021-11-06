# include <stdio.h>
int main(){
	int n,i,a;
	int sum=1;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&a);
			if(a%2==1){
				sum*=a;
			}
		}
		printf("%d\n",sum);
		sum=1;
	}
	return 0;
}
