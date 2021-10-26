# include <stdio.h>
int search(int key,int num[],int len){
	int right=len-1;
	int left=0;
	int mid;
	int ret=-1;
	while(right>left){
		mid=(left+right)/2;
		if(num[mid]>key){
			right=mid-1;
		}else if(num[mid]==key){
			ret = mid;
			break;
		}else{
			left=mid+1;
		}
	}
	return ret;
}
int main (){
	int a[]={12,24,34,36,45,67,78,90};
	int k=78;
	int r=search(k,a,sizeof(a)/sizeof(a[0]));
	if(r!=-1){
		printf("%d",r);
	}
	return 0;
}
