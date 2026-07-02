class Solution {
public:
unordered_map<int,string>below_ten={
    {0,""},
    {1,"One"},
    {2,"Two"},
    {3,"Three"},
    {4,"Four"},
    {5,"Five"},
    {6,"Six"},
    {7,"Seven"},
    {8,"Eight"},
    {9,"Nine"}
};
unordered_map<int,string>below_twenty={
    {10,"Ten"},
    {11,"Eleven"},
    {12,"Twelve"},
    {13,"Thirteen"},
    {14,"Fourteen"},
    {15,"Fifteen"},
    {16,"Sixteen"},
    {17,"Seventeen"},
    {18,"Eighteen"},
    {19,"Nineteen"}
};
unordered_map<int,string> tens={
    {1,"Ten"},
    {2,"Twenty"},
    {3,"Thirty"},
    {4,"Forty"},
    {5,"Fifty"},
    {6,"Sixty"},
    {7,"Seventy"},
    {8,"Eighty"},
    {9,"Ninety"}
};
string solve(int num){
    if (num<10)return below_ten[num];
    else if(num<20)return below_twenty[num];
    else if(num < 100)return tens[num/10] + " "+below_ten[num%10];
    else if(num < 1000)return below_ten[num/100] + " Hundred " + solve(num%100);
    else if(num < 1000000)return solve(num/1000) + " Thousand " + solve(num%1000);
    else if(num < 1000000000)return solve(num/1000000) + " Million " + solve(num%1000000);
    else return solve(num/1000000000) + " Billion " + solve(num%1000000000);
}
    string numberToWords(int num) {
        if(num == 0)return "Zero";
return solve(num);
    }
};
