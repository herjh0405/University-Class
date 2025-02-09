#include <stdio.h>

int input_dir(int a[],int max_len)
{
	int len,i;
	
	scanf("%d",&len);
	if(len>=max_len) len=max_len;
	for(i=0;i<len&&
		!(scanf("%d",&a[i])!=1);++i)
		;
	return i;
}

int is_found(int v[],int vlen,int a)
{
	int i;
	
	for(i=0;i<vlen&&!(v[i] ==a);++i)
		;
	return i<vlen;
}

int main(void)
{
	int a[1024];
	int alen,max_alen = 1024;
	int v[10];
	int vlen,max_vlen=10;
	int i;
	
	alen = input_dir(a,max_alen);
	vlen = input_dir(v,max_vlen);
	
	for(i=0;i<alen&&
		!(is_found(v,vlen,a[i]));++i)
		;
	if(i<alen)
		printf("found: %d\n",i);
	else
		printf("not found.\n");
	return 0;
}

