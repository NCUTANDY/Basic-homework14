#include <stdio.h>
#include <stdlib.h>  
int main(void)
{
    int line1,line2,line3; 

    printf("三根：三角形的三木條能不能拼成一個三角形。\n");

	printf("定義邊長一定滿足任兩邊邊長和大於第三邊。\n");

	printf("請輸入三邊長的長度：");

	scanf("%d %d %d",&line1,&line2,&line3);

        if( line1+line2>line3 && line1+line3>line2 &&line2+line3>line1 ) 
		{
		printf("結果：可以滿足\n");
		}
		else
		{
		printf("結果：不可以滿足\n");   
		}

    system("pause"); 

	return 0; 

}
