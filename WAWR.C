int add(int a, int b)
{
int c=a+b;
return c;
}
main()
{
int a,b,c;
clrscr();
scanf("%d%d",&a,&b);
c=add(a,b);
printf("%d",c);
getch();
return 0;
}