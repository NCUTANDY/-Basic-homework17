#include <stdio.h>�@

#include <stdlib.h> 

int main(int argc, char *argv[]) {

	int i[5]={0};

	int j=0,small;

	printf("-------------------------------------------------\n");  

	printf("             ��M�}�C���̤p�Ȫ��{��              \n");

	printf("-------------------------------------------------\n");   

	printf("�гs���J���ӼƭȡG\n");

	for(j=0;j<5;j++)

	{

	   printf("��%d����ơG", j+1 );

	   scanf("%d", &i[j]);

	}

	small=i[0];

	for(j=0;j<5;j++)

	{

	  if (small>i[j])	

	  {

		  small=i[j];

	  }

	}

	printf("�̤p�ȬO�G%d\n\n",small); 

	system("pause");	

	return 0;

}
