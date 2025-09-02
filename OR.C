main()
{
char c;
clrscr();
printf("enter the c");
scanf("%c",&c);
if(c=='f'||c=='F')
{
printf("female");
}
else if(c=='m'||c=='M')
{
printf("male");
}
else
{
printf("try agin");
}
getch();
return 0;
}
