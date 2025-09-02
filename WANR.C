void add (int a, int b)
{
int c=a+b;
printf("%d",c);
}
main()
{
int a,b;
printf("enter the number");
scanf("%d%d",&a,&b);
add (a,b);
getch();
return 0;
}