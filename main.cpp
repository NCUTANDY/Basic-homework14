#include <stdio.h>
#include <stdlib.h>  
int main(void)
{
    int line1,line2,line3; 

    printf("�T�ڡG�T���Ϊ��T����ण������@�ӤT���ΡC\n");

	printf("�w�q����@�w��������������M�j��ĤT��C\n");

	printf("�п�J�T��������סG");

	scanf("%d %d %d",&line1,&line2,&line3);

        if( line1+line2>line3 && line1+line3>line2 &&line2+line3>line1 ) 
		{
		printf("���G�G�i�H����\n");
		}
		else
		{
		printf("���G�G���i�H����\n");   
		}

    system("pause"); 

	return 0; 

}
