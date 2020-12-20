#include<iostream>
#include<string>
using namespace std;
int main()
{
	
    string s;
    int cnt = 0,len,ar[26] = {0};
    cin >> s;
    len = s.size();
    for(int i = 0; i < len; i++){

        if(ar[s[i] - 'a'] == 0){
            cnt++;
            ar[s[i] - 'a'] = 1;
        }
    }
    if(!(cnt%2))cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;

    return 0;
}

