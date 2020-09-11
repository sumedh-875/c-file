#include<stdio.h>
int main()
{
	float sub1,sub2,sub3,sub4,sub5,per;
	printf("\n enter marks of sub1:");
	scanf("%f,&sub1");
	printf("\n enter marks of sub2:");
	scanf("%f,&sub2");
	printf("\n enter marks of sub3:");
	scanf("%f,&sub3");
	printf("\n enter marks of sub4:");
	scanf("%f,&sub4");
	printf("\n enter marks of sub5:");
	scanf("%f,&sub5");
	per=sub1+sub2+sub3+sub4+sub5/500*100;
	
	{
		if(per>85&&per<100)
		{
			printf("grade A",per);
		}
		else if(per>70&&per<84)
		{
			printf("grade B",per);
		}
		else if(per>55&&per<69)
		{
			printf("grade C",per);
		}
		else if(per>40&&per<54)
		{
			printf("grade D",per);
		}
		else(per>0&&per<40);
		{
			printf("grade F",per);
		}
		
	}
	return 0;
}
