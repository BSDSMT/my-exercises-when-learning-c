//# include <stdio.h>
//int main(){
//	int n,i;
//	int x;
//	int a=1;
//	scanf("%d",&n);
//	while(n!=0){
//		x=0;
//		a=1;
//		if(n==1){
//			printf("0\n");
//		}else{
//			for(i=2;i<n+1;i++){
//				a*=2;
//				x=a-x;
//			}
//		    printf("%d\n",x);
//		}
//		scanf("%d",&n);
//	}
//	return 0;
//}
#include<stdio.h>
int main ()
{
    int n;
    int a[1005];
    int i;
    a[1]=0;
    a[2]=2;
    a[3]=2;
    for(i=4;i<=1000;i++)
        a[i]=(a[i-1]+a[i-2]*2)%10000;
    while(scanf("%d",&n),n)
    {
        printf("%d\n",a[n]);
    }
    return 0;
}
