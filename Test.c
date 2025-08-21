
int main()
{
	int hours, min, second;
	int total_second;
	
	printf("enter the hours");
	scanf("%d",&hours);
	
	printf("enter the mint");
	scanf("%d",&min);
	
	printf("enter the second");
	scanf("%d",&second);
	
	total_second =(hours*3600) + (min*60)+second;
	
	printf("enter the total second");
}