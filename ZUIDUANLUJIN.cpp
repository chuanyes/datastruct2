//多源最短路径搜索——Floyd算法
void Floyd(MGraph G,MGraph D){
	for(i=0;i<N;++i)
		for(j=0;j<N;++j){
			D[i][j]=G[i][j];
			//Path[i][j]=-1;//初始化路径数组
		}
	for(k=0;k<N;++i)
		for(i=0;i<N;++i)
			for(j=0;j<N;++j){
				if(D[i][k]+D[k][j]<D[i][j])
					D[i][j]=D[i][k]+D[k][j];
				    //Path[i][j]=k;//采用递归打印路径
			}
}
//T=O(|V|^3)
//对面坐着的小情侣看到观众已经到位，开始搂搂抱抱了，我还在淡定地写算法 
//这是一副Google Glass 就显得很刚需了
//还是给自己大大的赞 
//呵 男人 
//呵 女人
//呵 单身狗

//单源Dijkstra算法
void Dijkstra(){
	while(1){
		 S=MIN_V(V-S);//初始化：V0属于S。每次从V-S集合中取1 。
		 if(!(V-S))//V-S集合为空，退出该循环
		 	break;
		 for(w=firstgra(g,v);w>=0;w=next(g,v,w)){//广度搜索
		 	if(collected[w]==false)
		 		if(dist[v]+E[v,w]<dist[w]){//判断权值和
		 			dist[w]=dist[v]+E[v,w];//更新路径值
		 			path[w]=v;//更新路径点
		 		}

		 	
		 }
	}
}
//T=O(|V|^2+|E|) 直接扫描所有顶点
//T=O(|E|*LOG(|V|)) dist[]存入最小堆
