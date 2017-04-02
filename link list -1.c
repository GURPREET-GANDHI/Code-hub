					/*
					------------------First Link List in C-------------------------------------
					-------------------Author: Gurpreet Gandhi(Garry)--------------------
					--------------------Date: 02/04/2017---------------------------------
					*/
					
					//------create a data structure
					
					struct node{
					int data;
					struct node* link;
					};
					//-------------------lib here
					#include<stdio.h>
					#include<stdlib.h>
					#include<conio.h>
					
					//------------main function starts here
					main(){
						
						struct node *p, *ptr;
						p=(struct node *)malloc(sizeof(struct node *));
						ptr=(struct node*)malloc(sizeof(struct node *));
						p->data=10;
						ptr->data=20;
						p->link=ptr;
						ptr->link='\0'; // ending a Link List
						
						printf("%d \n",p->data);
						printf("%d \n",(p->link)->data);
						
						
						getch();
					}
					
					
					
