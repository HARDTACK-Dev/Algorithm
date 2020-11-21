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
		printf("메뉴 선택!\n\n");
		printf("1) Push하기\n");
		printf("2) Pop 하기\n"); 
		printf("3) 화면출력\n");
		printf("4) 종료\n\n");
		
		printf("번호:");
		scanf("%d", &select); 
		
		switch(select){
			case 1:
				system("cls"); 
				printf("Push할 개수(최대100): ");
				scanf(" %d", &inputNum);  
		
				for(i=0; i<inputNum; ++i){
					printf("[%d]:", i);
					scanf("%d", &temp);
					push(temp);
				}
				
				printf("푸시완료!");
				Sleep(1000);
				break;
			
			case 2:
				system("cls");
				
				if(IfStack_Empty() == true)
					printf("pop 실패!\n[x] 스택이 이미 비어있습니다");
				else{
					printf("\n전체를 Pop 시킵니다:\n");
					for(i=0; i<inputNum; ++i)
						printf("%d\n", pop());
					}
					
				printf("\n\n 2초후 메뉴로 돌아갑니다");
				Sleep(2000);	 
				break;
			case 3:
				system("cls");
				if(IfStack_Empty() == true)
					printf("스택이 비어있어 표시할 값이 없습니다 \n\n2초뒤 돌아갑니다");
				else
					for(i=0; i<inputNum; ++i)
						printf("[%d] %d\n", i,stack[i]);
						Sleep(2000);
				
				break; 
			case 4:
				printf("종료됨!");
				return 0;
				
		}
	}while(select > 4 || 1 );
}



