#include <iostream>
#include <stack>

using namespace std;

stack<double> result;

int main(){
    double num;
    double tmp;
    char sign = '+';
    cout << "数字输入，“=”号结束:" << endl;
    while(sign != 'q'){
        if(sign == '='){
            tmp = 0;
            while(!result.empty()){
                tmp += result.top();
                result.pop();
            }
            cout << tmp << endl;
            cin >> sign;
            if(sign == 'q')
                break;
            sign = '+';
            continue;
        }
        else{
            cin >> num;
            if(sign == '+'){
                result.push(num);
            }
            else if(sign == '-'){
                result.push(-num);
            }
            else if(sign == '*'){
                tmp = result.top();
                result.pop();
                result.push(tmp * num);
            }
            else if(sign == '/'){
                tmp = result.top();
                result.pop();
                result.push(tmp / num);
            }
            cin >> sign;
        }
    }
    return 0;
}
