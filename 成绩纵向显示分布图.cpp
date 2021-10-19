# include <stdio.h>
# define h 100
int main (){
	//输入人数 
	int num;
	printf("请输入学生的总人数：");
	do{
		scanf("%d",&num);
		if(num<1||num>h){
			printf("请输入1-%d间的数",h);
		}
	}while(num<1||num>h);
	
	//输入成绩 
	int a[h];
	int b[11]={0};
	int i=0;
	for(i=0;i<num;i++){
		printf("请输入%d号同学的成绩: ",i+1);
		do{
	        scanf("%d",&a[i]);
			if(a[i]<0||a[i]>100){
				printf("请输入0-100间的数\n"); 
			}
		}while(a[i]<0||a[i]>100);
		b[a[i]/10]++;
	}

	
	//输出图表 
	int j;
	printf("纵式分布图如下\n");
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
