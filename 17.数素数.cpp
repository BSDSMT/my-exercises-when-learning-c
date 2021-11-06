# include <stdio.h>
# include <math.h>
int isPrime(int x){
	int ret=1;
	int i;
	if(x==1||x%2==0&&x!=2){
		ret=0;
	}
	for(i=3;i<=sqrt(x);i+=2){
		if(x%i==0){
			ret=0;
			break;
		}
	}
	return ret;
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int num[10000];
	int i=0;
	int x=1;
	for(i=0;i<n;x++){
		if(isPrime(x)){
			num[i]=x;
			i++;
		}
	}
	for(i=m-1;i<n;i++){
		printf("%d",num[i]);
		if((i-m+2)%10==0){
			printf("\n");
		}else if(i<n-1){
			printf(" ");
		}
	}
	return 0;
}
