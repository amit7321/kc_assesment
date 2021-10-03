#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define tc(t) while(t--)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)


int main()
{
    IOS ;
    string firstNum ;
    string  secondNum ;
    string output ;
    ll n1, n2 ;
    int total, carry ;

    cin >> firstNum ;
    cin >> secondNum ;

    if(firstNum.length() > secondNum.length())
        swap(firstNum, secondNum) ;

    n1 = firstNum.length() ;
    n2 = secondNum.length() ;

    reverse(firstNum.begin(), firstNum.end()) ;
    reverse(secondNum.begin(), secondNum.end()) ;

    carry = 0 ;

    for(int i=0;i<n1;i++)
    {
        total = ((firstNum[i] - '0') + (secondNum[i] - '0') + carry) ;
        output.push_back(total%10 + '0') ;
        carry = total/10 ;

    }

    for(int i=n1;i<n2;i++)
    {
        total = ((secondNum[i] - '0') + carry) ;
        output.push_back(total%10 + '0') ;
        carry = total/10 ;

    }

    if(carry > 1)
        output.push_back(carry + '0') ;

    reverse(output.begin(), output.end()) ;

    cout << output ;

    output.clear() ;


    return 0 ;
}

