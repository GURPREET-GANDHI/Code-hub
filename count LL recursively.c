/*
					------------------Link List Functions in C-------------------------------------
					-------------------Author: Gurpreet Gandhi(Garry)----------------------------
					--------------------Date: 02/04/2017--------------------------------------------
					===================Functions Used ===============================================
					->GetCount Recursive(link list, index)
					-> main
					->Print
 	*/
					//------create a data structure
					
					struct node{
					int data;
					struct node* link;
					};
					//====================add lib here=====================
					#include<stdlib.h>
					#include<conio.h>
					#include<stdio.h>
					//======================================================
					
					GetCount(struct node *head)
					{
					
						if(head == NULL)
						return 0;
						else
						return 1 + GetCount(head->link);
				    
					}
					
					AddAtLast(struct node **head, int val){
						struct node *a;
						//====create a new node for this
						struct node *new;
						new=(struct node *)malloc(sizeof(struct node *));
						new->data=val;
						new->link=NULL; //---can be assigned as '\0'
						//===traverse till last
						a=*head;
						while(a->link!=NULL){
							a=a->link;
						}
						a->link=new;
						return 0;
					}
					
						Print(struct node **head){
						
						struct node *a;
						a=*head;
						printf(" \n  Start --");
						do{
							printf(" %d -- ",a->data);
							a=a->link;
						}while(a->link != NULL);
						printf(" %d -- EOL ",a->data);
						
						return 0;
						
					}
					
					main(){
						struct node *p, *ptr,**new;
						//======allocate memory to the node
						p=(struct node *)malloc(sizeof(struct nonde*));
						ptr=(struct node *)malloc(sizeof(struct nonde*));
						p->data=10;
						ptr->data=20;
						//======== create a link list of 2
						p->link=ptr;
						ptr->link=NULL;
						//=========== Add a value of 30 at last
						
						AddAtLast(&p,30);
						AddAtLast(&p,60);
						//===========count 
						
				    	printf("count is %d",GetCount(&p));
						
						//==========print list
						
						Print(&p);
						
						return 0;
						
						getch();
					}
	
