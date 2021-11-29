#include <bits/stdc++.h>
using namespace std;
int a[200200],b[200200],n,m;
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	cin >> m;
	for (int i = 1; i <= m; i++) cin >> b[i];
	sort(a + 1,a + n + 1);
	sort(b + 1,b + m + 1);
	int vala = n*2, valb = m*2, res2 = n*2, res1 = m*2;
	for (int i = n, j = m;i;i--)
	{
		vala++;
		while(j && b[j] >= a[i])
		{
			j--;
			valb++;
		}
		if (vala - valb >= res2 - res1)
		{
			res2 = vala;
			res1 = valb;
		}
	}
	cout << res2 << ":" << res1<<endl;
	//cin >> n;
}