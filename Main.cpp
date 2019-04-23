#include <iostream> 
#include "LinkedList.h" 
#include "LinkedList.cpp" 

int main()
{

	setlocale(LC_ALL, "Russian");
	cout << "Hello \n";
	cout << "It's first laboratory work made by Victoria Skokova\n";
	cout << endl;
	LinkedList<int> lst;
	lst.push_back(4);
	lst.push_back(1);
	lst.push_back(5);
	lst.push_back(7);
	lst.push_front(2);
	cout << "------------------------------------------------------------------";
	cout << endl;

	cout << "The first list:\n";
	cout << lst;

	cout << endl;
	cout << "List's size = " << lst.get_size();
	cout << endl;

	lst.pop_front();

	cout << "We deleted list item with index 1 and get list:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;

	cout << "We print to consol list wuthout AT function:\n";
	lst.print_to_console();
	cout << endl;
	lst.pop_back();
	cout << "We deleted last list item and get list:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}


	cout << endl;

	lst.insert(2, -1);
	cout << "We added number -1 on the position with index 2:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;

	lst.remove(1);
	cout << "We deleted list item with index 1 and get list: :\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	lst.set(2, 2);
	cout << "We changed list item with index 2 into 2:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	cout << "Deleting the first list\n";
	lst.clear();
	cout << endl;
	cout << "------------------------------------------------------------------";
	cout << endl;

	LinkedList<char> lst2;
	lst2.push_back('e');
	lst2.push_back('l');
	lst2.push_back('l');
	lst2.push_back('o');
	lst2.push_front('h');
	cout << "The second list (with changing type int into char):\n";
	for (size_t i = 0; i < lst2.get_size(); i++)
	{
		cout << lst2.at(i) << " ";
	}
	cout << endl;
	cout << "Second list's size = " << lst2.get_size();
	cout << endl;

	lst2.pop_front();
	cout << "Second list after deleting the first item:\n";
	for (size_t i = 0; i < lst2.get_size(); i++)
	{
		cout << lst2.at(i) << " ";
	}
	cout << endl;

	cout << "We print to consol second list wuthout AT function:\n";
	lst2.print_to_console();
	cout << endl;
	lst2.pop_back();
	cout << "We deleted last item in second list:\n";
	for (size_t i = 0; i < lst2.get_size(); i++)
	{
		cout << lst2.at(i) << " ";
	}
	cout << endl;

	lst2.insert(2, 'i');
	cout << "We added symbol i on position with index 2:\n";
	for (size_t i = 0; i < lst2.get_size(); i++)
	{
		cout << lst2.at(i) << " ";
	}
	cout << endl;

	lst2.remove(1);
	cout << "We deleted item with index 1:\n";
	for (size_t i = 0; i < lst2.get_size(); i++)
	{
		cout << lst2.at(i) << " ";
	}
	cout << endl;
	lst2.set(1, 'e');
	cout << "We replaced item with index 1 with e symbol:\n";
	for (size_t i = 0; i < lst2.get_size(); i++)
	{
		cout << lst2.at(i) << " ";
	}
	cout << endl;
	cout << "Deleting second list\n";
	lst2.clear();
	cout << endl;
	cout << "List is empty";
	cout << endl;
	system("pause");
}