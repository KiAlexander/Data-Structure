//#ifndef STACK_DEQUE
//#define STACK_DEQUE
//#include<deque>
//using namespace std;
//template<typename StackElement>
//class Stack
//{
//public:
//	bool empty() const;
//	void push(const StackElement &value);
//	void display(ostream &out) const;
//	StackElement top() const;
//	void pop();
//private:
//	deque<StackElement> myDeque;
//};
//template<typename StackElement>
//inline bool Stack<StackElement>::empty() const
//{
//	return myDeque.empty();
//}
//template<typename StackElement>
//void Stack<StackElement>::push(cosnt StackElement &value)
//{
//	myDeque.push_back(value);
//}
//template<typename StackElement>
//void Stack<StackElement>::display(ostream& out) const
//{
//	for(int pos=myDeque,size()-1;pos>=0;pos--)
//		out<<myDeque[pos]<<endl;
//}
//template<typename StackElement>
//StackElement Stack<StackELement>::top() const
//{
//	if(!myDeque.empty())
//		return myDeque.back();
//	cerr<<"***Stack is empty***\n";
//
//}
//template<typename StackElement>
//void Stack<StackElement>::pop()
//{
//	if(!myDeque.empty())
//		myDeque.pop_back();
//	else
//		cerr<<"***Stack is empty-can't remove a value***\n";
//}
//#endif