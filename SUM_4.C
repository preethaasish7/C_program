main()
{
float cash_in_hand, expense, remaining;
clrscr();
printf("entre cash in hand");
scanf("%f",&cash_in_hand);
printf("enter expense");
scanf("%f",&expense);
remaining=cash_in_hand-expense;
printf("%f\n",cash_in_hand);
printf("%f\n",expense);
printf("%f\n",remaining);
getch();
return 0;
}

