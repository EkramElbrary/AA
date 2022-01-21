

typedef Struct queue_t
{
	int Front ;
	int Back;
	int *Arr;
	int Counter;
	int Size;
	
	
}Queue;

void Gueue_Create(Queue *me,int*arr,int arr_size);
void Gueue_Enqueue(Queue *me , int Data);
int Gueue_Dequeue(Queue *me);
void Gueue_PeakFront();
void Gueue_PeakBack();
int Gueue_isFull(Queue *me);
int Gueue_isEmpty(Queue *me);
void Gueue_Clear(Queue *me)