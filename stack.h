const int MAX_SIZE = 100;
template <class T>
class Stack
{
private:
	T list[MAX_SIZE];
	int top;//标记
	
public:
	Stack();
	~Stack();
	void Push(T x);//入栈
	T Pop();//出栈
	T GetTop();//获取栈顶元素
	bool IsEmpty();//判断堆栈是否为空
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