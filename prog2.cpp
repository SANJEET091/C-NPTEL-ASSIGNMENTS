#include<stdio.h>
int main(){
	int a,b;
	int i=1;
	int prev,curr;
	scanf("%d",&a);
	prev=a;
	
	while(a!=-1){
		scanf("%d",&b);
		curr=b;
		if(b==-1){
			break;	
		}		
		if(curr!=prev)
		{
			i=i+1;
			prev=curr;
		}
		else{
			
			prev=curr;
			continue;
		}


	}
	printf("%d",i);
}
