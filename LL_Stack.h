
#ifndef  LL_STACK_H_
#define  LL_STACK_H_
typedef struct Node 
{
	int Data;
	struct Node*Next;
}Node;

typedef struct Stack_t
{
	struct Node*StrNode;
	int Top;
	int Counter;  //Size of the array
}Stack_DataType;

Node* LinkedList_Creat(int Copy_u8Data );


#endif