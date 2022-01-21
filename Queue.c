#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"


typedef Struct queue_t
{
	int Front ;
	int Back;
	int *Arr;
	int Counter;
	int Size;
	
	
}Queue;
void Gueue_Create(Queue *me,int*arr,int arr_size)
{
	if (me!=NULL)
	{
		me->Arr=arr;
		me->Size=arr_size;
		me->Counter=0;
		me->Front=0;
		me->Back=0;
	}
}
void Gueue_Enqueue(Queue *me , int Data)
{
	if ((me!=NULL)&&(!Gueue_isFull(me))
	{
		me->Arr[me->Back]=Data;
		//(me->me->Back <  me->Size)? me->Back++ : me->Back=0 ;
		me->Back=(me->Back+1) % me->Size;
		me->Counter++;
	}
}
int Gueue_Dequeue(Queue *me)
{
	if ((me!=NULL)&&(!Gueue_isEmpty(me))
	{
		int Data = me->Arr[me->Front];
		//(me->me->Back <  me->Size)? me->Back++ : me->Back=0 ;
		me->Front=(me->Front+1) % me->Size;
		me->Counter--;
	}
	return Data;
}
void Gueue_PeakFront(); //Read the Value
void Gueue_PeakBack();
int Gueue_isFull(Queue *me)
{
	return(me->Counter == me->Size);	
}
int Gueue_isEmpty(Queue *me)
{
	return(me->Counter == 0);
}
void Gueue_Clear(Queue *me)
{
	if (me!=NULL)
		{
			me->Counter=0;
			me->Front=0;
			me->Back=0;
		}
}