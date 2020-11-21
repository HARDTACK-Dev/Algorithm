
#define MAX_QUEUE 100
#define true 1000
#define false 99

#include <stdio.h>

int rear = 0;
int front  = 0;
int queue[MAX_QUEUE];

//enqueue is put value on queue
int push(int value){
	if(IsQueueFull() == true)
		return true;
	else
		queue[rear] = value;
		rear++;
}

//dequeue is remove value queue
int pop(){
	if(IsQueueEmpty() == true)
		return true;
	else
	{
		queue[front] = NULL;
		front++;
	}
			
}



int IsQueueEmpty(){
	if(rear == front) //rear is 0 mean Queue is empty
		return true; //queue is empty!
	else
		return false; //queue is not empty
}

int IsQueueFull(){
	if(rear > MAX_QUEUE) 
		return true; //queue is full
	else
		return false; //queue is not full
}


int main()
{
	int temp;
	int i;
	int inputNum;
	int select;
	
	do{
	
			
	system("cls");
	printf("1. insert queue\n");
	printf("2. remove value from queue\n");
	printf("3. disply the queue's state\n");
	printf("4. Exit program\n");
	
	printf("----------------------------");
	printf("\n=>");
	scanf("%d", &select);
	
	switch(select){
			case 1:
				system("cls");
				if(IsQueueFull() == true)
				{
					printf("Queue is now full!");
					Sleep(1000);
					break;
				}
				else
				{
					
				printf("insert queue\n\n");
				printf("number of values:");
				scanf("%d", &inputNum);
				
				
				
				for(i=0; i<inputNum; ++i){
					printf("[%d]:", i);
					scanf("%d", &temp);
					
					//insert queue
					push(temp);
				}

							
				Sleep(1000);
				break;
				}
				
				
			case 2:
				
				system("cls");
				if(IsQueueEmpty() == true)
				{
					printf("Queue is now Empty");
					Sleep(1000);
					break;
				}
				else
				{
				pop(front);	
				printf("Queue value removed\n");
				printf("rear: %d  front: %d \n\n", rear, front);			
					Sleep(1000);
				}
				
				break;
				
			case 3:
				system("cls");
				if(IsQueueEmpty() == true){
					printf("queue is empty!");
					Sleep(800);
					break;
				}
				else{
				
				
				printf("rear: %d  front: %d \n\n", rear, front);
				for(i=inputNum; i>0; --i){
					printf("[%2d ] ", i);
				}
				printf("\n");
				printf("front --------------------------------------------------------------------------------- rear\n");
					
				for(i=inputNum; i>=0; --i){
						if(queue[i] == NULL)
						printf("");
					else
						printf(" %3d  ", queue[i]);
					}
					
				}
				Sleep(2000);
				break;
				
			case 4:
				printf("Exit the program");
				return 0;
				
			}
	}while(select > 4 || 1);
}


