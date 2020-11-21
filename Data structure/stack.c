#include<stdio.h>
#define STACK_SIZE 100
#define true 1
#define false 0
#define NotExist 2
int stack[STACK_SIZE];
int top = -1;



int IfStack_Empty(){
	if(top<0)
		return true;
	else
		return false;
}

int IfStack_Full(){
	if(top>=STACK_SIZE-1)
		return true;
	else
		return false;
}

int push(int value){
	if(IfStack_Full() == true)
		printf("Stack is Full");
	else
		return stack[++top] = value;
}

int pop(){
	if(IfStack_Empty() == true )
		return false;
	else
		return stack[top--];
}


int main(){
	int i;
	int select = 0;
	int inputNum=0;
	int temp;
	
	do{
	
		system("cls");
		printf("�޴� ����!\n\n");
		printf("1) Push�ϱ�\n");
		printf("2) Pop �ϱ�\n"); 
		printf("3) ȭ�����\n");
		printf("4) ����\n\n");
		
		printf("��ȣ:");
		scanf("%d", &select); 
		
		switch(select){
			case 1:
				system("cls"); 
				printf("Push�� ����(�ִ�100): ");
				scanf(" %d", &inputNum);  
		
				for(i=0; i<inputNum; ++i){
					printf("[%d]:", i);
					scanf("%d", &temp);
					push(temp);
				}
				
				printf("Ǫ�ÿϷ�!");
				Sleep(1000);
				break;
			
			case 2:
				system("cls");
				
				if(IfStack_Empty() == true)
					printf("pop ����!\n[x] ������ �̹� ����ֽ��ϴ�");
				else{
					printf("\n��ü�� Pop ��ŵ�ϴ�:\n");
					for(i=0; i<inputNum; ++i)
						printf("%d\n", pop());
					}
					
				printf("\n\n 2���� �޴��� ���ư��ϴ�");
				Sleep(2000);	 
				break;
			case 3:
				system("cls");
				if(IfStack_Empty() == true)
					printf("������ ����־� ǥ���� ���� �����ϴ� \n\n2�ʵ� ���ư��ϴ�");
				else
					for(i=0; i<inputNum; ++i)
						printf("[%d] %d\n", i,stack[i]);
						Sleep(2000);
				
				break; 
			case 4:
				printf("�����!");
				return 0;
				
		}
	}while(select > 4 || 1 );
}



