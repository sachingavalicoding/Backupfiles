#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node * head = NULL;
struct node * create(){
    struct node * temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\n Enter Data:");
    scanf("%d",&temp->next);
    
}