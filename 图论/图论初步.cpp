//邻接链表形式
struct edge
{
	int v,w,next;	
}e[maxn];
int k=1,head[maxn];
void adde(int u,int v,int w)
{
	e[k].v = v;
	e[k].w = w;
	e[k].next = head[u];
	head[u] = k++;
}
//邻接矩阵形式
for(int i=1;i<=n;i++)
{
	int j = 1;
	while(in[j] != 0) j++;
	ans[i] = j;
	in[j] =- 1;
	for(int k=1;k<=n;k++) if(vis[j][k] == 1) in[k]--;
}
//邻接链表+栈 形式
bool topsort() //拓扑排序，有拓扑序列返回真，否则返回假
{
	int p,q;
	for(int i=1;i<=n;i++) //先找到入度为零的点入栈
	{
		if(!d[i])s.push(i); //d[i]表示i点的入度，在加边的时候初始化d[i];
	}
	while(!s.empty()) //当栈非空进行操作
	{
		p = s.top(); //记录栈顶节点
		s.pop(); //弹出栈顶节点
		ans[cnt++] = p; //将弹出节点存储到结果数组，并计数
		for(int i=head[p];i!=-1;i=e[i].next) //清楚该节点的出度
		{
			q = e[i].v;
			if(!(--d[q]))s.push(q); //如果又发现入度为0的节点，继续入栈
		}
	}
	if(cnt<=n) return false; //当有节点没入栈，则说明存在环
	return true;
}
