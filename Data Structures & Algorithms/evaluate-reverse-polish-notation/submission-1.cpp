class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> num;
        int n = tokens.size();
        for(auto s: tokens){
            if(s == "+" || s == "-" || s == "*" || s == "/"){
                int n1 = num.top();
                num.pop();
                int n2 = num.top();
                num.pop();
                if(s == "+") num.push(n1 + n2);
                else if(s == "-") num.push(n2-n1);
                else if(s == "*") num.push(n1*n2);
                else num.push((int)n2/n1);
            }else{
                num.push(stoi(s));
            }
        }
        return num.top();
    }
};
