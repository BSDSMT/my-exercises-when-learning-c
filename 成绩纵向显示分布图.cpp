# include <stdio.h>
# define h 100
int main (){
	//�������� 
	int num;
	printf("������ѧ������������");
	do{
		scanf("%d",&num);
		if(num<1||num>h){
			printf("������1-%d�����",h);
		}
	}while(num<1||num>h);
	
	//����ɼ� 
	int a[h];
	int b[11]={0};
	int i=0;
	for(i=0;i<num;i++){
		printf("������%d��ͬѧ�ĳɼ�: ",i+1);
		do{
	        scanf("%d",&a[i]);
			if(a[i]<0||a[i]>100){
				printf("������0-100�����\n"); 
			}
		}while(a[i]<0||a[i]>100);
		b[a[i]/10]++;
	}

	
	//���ͼ�� 
	int j;
	printf("��ʽ�ֲ�ͼ����\n");
	int max=b[0],min=b[0];
	for(i=1;i<11;i++){
		if(b[i]>max){
			max=b[i];
		}
	}
	
	int c=max;
	for(i=1;i<=max;i++){
		for(j=0;j<11;j++){
			if(b[j]>=c){
				printf(" * ");
			}else{
				printf("   ");
			}
		}
		printf("\n");
		c--;
	}
	
	for(i=0;i<38;i++){
		printf("-");
	}
	printf("\n");
	
	for(i=0;i<10;i++){
		printf("%3d",i*10);
	}
	printf(" 100");
	
	return 0;
}
