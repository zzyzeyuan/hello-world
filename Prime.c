/*满足下列条件的自然数称为超级素数:该数本身,所有数字之和,所有数字之积以及所有数字的平方和都是素数.例如113就是一个超级素数.求[100,9999]之内:(1)超级素数的个数.(2)所有超级素数之和.(3)最大的超级素数.*/
//2018/11/14 更新
#include<stdio.h> 

int judge (int a);

int main ()
{
	int num,sum=0,max,i,a,b,c;
	for(i=101;i<1000;i++){
		if(judge(i)==1){
			a=i/100;
			b=(i-a*100)/10;
			c=i%10;
			if(judge(a+b+c)==1&&judge(a*a+b*b+c*c)==1&&judge(a*b*c)==1){
				num++;
				sum+=i;
				max=i;
			}
		}
	}
	printf("%d %d %d\n",num,sum,max);
	
	return 0;
}

int judge (int a)
{
	int i,flag=1;
	for(i=2;i<a;i++){
		if(a%i==0){
			flag=0;
			break;
		}
	}
	if(a<3)
	flag=0;
	return flag;
}

