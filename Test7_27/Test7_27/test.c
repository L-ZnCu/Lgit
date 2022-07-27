

//存放一千好友的信息
//名字、电话、性别、住址、年龄、增删改查打印好友信息


#include "contact.h"

void menu()
{
	printf("********************************************\n");
	printf("******** 1.add        2.del      ***********\n");
	printf("******** 3.search     4.modify   ***********\n");
	printf("******** 5.show       6.sort     ***********\n");
	printf("******** 0.exit                  ***********\n");
	printf("********************************************\n");

}
int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con; //con就是通讯录里面包含1000个元素的数和size
	//初始化通讯录
	InitContact(&con);

	do 
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SELECT:
			SearchContact(&con);
			break;
		case MODIFY:
			M0difyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;

}