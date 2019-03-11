#include<stdio.h>
#include<conio.h>

void fivaa(int n)
{
	int i,j;
	int k;
	
	for(i=n+1;i>=2;i--)
	{
		for(j=0;j<=i;j++)
		{
			k=i-2;
			if(j>=2){
				printf("%d",i);
			} else{
				printf("%d",k);
				
			}
		}
		printf("\n");
	}
	getch();
}

int main(){
	int x;
	printf("fivaa:");
	scanf("%d",&x);
	fivaa(x);
}
