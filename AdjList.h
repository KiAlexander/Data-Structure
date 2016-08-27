struct VertexNode {
	char vertex;
	ArcNode*firstarc;
};
struct ArcNode {
	int Adjvex;
	ArcNode* nextarc;
};
const int MAXSIZE = 10;
template<class T>class AlGraph
{
public:
	AlGraph(T a[], int n, int e);
	~AlGraph();
	void DFS(int v);  //深度优先遍历
	void BPS(int v);  //广度优先遍历
private:
	VertexNode adjlist[MAXSIZE];
	int        vNum, arcNum;
};
//构造函数，建立无向图的算法
template<class T>AlGraph<T>::AlGraph(T a[], int n, int e)
{
	int i, j, k;
	vNum = n;
	arcNum = e;
	for (k = 0;k < n;k++)
	{
		adjlist[k].vertex = a[k];
		adjlist[k].firstarc = NULL;
	}
	for (k = 0;k < e;k++)
	{
		cin >> i >> j;
		ArcNode*s = new ArcNode;
		s->Adjvex = j;
		s->nextarc = adjlist[i].firstarc;
		adjlist[i].firstarc = s;
	}
}
//深度优先遍历
template<class T>
void AlGraph<T>::DFS(int v)
{
	cout << adjlist[v].vertex;
	visited[v] = true;
	ArcNode*p = adjlist[v].firstarc;
	while (p)
	{
		int j = p->adjvex;
		if (!visited[j])
		   DFS(j);
		p = p->nextarc;
	}
}
//广度优先遍历
template< class T>
void AlGraph<T>::BPS(int v)
{
	int queue[MAXSIZE];
	int f = 0, r = 0;
	cout << adjlist[v].vertex;
	visted[v] = true;
	queue[++r] = v;
	while (f!=r)
	{
		v = queue[++f];
		ArcNode*p = adjlist[v].firstarc;
		while (p)
		{
			int j = p->Adjvex;
			if (!visited[j])
			{
				cout << adjlist[j].vertex;
				visited[j] = true;
				queue[++r] = j;
			}
			p=p->nextarc
		}
	}
}
//普利姆算法
void Prim()
