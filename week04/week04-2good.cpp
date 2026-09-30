///week04-2bad.cpp 程式是對的，用進階C++迴圈
///但在CodeBlocks出錯，waring: rang-based for only available with...
///2011年之後，只有在-std=c++11或-std=gnu++11才能用
///所以，需要改一下設定: settings-compiler...
///選第二個使用C++ ISO 國際標準的 C++也就是 -std=C++11
///下面是week04的小考題目 SOIT06_ADVACNE_012
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a;
	int now;
	for (int i=0; i<20; i++) {
		cin >> now;
		if (now==0) break;
		a.push_back(now);
	}
	cin >> now;
	int ans = 0;
	for (int num : a){///在Codeblocks設定出錯時，永遠跑不出來
		if(num==now)ans++;
	}
	cout << ans << "\n";
}
