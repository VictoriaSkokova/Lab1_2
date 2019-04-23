#pragma once 
#include <stdexcept> 

using namespace std;

template <class T>
class LinkedList {
public:
	class Node
	{
	public:

		Node(T data, Node * next = nullptr, Node * prev = nullptr) {
			this->data = data;
			this->next = next;
			this->prev = prev;
		};

		~Node()
		{
			next = nullptr;
			delete next;
			prev = nullptr;
			delete prev;
		};

		T data;
		Node* next;
		Node* prev;
	};


	Node * head{};
	Node * tail{};


	private: 
	 void add_first(T newElem); 
	 void reset_list(); 
	 size_t size; 
	 bool equals(LinkedList<T> * list);


public:
	LinkedList();
	~LinkedList();
	void push_back(T newElem); 
	void push_front(T newElem);
	void insert(size_t index, T newElem);
	T at(size_t index) const;
	void remove(size_t index);
	size_t get_size() const;
	void pop_back(); 
	void pop_front(); 
	void print_to_console();
	void clear(); 
	void set(size_t index, T newElem) const;
	bool isEmpty();

	friend std::ostream& operator << (std::ostream& Out, const LinkedList<T>& list) 
	{
		auto current = list.head;
		while (current != NULL) {
			Out << current->data << " ";
			current = current->next;

		}
		return Out;
	}
};