class graph:
    def __init__(self,vertex,adjgraph):
        self.vertex=vertex
        self.adjgraph=adjgraph
        graph=[[0 for col in range(self.vertex)] for row in range(self.vertex)]
    def minDistance(self,distance,selSource):
        min=9999
        min_index=0
        for i in range(self.vertex):
            if(min > distance[i] and selSource[i]==False):
                min=distance[i]
                min_index=min
        return min_index
    def display(self,distance):
        print("0 is source")
        for i in range(self.vertex):
            print("node 0-{} ---> {}".format(i,distance[i]))
    def dijistra(self):
        distance=[999]*self.vertex
        distance[0]=0
        selSource=[False]*self.vertex
        for i in range(self.vertex):
            min_index=self.minDistance(distance,selSource)
            selSource[min_index]=True
            for j in range(self.vertex):
                if(self.adjgraph[min_index][j]>0 and selSource[j]==False and distance[j]>distance[min_index]+self.adjgraph[min_index][j]):
                    distance[j]=distance[min_index]+self.adjgraph[min_index][j]
        self.display(distance)
noOfVertex=6
adjgraph=[[0,1,0,0,3,0],[1,0,2,0,1,0],[0,2,0,3,0,2],[0,0,3,0,0,1],[3,1,0,0,0,2],[0,0,2,1,2,0]]
obj=graph(noOfVertex,adjgraph)
obj.dijistra()
