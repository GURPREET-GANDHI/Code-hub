	/*
					------------------Link List Functions in C-------------------------------------
					-------------------Author: Gurpreet Gandhi(Garry)----------------------------
					--------------------Date: 02/04/2017--------------------------------------------
					===================Functions Used ===============================================
					->GetNth(link list, index)
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
					GetNth(struct node** head,int index)
					 {
					     int count=0;
					     
					     struct node* p;
					     p=*head;
					     do{
					         if(index==count)
					         {
					             printf("element at index  %d is %d\n ",index,p->data);
					              break;
					         }
					         
					         p=p->link;
					         count++;
					     }while(p!=NULL);
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
						struct node *p, *ptr;
						//======allocate memory to the node
						p=(struct node *)malloc(sizeof(struct nonde*));
						ptr=(struct node *)malloc(sizeof(struct nonde*));
						p->data=10;
						ptr->data=20;
						//======== create a link list of 2
						p->link=ptr;
						ptr->link=NULL;
						//=========== Add a value of 30 at last
						
						
						GetNth(&p,1);
						
						//==========print list
						
						Print(&p);
						
						return 0;
						
						getch();
					}
