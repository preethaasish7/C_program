main()
{
int a,b;
clrscr();
printf("enter a");
scanf("%d",&a);
b=a%4;
if(b==0)
{
printf("leap year");
}
else
{
printf("not leap year");
}
getch();
return 0;
}