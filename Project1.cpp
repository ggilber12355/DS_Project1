#include <iostream>
#include <fstream>
#include <queue>
#include <sstream>
using namespace std;

int main(int argc,char *argv[])
{
    int m,n,i,j,cnt = 0;
    queue<int> ans;
    ofstream fout(./argv[1]/final.peak);
    ifstream fin(./argv[1]/matrix.data);
    fin >> m >> n;
    long int matrix[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            fin >> matrix[i][j];
        }
    }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i == 0)
            {
                if(j == 0)
                {
                    if(matrix[i][j] >= matrix[i+1][j] && matrix[i][j] >= matrix[i][j+1])
                    {
                        cnt++;
                        ans.push(i);
                        ans.push(j);
                    }
                }
                else if(j != 0 && j != n-1)
                {
                    if(matrix[i][j] >= matrix[i+1][j] && matrix[i][j] >= matrix[i][j-1] && matrix[i][j] >= matrix[i][j+1])
                    {
                        cnt++;
                        ans.push(i);
                        ans.push(j);
                    }
                }
                else
                {
                    if(matrix[i][j] >= matrix[i+1][j] && matrix[i][j] >= matrix[i][j-1])
                    {
                        cnt++;
                        ans.push(i);
                        ans.push(j);
                    }
                }
            }
            else if(i != 0 && i != m-1)
            {
                if(j == 0)
                {
                    if(matrix[i][j] >= matrix[i-1][j] && matrix[i][j] >= matrix[i+1][j] && matrix[i][j] >= matrix[i][j+1])
                    {
                        cnt++;
                        ans.push(i);
                        ans.push(j);
                    }
                }
                else if(j != 0 && j != n-1)
                {
                    if(matrix[i][j] >= matrix[i-1][j] && matrix[i][j] >= matrix[i+1][j] && matrix[i][j] >= matrix[i][j-1] && matrix[i][j] >= matrix[i][j+1])
                    {
                        cnt++;
                        ans.push(i);
                        ans.push(j);
                    }
                }
                else
                {
                    if(matrix[i][j] >= matrix[i+1][j] && matrix[i][j] >= matrix[i-1][j] && matrix[i][j] >= matrix[i][j-1])
                    {
                        cnt++;
                        ans.push(i);
                        ans.push(j);
                    }
                }
            }
            else
            {
                if(j == 0)
                {
                    if(matrix[i][j] >= matrix[i-1][j] && matrix[i][j] >= matrix[i][j+1])
                    {
                        cnt++;
                        ans.push(i);
                        ans.push(j);
                    }
                }
                else if(j != 0 && j != n-1)
                {
                    if(matrix[i][j] >= matrix[i-1][j] && matrix[i][j] >= matrix[i][j+1] && matrix[i][j] >= matrix[i][j-1])
                    {
                        cnt++;
                        ans.push(i);
                        ans.push(j);
                    }
                }
                else
                {
                    if(matrix[i][j] >= matrix[i-1][j] && matrix[i][j] >= matrix[i][j-1])
                    {
                        cnt++;
                        ans.push(i);
                        ans.push(j);
                    }
                }
            }
        }
    }
    fout << cnt << '\n';
    while(!ans.empty())
    {
        fout << ans.front()+1 << " ";
        ans.pop();
        fout << ans.front()+1 << '\n';
        ans.pop();
    }
    fout.close();
    fin.close();
    return 0;
}

