#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> stack;
        int a, b;
        string result = "";
        int get = 0;
        string choice;
        int value = 0;
        string p = "";
        for (auto token : tokens) {
            if (token != "+" && token != "-" && token != "*" && token != "/") {
                stack.push(token);
                continue;
            } else {
                choice = token;
            }
            if (choice == "+") {
                a = stoi(stack.pop());
                b = stoi(stack.pop());
                value = a + b;
                result = p + value;
                stack.push(result);
            } else if (choice == "_") {
               a = stoi(stack.pop());
                b = stoi(stack.pop());
                value = a - b;
                result = p + value;
                stack.push(result); 
            } else if (choice == "*") {
                a = stoi(stack.pop());
                b = stoi(stack.pop());
                value = a * b;
                result = p + value;
                stack.push(result);
            } else if (choice == "/") {
                 a = stoi(stack.pop());
                b = stoi(stack.pop());
                value = a / b;
                result = p + value;
                stack.push(result);
            }
        }
        return stoi(stack.pop());
        
    }
};