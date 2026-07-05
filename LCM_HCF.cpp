#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long gcd(long long a,long long b){
    long long temp;
    while(b){
        temp=b;
        b = a%b;
        a = temp;
    }
    return a;
}
long long lcm(long long a,long long b){
    long long t = gcd(a,b);
    return (a*b)/gcd(a,b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,m;
        cin>>a>>b>>c>>m;
        //long long alice = 6*(m/a) - 3*(m/(lcm(a,b))) - 3*(m/(lcm(a,c))) + 2*m/(lcm(lcm(a,b),c));
        //long long bob = 6*m/b - 3*m/(lcm(a,b)) - 3*m/(lcm(b,c)) + 2*m/(lcm(lcm(a,b),c));
        //long long carson = 6*m/c - 3*m/(lcm(c,b)) - 3*m/(lcm(a,c)) + 2*m/(lcm(lcm(a,b),c));
        long long ab = m / lcm(a,b);
long long ac = m / lcm(a,c);
long long bc = m / lcm(b,c);
long long abc = m / lcm(lcm(a,b),c);

long long A = m / a;
long long B = m / b;
long long C = m / c;

long long alice = 6*A - 3*ab - 3*ac + 2*abc;
long long bob   = 6*B - 3*ab - 3*bc + 2*abc;
long long carol = 6*C - 3*ac - 3*bc + 2*abc;
        cout<<alice <<" "<<bob<<" "<<carol<<"\n";
    }
    return 0;
}
