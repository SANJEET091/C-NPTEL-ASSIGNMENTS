#include<stdio.h>
#include<math.h>
int main()
{

	for(int a=0;a<=100;a++){
		for(int b=0;b<=100;b++){
			for(int c=0;c<=100;c++){
				if(pow(a,2)+pow(b,2)==pow(c,2)){
					printf("\n %d %d %d",a,b,c);
				}
			}
		}
	}
}
