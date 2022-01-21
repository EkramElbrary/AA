
#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

void main (void)
{
	Stack_DataType NewStack;
	int Array[20];
	CreatStaticStack(&NewStack,Array,20);
	PushNewElementStatic(&NewStack,5);
	PushNewElementStatic(&NewStack,10);
	PushNewElementStatic(&NewStack,15);
	PushNewElementStatic(&NewStack,20);
	PushNewElementStatic(&NewStack,25);
	PrintStack(&NewStack);
	int Element =PopLastElementStatic(&NewStack);
	printf("\nElement After Pop = %d\n",Element);
	Element=PeakStatic(&NewStack);
	printf("\nElement After Peak = %d\n",Element);
	PrintStack(&NewStack);
	ClearStaticStack(&NewStack);
	PrintStack(&NewStack);

}