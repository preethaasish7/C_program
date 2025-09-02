main()
{
int a,b,c;
clrscr();
printf("enter a,b,c");
scanf("%d%d%",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is greatest");
}
else if(b>a&&b>c)
{
printf("b is greatest");
}
else if(c>a&&c>b)
{
printf("c is greatest");
}
getch();
return 0;
}