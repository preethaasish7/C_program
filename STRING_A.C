main()
{
char*sen;
int i, l=0, count=0;
clrscr();
scanf ("%[^\n]",sen);
for(i=0; sen[i]!= '\0';i++)
{
l=l+1;
printf("%c\n",sen[i]);
if(sen[i]==' ')
count=count+l;
}
printf("len=%d",l);
printf("no of words=%d",count+1);
getch();
return 0;
}