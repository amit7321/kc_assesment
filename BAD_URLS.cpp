#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;
    string input, output ;
    ll n ;

    cin >> input ;

    n = input.size() ;
    for(int i=0;i<n;i++)
    {
        if(input[i] == '/')
        {
            output.push_back(input[i]) ;
            if(input[i+1] == '/' && input[i+2] != '/')
                i++ ;
            if(input[i+1] == '/' && input[i+2] == '/')
                i = i+2 ;

        }
        else
            output.push_back(input[i]) ;

    }

    cout << output ;

    output.clear() ;


    return 0 ;
}
