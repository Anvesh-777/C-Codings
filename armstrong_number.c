#include<stdio.h>

int count(int x)
{
	int cnt=0;
	while(x>0)
	{
		cnt++;
		x/=10;
	}
	return cnt;
}
int  main()
{
	int digit_cnt=0, num=0, temp=0,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	digit_cnt=count(num);
	printf("Number of digits present in the number=%d\n",digit_cnt);
	temp=num;
	while(temp)
	{
	    int power=1;
		for(int i=0; i<digit_cnt; i++)
		{
            power*=(temp%10);
		}
		sum=sum+power;
		temp=temp/10;
	}
	if(num==sum)
	{
	    printf("The number is armstrong number\n");
	}
	else{
	    printf("The number is Not a armstrong number\n");
	}

	return 0;
}
