# include <stdio.h>
# define h 8
int search_idx(const int v[],int idx[],int key,int n){
	int i=0;
	int j=0;
	for(i=0;i<n;i++){
		if(v[i]==key){
		    idx[j]=i;
			j++;
		}
	}
	return j;
}

//void print(int a[],int n){
//	int i=0;
//	for(i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}

int main(){
	int num[h]={0}; 
	int i=0;
	printf("������һ������");
	for(i=0;i<h;i++){
		scanf("%d",&num[i]) ;
	}
	int idx[h]={0};
	int key;
	printf("Ҫ���ҵ�ֵΪ��"); 
	scanf("%d",&key);
	printf("��%d�������ֵ��ͬ��Ԫ��",search_idx(num,idx,key,h));
//	print(idx,h);
	return 0;
}
