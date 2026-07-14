//game theory
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int calculateMex(unordered_set<int>st){
int value =0;
while(st.count(value)){
    value++;
}
return value;
}
int calculateNumbers(int n){
    unordered_set<int>st;
    st.insert(n-1);
    st.insert(n-2);
    st.insert(n-4);
    return (calculateMex(st));
}
using namespace std;
int main(){

}
