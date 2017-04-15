/*
					------------------Stack Operations  in C-------------------------------------
					-------------------Author: Gurpreet Gandhi(Garry)----------------------------
					--------------------Date: 15/04/2017--------------------------------------------
					===================Functions Used ===============================================
	->push(), pop(), isEmpty() and peek() all take O(1) time. We do not run any loop in any of these operations.
	Push: Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.
	Pop: Removes an item from the stack. The items are popped in the reversed order in which they are pushed. 
	If the stack is empty, then it is said to be an Underflow condition.
	Peek or Top: Returns top element of stack.
	isEmpty: Returns true if stack is empty, else falsE.
	LIFO
	
	*/
					//------create a data structure
				
				
					
					struct Stack
					{
						
						int top;
						unsigned capacity;
						int* arr;
						
					};
					
					//===============header files
					#include<stdio.h>
					#include<stdlib.h>
					
					//function create Stack
					struct Stack *createStack(unsigned capacity)
					{
						struct Stack *stack;
						stack=(struct Stack *)malloc(sizeof(struct Stack));
						stack->capacity=capacity;
						stack->top=-1;
						stack->arr=(int*)malloc(stack->capacity*sizeof(int));
						return stack;
					}
					
					
					int isEmpty(struct Stack *stack)
					{
						if(stack->top==-1)
						{
							return 1; //true
						}
						else
						return 0;//false
					}
					
					
					
					int isFull(struct Stack *stack)
					{
						
						if(stack->top==stack->capacity-1)
						{
							return 1;//true
							
						}
						else
						return 0;//false
					}
					
					
					
					pushStack(struct Stack *stack, int val)
					{
					if( isFull(stack) ) 
						return;
						
						stack->arr[++stack->top] =val;
						printf("item pushed to %d \n",val);
						return 0;
					}
					
					popStack(struct Stack *stack)
					{
						
						
						if(isEmpty(stack))
						    return;
						    
						    printf("The value poped is %d \n ",stack->arr[stack->top]);
						//	stack->arr[stack->top]=NULL;
						    stack->top-=1;
						    
						    return 0;
						    
						
					}


				// Driver program to test above functions
					int main()
					{
					struct Stack *stack = createStack(3);
					
					pushStack(stack, 10);
					pushStack(stack, 20);
					pushStack(stack, 30);
					
					popStack(stack);
					pushStack(stack, 40);
					
					printf("%d",isFull(stack));
					
					
					return 0;
                    }					
					
					
