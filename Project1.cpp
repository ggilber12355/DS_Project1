#include <iostream>
#include <fstream>
#include <queue>
#include <sstream>
using namespace std;

int main(int argc,char *argv[])
{
    int m,n,i,j,cnt = 0;
    queue<int> ans;
    fin >> m >> n;
    long int matrix[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            fin >> matrix[i][j];
        }
    }
    for(i=1;i<m-1;i++)
	{
		for(j=1;j<n-1;j++)
		{
			if(matrix[i][j] >= matrix[i-1][j] && matrix[i][j] >= matrix[i][j-1] && matrix[i][j] >= matrix[i+1][j] && matrix[i][j] >= matrix[i][j+1]
			{
				cnt++;
				ans.push(i);
				ans.push(j);
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
    return 0;
}

