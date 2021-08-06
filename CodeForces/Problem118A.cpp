/*
 __  __   _____    ___   __   __    ___    ___    _  __  
|  \/  | |_   _|  | __|  \ \ / /   | __|  |_ _|  | |/ /  
| |\/| |   | |    | _|    \ V /    | _|    | |   | ' <   
|_|__|_|  _|_|_   |___|   _\_/_   _|_|_   |___|  |_|\_\  
_|"""""|_|"""""|_|"""""|_| """"|_| """ |_|"""""|_|"""""| 
"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-' 

*/

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <list>

typedef long long int ll;

#define all(x) x.begin(),x.end()
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define vc vector<char>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    cin >> s;
    for(int i = 0;i < s.length();i++) {
        s[i] = tolower(s[i]);
    }
    string l;
    for(int i = 0;i < s.length();i++) {
        if(s[i] != 'a' && s[i] != 'o' &&s[i] != 'y' &&s[i] != 'e' &&s[i] != 'u' &&s[i] != 'i') {
            l+='.';
            l+=s[i];
        }
    }
    cout << l << endl;
}