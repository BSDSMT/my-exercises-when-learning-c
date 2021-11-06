# include <stdio.h>
# include <string.h>
int main(){
	int n;
	int num[5]={0};
	scanf("%d",&n);
	char d[]={'a','e','i','o','u','\0'};
	int i;
	for(i=0;i<n;i++){
		char c[101];
		getchar();
		gets(c);
		int l=strlen(c);
		int j=0;
		for(j=0;j<l;j++){
			switch(c[j]){
				case 'a': num[0]++;break;
				case 'e': num[1]++;break;
				case 'i': num[2]++;break;
				case 'o': num[3]++;break;
				case 'u': num[4]++;break;
			}
		}
		for(j=0;j<5;j++){
			printf("%c:%d",d[j],num[j]);
			if(i<n-1||i==n-1&&j<4){
				printf("\n");
			}
		}
		if(i<n-1){
			printf("\n");
		}
		for(j=0;j<5;j++){
			num[j]=0;
		}
	}
    return 0;
}
