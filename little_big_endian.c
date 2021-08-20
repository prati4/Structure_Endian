

/*wap to know if the platform you are using is little / big endian*/


#include<stdio.h>
int main()
{
  int a =1;    
	char *p=(char *)&a;   
	if(*p==1)  
	{
		printf("CPU is little endian");
	}
	else
	{
		printf("CPU is big endian");
	}
	return 0;
}














