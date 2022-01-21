
#ifndef  STACK_H_
#define  STACK_H_


typedef struct Stack_t
{
	int Top;
	int *Arr;
	int Size;  //Size of the array
}Stack_DataType;



void CreatStaticStack(Stack_DataType* me,int *Arr,int ArrSize);
void PushNewElementStatic(Stack_DataType* me,int ElementValue) ;
int PopLastElementStatic(Stack_DataType* me);
int PeakStatic(Stack_DataType* me);
int  CheckIfStaticStackFull(Stack_DataType* NewStack);
int  CheckIfStaticStackEmpty(Stack_DataType* NewStack);
int  ClearStaticStack(Stack_DataType* NewStack);

void PrintStack(Stack_DataType* NewStack);



/* Stack_DataType* PushNewElement(int Size);
void PushNewElement(Stack_DataType* NewStack,int ElementValue);
int PopLastElement(Stack_DataType* NewStack);
int  ReadLastElement(Stack_DataType* NewStack);  
void EditLastElement(Stack_DataType* NewStack,int ElementValue); 
 */


#endif