#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class node
{
    public:
        int num_node;
        int sendto(int dst);
        vector<int> visit;      //紀錄各點是否已搜尋到
        void define_size(int x);
        void fillroutingtable(int i,int value);
    private:
        vector<int> routingtable;

};

void node::define_size(int x)
{
    routingtable.resize(x);
    visit.resize(x);
}

void node::fillroutingtable(int i,int value)
{
    routingtable[i]=value;
}

int node::sendto(int dst)
{
    return routingtable[dst];
}


int main()
{
    int num_node,num_edge;
    cin >> num_node >> num_edge;        //讀取node數和edge數
    node nod[num_node];
    int distance[num_node][num_node];
    int adj[num_node][num_node];
    int flowid[num_edge];
    queue<int> bfslist;
    int i,j;
    for(i=0;i<num_node;i++)
    {
        nod[i].define_size(num_node);
        for(j=0;j<num_node;j++)
        {
            adj[i][j]=0;
            nod[i].visit[j]=0;
            if(i==j)
            {
                distance[i][j]=0;
            }
            else
            {
                distance[i][j]=1e9;
            }
        }
    }
    //初始化
    int a1,a2;
    for(i=0;i<num_edge;i++)
    {
        cin >> flowid[i] >> a1 >> a2 ;
        distance[a1][a2]=1;
        distance[a2][a1]=1;
        adj[a1][a2]=1;
        adj[a2][a1]=1;
    }
    //讀取graph資訊
    int request_num ;
    cin >> request_num ;
    int request_id[request_num];
    int request_str[request_num];
    int request_end[request_num];
    for(i=0;i<request_num;i++)
    {
        cin >> request_id[i] >> request_str[i] >> request_end[i];
    }
    //讀取request
    int cur_node;
    int traceback_distance;
    int traceback_node;
    int ans_path;
    int done=0;     //紀錄該點是否已做過bfs
    for(i=0;i<request_num;i++)
    {
        bfslist.push(request_str[i]);
        if(nod[request_str[i]].visit[request_str[i]]==1)
            {
                traceback_distance=distance[request_str[i]][request_end[i]];
                traceback_node=request_end[i];
                bfslist.pop();
                done=1;
                //若該點已做過bfs,跳到填routingtable部分
            }
        while((!bfslist.empty())&&done==0)
        {
            cur_node=bfslist.front();
            //cout << cur_node << " ";
            bfslist.pop();
            nod[request_str[i]].visit[cur_node]=1;
            for(j=0;j<num_node;j++)
            {
                if(adj[cur_node][j]==1&&nod[request_str[i]].visit[j]==0)
                {
                    bfslist.push(j);
                    distance[request_str[i]][j]=distance[request_str[i]][cur_node]+1;
                    nod[request_str[i]].visit[j]=1;
                    if(j==request_end[i])
                    {
                        traceback_distance=distance[request_str[i]][j];
                        traceback_node=j;
                    }
                }
            }
        }
        //bfs
        done==0;
        /*for(j=0;j<num_node;j++)
        {
            cout << distance[request_str[i]][j] << " " ;
        }
        cout << endl ;*/
        for(j=0;j<num_node;j++)
        {
            if((distance[request_str[i]][j]==traceback_distance-1)&&adj[j][traceback_node]==1)
            {
                //cout << j << " " ;
                nod[j].fillroutingtable(request_end[i],traceback_node);
                //cout << j << " " << request_end[i] << " " << traceback_node  << " " << traceback_distance <<  endl ;
                traceback_node=j;
                traceback_distance--;
                if(traceback_distance==1)
                {
                    nod[request_str[i]].fillroutingtable(request_end[i],traceback_node);
                    //cout << request_str[i] << " " << request_end[i] << " " << traceback_node << endl ;
                }
                j=-1;
            }
        }
        //從終點填routingtable填回起點
        ans_path=request_str[i];
        //cout << " " << request_id[i] << request_str[i] ;
        cout << flowid[i] << " " << ans_path ;
        while(ans_path!=request_end[i])
        {
            ans_path=nod[ans_path].sendto(request_end[i]);
            cout << " " << ans_path ;
        }
        cout << "\n";
        //output
    }
}


