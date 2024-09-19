#include "stack.h"
#include <string>
using namespace std;

class Compute{
	private:
		string str;
		//判断优先权，返回优先级
		char Precede(char op1,char op2)
		{
			char pre[7][7]={
				{'>','>','<','<','<','>','>'},
				{'>','>','<','<','<','>','>'},
				{'>','>','>','>','<','>','>'},
				{'>','>','>','>','<','>','>'},
				{'<','<','<','<','<','=','>'},
				{'>','>','>','>','>','>','>'},
				{'<','<','<','<','<','>','='}
			};
			int x,y;
			switch(op1)
			{
			case '+': x=0;
					break;
			case '-': x=1;
				break;
			case '*': x=2;
				break;
			case '/': x=3;
				break;
			case '(': x=4;
				break;
			case ')': x=5;
				break;
			case '=': x=6;
				break;
			}
			switch(op2)
			{
			case '+': y=0;
				break;
			case '-': y=1;
				break;
			case '*': y=2;
				break;
			case '/': y=3;
				break;
			case '(': y=4;
				break;
			case ')': y=5;
				break;
			case '=': y=6;
				break;
			}
			return pre[x][y];
		}
		//判断是否运算符
		bool IsOPTR(char ch)
		{
			if(ch=='+'|| ch =='-'|| ch == '*'|| ch == '/'|| ch == '('|| ch == ')'|| ch == '=')
				return true;
			else 
				return false;
		}
		//计算函数
		int Calculator(int a,char theta,int b)
		{
			switch(theta)
			{
			case '+':
				return a+b;
				break;
			case '-':
				return a-b;
				break;
			case '*':
				return a*b;
				break;
			case '/':
				return a/b;
				break;
			default:
				return 0;
				break;
		}
	
}
	public:
		Compute();
		Compute(string str);
		~Compute();
		int Result();
};

Compute::Compute(){
	//cout<<"调用构造函数";
}
Compute::Compute(string str){
	//cout<<"调用构造函数";
	this->str=str; 
}

Compute::~Compute(){
	
}

int Compute::Result(){
	Stack<char> optr;//运算符栈
	Stack<int> opnd;//运算数栈
	optr.Push('=');
	char out;
	char theta;
	int a,b;
	int i=0,t=0;
	while((str[i]!='=')||(optr.GetTop()!='='))
	{
		if(!IsOPTR(str[i]))//不是运算符则进运算数栈
		{
			while(!IsOPTR(str[i]))//可以是几位数
			{
				t = t*10+(str[i]-48);
				i++;
			}
			opnd.Push(t);
			t = 0;
		}
		else{
			switch(Precede(optr.GetTop(),str[i]))
			{
				case '<'://栈顶元素优先权低
						optr.Push(str[i]);
						i++;
						break;
				case '='://脱括号并接收下一个字符
						out = optr.Pop();
						i++;
						break;
				case '>'://退栈并将运算结果入栈
						theta = optr.Pop();
						b = opnd.Pop();
						a = opnd.Pop();
						opnd.Push(Calculator(a,theta,b));
						break;
			}
		}
	}
	return opnd.GetTop();
}