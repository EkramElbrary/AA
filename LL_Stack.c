
#include <stdio.h>
#include <stdlib.h>
#include "LL_Stack.h"

Node* LinkedList_Creat(int Copy_u8Data )
{
	Node* Head =(Node*)malloc(sizeof(Node));
	if (Head!=NULL)
	{
		Head->Data=Copy_u8Data;
		Head->Next=NULL;		
	}
	return Head;
}