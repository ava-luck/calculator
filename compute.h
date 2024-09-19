#include "stack.h"
#include <string>
using namespace std;

class Compute{
	private:
		string str;
		//�ж�����Ȩ���������ȼ�
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
		//�ж��Ƿ������
		bool IsOPTR(char ch)
		{
			if(ch=='+'|| ch =='-'|| ch == '*'|| ch == '/'|| ch == '('|| ch == ')'|| ch == '=')
				return true;
			else 
				return false;
		}
		//���㺯��
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
	//cout<<"���ù��캯��";
}
Compute::Compute(string str){
	//cout<<"���ù��캯��";
	this->str=str; 
}

Compute::~Compute(){
	
}

int Compute::Result(){
	Stack<char> optr;//�����ջ
	Stack<int> opnd;//������ջ
	optr.Push('=');
	char out;
	char theta;
	int a,b;
	int i=0,t=0;
	while((str[i]!='=')||(optr.GetTop()!='='))
	{
		if(!IsOPTR(str[i]))//������������������ջ
		{
			while(!IsOPTR(str[i]))//�����Ǽ�λ��
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
				case '<'://ջ��Ԫ������Ȩ��
						optr.Push(str[i]);
						i++;
						break;
				case '='://�����Ų�������һ���ַ�
						out = optr.Pop();
						i++;
						break;
				case '>'://��ջ������������ջ
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