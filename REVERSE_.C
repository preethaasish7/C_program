main()
{
int n=678, r;
clrscr();
while(n>0)
{
r=n%10;
printf("%d",r);
n=n/10;
}
getch();
return 0;
}