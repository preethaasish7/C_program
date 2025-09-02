main()
{
int a[3][3],r,c;
clrscr();
printf ("enter the matrix\n");
for(r=0;r<3;r++)
{
for(c=0;c<3;c++)
{
scanf("%d",&a[r][c]);
}
}
printf("given the matrix\n\n");
for(r=0;r<3;r++)
{
for(c=0;c<3;c++)
{
if(r==c)
printf("%d",a[r][c]);
else
printf(" ");
}
printf("\n");
}
getch();
return 0;
}
