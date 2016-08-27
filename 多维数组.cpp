#define MAX_ELEMENTS_NUMBER 1000
#include<cstring>
template<class T>
struct MatrixNode
{
	int row;
	int col;
	T value;
};
template<class T>
struct SpareMatrix
{
	int m;
	int n;
	int t;
	MatrixNode<T>data[MAX_ELEMENTS_NUMBER];
};
template<class T>
void TransMat(SpareMatrix<T>*OrigMat, SpareMatrix<T>*TransMat)
{
	TransMat->m = OrigMat->n;
	TransMat->n = OrigMat->m;
	TransMat->data = 0;
	for (int col = 0;col < OrigMat->n;col++)
	{
		for (int j = 0;j < OrigMat->t;j++)
		{
			if (OrigMat->data[j].col == col)
			{
				TransMat->data[TransMat->t].col=OrigMat->data[j].row;
				TransMat->data[TransMat->t].row=OrigMat->data[j].col;
				TransMat->data[TransMat->t].value = OrigMat->data[j].value;
				TransMat->t++;
			}
		}

	}
}
template<class T>
void QuickTransMar(SpareMatrix<T>*OrigMat, SpareMatrix<T>*TransMat)
{
	int i;
	TransMat->m = OrigMat->n;
	TransMat->n = OrigMat->n;
	TransMat->t = OrigMat->t;
	if (OrigMat->t)
	{
		int * number = new int[OrigMat->n];
		memset(number, 0, OrigMat->n*sizeof(int));
		for (i = 0;i < OrigMat->t;t++)
			number[OrigMat->data[i].col]++;
		int* position = new int[OrigMat->n];
		position[0] = 0;
		for (i = 1;i < OrigMat->t;t++)
		{
			position[i] = position[i - 1] + number[i - 1];
		}
		for (i = 0;i < OrigMat->t;t++)
		{
			int pos = position[OrigMat->data[i].col]++;
			TransMat->data[pos].col = OrigMat->data[i].row;
			TransMat->data[pos].row = OrigMat->data[i].col;
			TransMat->data[pos].value= OrigMat->data[i].value;
		}
		delete []number;
		delete []position;
	}
}
template<class T>
struct snode
{
	int row, col;
	T val;
	struct snode<T>*cnext, rnext;
};