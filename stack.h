const int MAX_SIZE = 100;
template <class T>
class Stack
{
private:
	T list[MAX_SIZE];
	int top;//���
	
public:
	Stack();
	~Stack();
	void Push(T x);//��ջ
	T Pop();//��ջ
	T GetTop();//��ȡջ��Ԫ��
	bool IsEmpty();//�ж϶�ջ�Ƿ�Ϊ��
};

template <class T>
Stack<T>::Stack()
{
	top =0;
}

template <class T>
Stack<T>::~Stack(){}

template <class T>
void Stack<T>::Push(T x)
{
	if(top == MAX_SIZE)
		return;
	list[top++] = x;
}

template <class T>
T Stack<T>::Pop()
{
	return list[--top];
}

template <class T>
T Stack<T>::GetTop()
{
	int tp = top;
	return list[--tp];
}

template <class T>
bool Stack<T>::IsEmpty()
{
	return top == 0;
}