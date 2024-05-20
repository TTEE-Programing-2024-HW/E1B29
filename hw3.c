#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
void a_pp(char seat[10][10]);

int main(void)
{
	int code,x,gg,y,i;
	char ch,seat[10][10]={{'\\','1','2','3','4','5','6','7','8','9'}
	,   {'9', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'8', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'7', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'6', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'5', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'4', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'3', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'2', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'1', '-', '-', '-', '-', '-', '-', '-', '-', '-'}};
            srand(time(NULL)); // 隨機選位子
    for (i = 0; i < 10; i++)
    {
        x = rand() % 9 + 1;
        y = rand() % 9 + 1;
        for (;;)
        {
            if (seat[x][y] == '*')
            {
                srand(time(NULL));
                x = rand() % 9 + 1;
                y = rand() % 9 + 1;
            }
            else
            {
                break;
            }
        }
        seat[x][y] = '*';
    }


	printf("-------------------------\n");
	printf("|                       |\n");
	printf("|                       |\n");
	printf("| E1B   29   張祿鷾     |\n");
	printf("|                       |\n");
	printf("|                       |\n");
	printf("|       .     .         |\n");
	printf("|                       |\n");
	printf("|          >            |\n");
	printf("|       -------         |\n");
	printf("|       |     |         |\n");
	printf("|       -------         |\n");
	printf("|                       |\n");
	printf("|                       |\n");
	printf("|                       |\n");
	printf("-------------------------\n");
	printf("請輸入密碼");
	scanf("%d",&code);
	for(;;)
	{
	if(gg==3)
	{
		system("pause");
		return 0;
	}
	if(code==2024)
	break;
	x++;
	printf("密碼錯誤%d次\n",x);
	scanf("%d",&code);
	
	
	
	
}
	system("cls");
	printf("------Booking System--------\n");
	printf("|  a. Available seats     |\n");
	printf("|  b. Arrange for you     |\n");
	printf("|  c. Choose by yourself  |\n");
	printf("|  d. Exit                |\n");
	printf("----------------------------\n");
	
ch=getch();
switch(ch)
{
case 'a':
case 'A':
	a_pp(seat);
	break;


} 

	system("pause");
	return 0;
	
	
	
 } 
 void a_pp(char seat[10][10]){
 	int i,j;
 	char ch;
 	for(i=0;i<=9;i++)
 	{
 		for(j=0;j<=9;j++)
 		{
 			printf("%c",seat[i][j]);
 			
		 }
		 printf("\n");
	 }
 	
 	ch=getch();
 }
