/*
					------------------Queue Operations  in C-------------------------------------
					-------------------Author: Gurpreet Gandhi(Garry)----------------------------
					--------------------Date: 15/04/2017--------------------------------------------
					===================Functions Used ===============================================
				Enqueue: Adds an item to the queue. If the queue is full, then it is said to be an Overflow condition.
				Dequeue: Removes an item from the queue.
				 The items are popped in the same order in which they are pushed.
				  If the queue is empty, then it is said to be an Underflow condition.
				Front: Get the front item from queue.
				Rear: Get the last item from queue.
	FIFO
	*/
					//------create a data structure
			
			
				struct Queue
				   {
					int front,rear,size;
					unsigned capacity;
					int arr[100];
					};
				
				//==============heaader files=================================================
				
				#include<stdio.h>
				#include<conio.h>
				#include<stdlib.h>
				
				//================functions============================================================
				
				
				
			struct Queue *createQueue(unsigned capacity)
			{
				
				struct Queue *queue=(struct Queue*)malloc(sizeof(struct Queue));
				
				queue->capacity=capacity;
				queue->size=0;
				queue->rear=capacity-1;
				queue->front=0;
				
			}
			
			
			isEmpty(struct Queue *queue)
			{
				if(queue->size==0)
				return 1;
				else 
				return 0;
			}
			
			
			isFull(struct Queue *queue)
			{
				if(queue->size==queue->capacity)
				return 1;
				else
				return 0;
				
			}
			
			
			enqueue(struct Queue *queue,int item)
			{
				if(isFull(queue))
				return;
		     	queue->rear = (queue->rear + 1) % queue->capacity;
				queue->arr[queue->rear] = item;
				queue->size = queue->size+1;
		    	printf("\nitem %d enquesd at position %d",queue->arr[queue->rear],queue->rear);
		     	return 0;
			}
			
			
			front(struct Queue *queue)
			{
				return queue->arr[queue->front];
				
			}
			
			rear(struct Queue *queue)
			{
				
				return queue->arr[queue->rear];
				
			}

			
			
			
			
			dequeue(struct Queue *queue)
			{
				if(isEmpty(queue))
				return;
				
				printf("\nitem %d dequed at position %d",queue->arr[queue->front],queue->front);
		    
				queue->front=(queue->front +1)%queue->capacity;
				queue->size-=1;
				return 0;
			}
			
			
			
			// Driver program to test above functions./
					int main()
					{
					    struct Queue* queue = createQueue(1000);
					 
					    enqueue(queue, 10);
					    enqueue(queue, 20);
					    enqueue(queue, 30);
					    enqueue(queue, 40);
					    
					     dequeue(queue);
					      dequeue(queue);
					      
					    printf("\nsize %d",queue->size);
					    printf("Front item is %d\n", front(queue));
   						 printf("Rear item is %d\n", rear(queue));
					    
					    return 0;
					    
					}
			
