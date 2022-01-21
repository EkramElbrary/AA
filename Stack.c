#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

/* typedef Stack_t
{
	int Top;
	int *Arr;
	int Size;  //Size of the array
}Stack_DataType; */


void CreatStaticStack(Stack_DataType* me,int *Arr,int ArrSize)
{
	if(me!=NULL)
	{	
		me->Arr=Arr;
		me->Size=ArrSize;
		me->Top=0;
	}
}
void PushNewElementStatic(Stack_DataType* me,int ElementValue) 
{
	if((me!=NULL)&&(!CheckIfStaticStackFull(me)))
	{
		me->Arr[me->Top]=ElementValue;
		me->Top++;
	}
	else if (CheckIfStaticStackFull(me))
	{
		printf("Stack OverFlow");
	}
}
int PopLastElementStatic(Stack_DataType* me) 
{
	int ElementValue=-1; /* It is unsigned Value ,We will solve it Later*/
	if (CheckIfStaticStackEmpty(me))
	{
		printf("\nStack Is Empty\n");
	}
	else if (!CheckIfStaticStackEmpty(me))
	{
		me->Top--;
		ElementValue=me->Arr[me->Top];
	}
	return ElementValue;
	
} 
int PeakStatic(Stack_DataType* me)
{
	int ElementValue=-1; /* It is unsigned Value ,We will solve it Later*/
	if (CheckIfStaticStackEmpty(me))
	{
		printf("\nStack Is Empty\n");
	}
	else if (!CheckIfStaticStackEmpty(me))
	{
		ElementValue=me->Arr[me->Top-1];
	}
	return ElementValue;
}
int  CheckIfStaticStackFull(Stack_DataType* NewStack) //No more Push
{
	int CheckFull=0;
	if(NewStack!=NULL)
	{
		CheckFull=(NewStack->Top ==NewStack->Size);
	}
	return CheckFull;
}
int  CheckIfStaticStackEmpty(Stack_DataType* NewStack) //No more Pop
{
	int CheckEmpty=0;
	if(NewStack!=NULL)
	{
		CheckEmpty=(NewStack->Top ==0);
	}
	return CheckEmpty;
}
int  ClearStaticStack(Stack_DataType* NewStack)        //Clear Of the Stack Make Top=o
{
	if(NewStack!=NULL)
	{
		NewStack->Top=0;
	}
}


void PrintStack(Stack_DataType* NewStack)
{
	if (CheckIfStaticStackEmpty(NewStack))
	{
		printf("Top ->  %d\n",NewStack->Arr[(NewStack->Top)-1]);
		for(int Iterator=(NewStack->Top)-2;Iterator>=0;Iterator--)
			{
				printf("	 %d\n",NewStack->Arr[Iterator]);
			}
		printf("End of the Stack");
	}
	else 
	{
		printf("\nStack is Empty\n");
	}
}
/***************************************************************************************/
/* Stack_DataType* CreatStack(int Size)
{
	Stack_DataType*NewStack=(Stack_DataType*)malloc(sizeof(Stack_DataType));
	NewStack->Size=Size;
	return NewStack;
	
} */


/* Insert New Element */

/* void PushNewElement(Stack_DataType* NewStack,int ElementValue) 
{
	NewStack->Arr[NewStack->Top]=ElementValue;
	NewStack->Top++;
	if (NewStack->Top>=NewStack->Size)
	{
		printf("Stack OverFlow")
	}
} */


/* Delet Last Element */


/* int PopLastElement(Stack_DataType* NewStack) 
{
	if (NewStack->Top>=NewStack->Size)
	{
		printf("Element Not Found")
	}
	else 
	{
		int ElementValue=NewStack->Arr[NewStack->Top];
		NewStack->Top--;
		return ElementValue;
	}
	
} */


/* Read Last Element */


/* int ReadLastElement(Stack_DataType* NewStack)
{
	if (NewStack!=NULL)
	{
		int ElementValue=NewStack->Arr[NewStack->Top];
		return ElementValue;
	}
} */
 /* Edit Last Element */
/* void EditLastElement(Stack_DataType* NewStack,int ElementValue)
{
	NewStack->Arr[NewStack->Top-1]=ElementValue;
} */

