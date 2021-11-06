# include<stdio.h>
int main(){
	int a[50][5]={0};
	double b[50]={0};
	double c[5]={0};
	int d=0;
	int n,m;
	
	while(scanf("%d %d",&n,&m)!=EOF){
	int i=0;
	int j=0;
	d=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	int sum;
	i=0;
	j=0;
	for(i=0;i<n;i++){
		sum=0;
		for(j=0;j<m;j++){
			sum+=a[i][j];
		}
		b[i]=1.0*sum/m;
	}
	
	for(i=0;i<m;i++){
		sum=0;
		for(j=0;j<n;j++){
			sum+=a[j][i]; 
		}
		c[i]=1.0*sum/n;
	}
	
	for(i=0;i<n;i++){
		int isprime=1;
		for(j=0;j<m;j++){
			if(a[i][j]<c[j]){
				isprime=0;
				break;
			}
		}
		if(isprime){
			d++;
		}
	}
	for(i=0;i<n;i++){
		printf("%.2f",b[i]);
		if(i<n-1){
			printf(" ");
		}
	}
	printf("\n");
	
	for(i=0;i<m;i++){
		printf("%.2f",c[i]);
		if(i<m-1){
			printf(" ");
		}
	}
	printf("\n");
	printf("%d",d);
	printf("\n\n");
	}
	return 0;
}
