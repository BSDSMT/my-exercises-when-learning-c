# include <stdio.h>
int max(int num[],int len){
	int maxid=0;
	int i=1;
	for(i=1;i<len;i++){
		if(num[i]>num[maxid]){
			maxid=i;
		}
	}
	return maxid;
}
int main(){
	int a[]={23,97,56,43,78,63,15};
	int len=sizeof(a)/sizeof(a[0]);
	int i=len-1;
	for(i=len-1;i>0;i--){
		int maxid=max(a,i+1);
	    int t;
	    t=a[maxid];
	    a[maxid]=a[i];
     	a[i]=t;
	}
	i=0;
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
