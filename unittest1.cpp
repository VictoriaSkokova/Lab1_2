#include "stdafx.h" 
#include "CppUnitTest.h" 
#include <stdexcept> 
#include "../Lab1/LinkedList.h" 
#include "../Lab1/LinkedList.cpp" 
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab1Tests
{
	TEST_CLASS(UnitTest1)
	{
	public:
		 
		TEST_METHOD(Empty_int)
		{
			LinkedList<int> List;
			Assert::IsTrue(List.isEmpty());
		}

		TEST_METHOD(Empty_char)
		{
			LinkedList<char> List;
			Assert::IsTrue(List.isEmpty());
		}

		TEST_METHOD(Empty_double)
		{
			LinkedList<double> List;
			Assert::IsTrue(List.isEmpty());
		}

		//-------------------------------------------

		TEST_METHOD(Empty_int_false)
		{
			LinkedList<int> List;
			List.push_front(5);
			Assert::IsFalse(List.isEmpty());
		}

		TEST_METHOD(Empty_char_false)
		{
			LinkedList<char> List;
			List.push_front('e');
			Assert::IsFalse(List.isEmpty());
		}

		TEST_METHOD(Empty_double_false)
		{
			LinkedList<double> List;
			List.push_front(5.6);
			Assert::IsFalse(List.isEmpty());
		}

		//____________________________________________

		TEST_METHOD(equals_int_true)
		{
			LinkedList<int> List1;
			List1.push_back(1);
			List1.push_back(2);
			List1.push_back(3);
			List1.push_back(4);

			LinkedList<int> List2;
			List2.push_back(1);
			List2.push_back(2);
			List2.push_back(3);
			List2.push_back(4);

			Assert::IsTrue(List1.equals(&List2));
		}

		TEST_METHOD(equals_int_false)
		{
			LinkedList<int> List1;
			List1.push_back(1);
			List1.push_back(2);
			List1.push_back(3);
			List1.push_back(4);

			LinkedList<int> List2;
			List2.push_back(1);
			List2.push_back(2);
			List2.push_back(4);
			List2.push_back(4);

			Assert::IsFalse(List1.equals(&List2));
		}

		TEST_METHOD(equals_char_true)
		{
			LinkedList<char> List1;
			List1.push_back('a');
			List1.push_back('b');
			List1.push_back('c');
			List1.push_back('d');

			LinkedList<char> List2;
			List2.push_back('a');
			List2.push_back('b');
			List2.push_back('c');
			List2.push_back('d');

			Assert::IsTrue(List1.equals(&List2));
		}

		TEST_METHOD(equals_char_false)
		{
			LinkedList<char> List1;
			List1.push_back('a');
			List1.push_back('b');
			List1.push_back('c');
			List1.push_back('d');

			LinkedList<char> List2;
			List2.push_back('a');
			List2.push_back('b');
			List2.push_back('d');
			List2.push_back('d');

			Assert::IsFalse(List1.equals(&List2));
		}


		TEST_METHOD(equals_double_true)
		{
			LinkedList<double> List1;
			List1.push_back(1.1);
			List1.push_back(2.2);
			List1.push_back(3.3);
			List1.push_back(4.4);

			LinkedList<double> List2;
			List2.push_back(1.1);
			List2.push_back(2.2);
			List2.push_back(3.3);
			List2.push_back(4.4);

			Assert::IsTrue(List1.equals(&List2));
		}


		TEST_METHOD(equals_double_false)
		{
			LinkedList<double> List1;
			List1.push_back(1.1);
			List1.push_back(2.2);
			List1.push_back(3.3);
			List1.push_back(4.4);

			LinkedList<double> List2;
			List2.push_back(1.2);
			List2.push_back(2.1);
			List2.push_back(3.4);
			List2.push_back(4.3);

			Assert::IsFalse(List1.equals(&List2));
		}

		//______________________________________________

		TEST_METHOD(at_last_item_int)
		{

			LinkedList<int>List;
			List.push_back(1);
			List.push_back(2);
			List.push_back(3);
			List.push_back(4);

			Assert::IsTrue(List.at(3) == 4);
		}
		TEST_METHOD(at_first_item_int)
		{

			LinkedList<int> List;
			List.push_back(1);
			List.push_back(2);
			List.push_back(3);
			List.push_back(4);

			Assert::IsTrue(List.at(0) == 1);
		}
		TEST_METHOD(at_middle_item_int)
		{

			LinkedList<int> List;
			List.push_back(1);
			List.push_back(2);
			List.push_back(3);
			List.push_back(4);

			Assert::IsTrue(List.at(2) == 3);
		}

		TEST_METHOD(at_last_item_char)
		{

			LinkedList<char>List;
			List.push_back('a');
			List.push_back('b');
			List.push_back('c');
			List.push_back('d');

			Assert::IsTrue(List.at(3) == 'd');
		}
		TEST_METHOD(at_first_item_char)
		{

			LinkedList<char> List;
			List.push_back('a');
			List.push_back('b');
			List.push_back('c');
			List.push_back('d');

			Assert::IsTrue(List.at(0) == 'a');
		}
		TEST_METHOD(at_middle_item_char)
		{

			LinkedList<char> List;
			List.push_back('a');
			List.push_back('b');
			List.push_back('c');
			List.push_back('d');

			Assert::IsTrue(List.at(2) == 'c');
		}

		TEST_METHOD(at_last_item_double)
		{

			LinkedList<double>List;
			List.push_back(1.1);
			List.push_back(2.2);
			List.push_back(3.3);
			List.push_back(4.4);

			Assert::IsTrue(List.at(3) == 4.4);
		}
		TEST_METHOD(at_first_item_double)
		{

			LinkedList<double> List;
			List.push_back(1.1);
			List.push_back(2.2);
			List.push_back(3.3);
			List.push_back(4.4);

			Assert::IsTrue(List.at(0) == 1.1);
		}
		TEST_METHOD(at_middle_item_double)
		{

			LinkedList<double> List;
			List.push_back(1.1);
			List.push_back(2.2);
			List.push_back(3.3);
			List.push_back(4.4);

			Assert::IsTrue(List.at(2) == 3.3);
		}


		//____________________________________

		TEST_METHOD(get_size_empty_int)
		{
			LinkedList<int> List;
			Assert::IsTrue(List.get_size() == 0);
		}

		TEST_METHOD(get_size_empty_char)
		{
			LinkedList<char> List;
			Assert::IsTrue(List.get_size() == 0);
		}

		TEST_METHOD(get_size_empty_double)
		{
			LinkedList<double> List;
			Assert::IsTrue(List.get_size() == 0);
		}

		//____________________________________________
		
		TEST_METHOD(get_size_true_int)
		{
			LinkedList<int> List;
			List.push_back(1);
			List.push_back(2);
			List.push_back(3);

			Assert::IsTrue(List.get_size() == 3);
		}
		TEST_METHOD(get_size_false_int)
		{
			LinkedList<int> List;
			List.push_back(0);
			List.push_back(5);
			List.push_front(2);
			List.push_front(4);
			Assert::IsFalse(List.get_size() == 1);
		}

		TEST_METHOD(get_size_true_char)
		{
			LinkedList<char> List;
			List.push_back('a');
			List.push_back('b');
			List.push_back('c');

			Assert::IsTrue(List.get_size() == 3);
		}
		TEST_METHOD(get_size_false_char)
		{
			LinkedList<char> List;
			List.push_back('a');
			List.push_back('b');
			List.push_front('c');
			List.push_front('d');
			Assert::IsFalse(List.get_size() == 3);
		}

		TEST_METHOD(get_size_true_double)
		{
			LinkedList<double> List;
			List.push_back(1.1);
			List.push_back(2.2);
			List.push_back(3.3);

			Assert::IsTrue(List.get_size() == 3);
		}
		TEST_METHOD(get_size_false_double)
		{
			LinkedList<double> List;
			List.push_back(1.1);
			List.push_back(2.2);
			List.push_front(3.3);
			List.push_front(4.4);
			Assert::IsFalse(List.get_size() == 3);
		}

		//__________________________________________________
		
		TEST_METHOD(push_front_true_int)
		{
			LinkedList<int> List;
			List.push_front(1);
			List.push_front(2);
			List.push_front(3);
			List.push_front(4);

			Assert::IsTrue(List.at(3) == 1);
		}
		TEST_METHOD(push_front_false_int)
		{
			LinkedList<int> List;
			List.push_front(1);
			List.push_front(2);
			List.push_front(3);
			List.push_front(4);

			Assert::IsFalse(List.at(3) == 4);
		}

		TEST_METHOD(push_front_true_char)
		{
			LinkedList<char> List;
			List.push_front('a');
			List.push_front('b');
			List.push_front('c');
			List.push_front('d');

			Assert::IsTrue(List.at(3) == 'a');
		}
		TEST_METHOD(push_front_false_char)
		{
			LinkedList<char> List;
			List.push_front('a');
			List.push_front('b');
			List.push_front('c');
			List.push_front('d');

			Assert::IsFalse(List.at(3) == 'd');
		}

		TEST_METHOD(push_front_true_double)
		{
			LinkedList<double> List;
			List.push_front(1.1);
			List.push_front(2.2);
			List.push_front(3.3);
			List.push_front(4.4);

			Assert::IsTrue(List.at(3) == 1.1);
		}
		TEST_METHOD(push_front_false_double)
		{
			LinkedList<double> List;
			List.push_front(1.1);
			List.push_front(2.2);
			List.push_front(3.3);
			List.push_front(4.4);

			Assert::IsFalse(List.at(3) == 4.4);
		}


		//____________________________________________

		TEST_METHOD(push_back_true_int)
		{
			LinkedList<int> List;
			List.push_back(1);
			List.push_back(2);
			List.push_back(3);
			List.push_back(4);

			Assert::IsTrue(List.at(3) == 4);
		}
		TEST_METHOD(push_back_false_int)
		{
			LinkedList<int> List;
			List.push_back(1);
			List.push_back(2);
			List.push_back(3);
			List.push_back(4);

			Assert::IsFalse(List.at(3) == 3);
		}

		TEST_METHOD(push_back_true_char)
		{
			LinkedList<int> List;
			List.push_back('a');
			List.push_back('b');
			List.push_back('c');
			List.push_back('d');

			Assert::IsTrue(List.at(3) == 'd');
		}
		TEST_METHOD(push_back_false_char)
		{
			LinkedList<int> List;
			List.push_back('a');
			List.push_back('b');
			List.push_back('c');
			List.push_back('d');

			Assert::IsFalse(List.at(3) == 'c');
		}
		TEST_METHOD(push_back_true_double)
		{
			LinkedList<double> List;
			List.push_back(1.1);
			List.push_back(2.2);
			List.push_back(3.3);
			List.push_back(4.4);

			Assert::IsTrue(List.at(3) == 4.4);
		}
		TEST_METHOD(push_back_false_double)
		{
			LinkedList<double> List;
			List.push_back(1.1);
			List.push_back(2.2);
			List.push_back(3.3);
			List.push_back(4.4);

			Assert::IsFalse(List.at(3) == 3.3);
		}
		//___________________________________________
		
		
		TEST_METHOD(equals_pushback_false_int)
		{
			LinkedList<int> List1;
			List1.push_back(1);
			List1.push_back(2);
			List1.push_back(3);


			LinkedList<int> List2;
			List2.push_back(1);


			Assert::IsFalse(List1.equals(&List2));
		}

		TEST_METHOD(equals_pushback_front_false_int)
		{
			LinkedList<int> List1;
			List1.push_front(1);
			List1.push_front(2);
			List1.push_back(3);


			LinkedList<int> List2;
			List2.push_front(1);


			Assert::IsFalse(List1.equals(&List2));
		}



		TEST_METHOD(equals_pushback_false_char)
		{
			LinkedList<char> List1;
			List1.push_back('a');
			List1.push_back('b');
			List1.push_back('c');


			LinkedList<char> List2;
			List2.push_back('a');


			Assert::IsFalse(List1.equals(&List2));
		}

		TEST_METHOD(equals_pushback_front_false_char)
		{
			LinkedList<char> List1;
			List1.push_front('a');
			List1.push_front('b');
			List1.push_back('c');


			LinkedList<char> List2;
			List2.push_front('a');


			Assert::IsFalse(List1.equals(&List2));
		}


		TEST_METHOD(equals_pushback_false_double)
		{
			LinkedList<double> List1;
			List1.push_back(1.1);
			List1.push_back(2.2);
			List1.push_back(3.3);


			LinkedList<double> List2;
			List2.push_back(1.1);


			Assert::IsFalse(List1.equals(&List2));
		}

		TEST_METHOD(equals_pushback_front_false_double)
		{
			LinkedList<double> List1;
			List1.push_front(1.1);
			List1.push_front(2.2);
			List1.push_back(3.3);


			LinkedList<double> List2;
			List2.push_front(1.1);


			Assert::IsFalse(List1.equals(&List2));
		}

		//____________________________________________
		
		TEST_METHOD(pop_back_int)
		{
			LinkedList<int> List1;
			List1.push_back(1);
			List1.push_back(2);
			List1.push_back(3);
			List1.push_back(4);

			LinkedList<int> List2;
			List2.push_back(1);
			List2.push_back(2);
			List2.push_back(3);

			List1.pop_back();

			Assert::IsTrue(List1.equals(&List2));
		}
		TEST_METHOD(pop_front_int)
		{
			LinkedList<int> List1;
			List1.push_front(5);

			List1.push_front(1);
			List1.push_front(2);
			List1.push_front(3);


			LinkedList<int> List2;
			List2.push_front(1);
			List2.push_front(2);
			List2.push_front(3);

			List1.pop_front();

			Assert::IsFalse(List1.equals(&List2));
		}

		TEST_METHOD(pop_back_char)
		{
			LinkedList<char> List1;
			List1.push_back('a');
			List1.push_back('b');
			List1.push_back('c');
			List1.push_back('d');

			LinkedList<char> List2;
			List2.push_back('a');
			List2.push_back('b');
			List2.push_back('c');

			List1.pop_back();

			Assert::IsTrue(List1.equals(&List2));
		}
		TEST_METHOD(pop_front_char)
		{
			LinkedList<char> List1;
			List1.push_front('d');

			List1.push_front('a');
			List1.push_front('b');
			List1.push_front('c');


			LinkedList<char> List2;
			List2.push_front('a');
			List2.push_front('b');
			List2.push_front('c');

			List1.pop_front();

			Assert::IsFalse(List1.equals(&List2));
		}

		TEST_METHOD(pop_back_double)
		{
			LinkedList<double> List1;
			List1.push_back(1.1);
			List1.push_back(2.2);
			List1.push_back(3.3);
			List1.push_back(4.4);

			LinkedList<double> List2;
			List2.push_back(1.1);
			List2.push_back(2.2);
			List2.push_back(3.3);

			List1.pop_back();

			Assert::IsTrue(List1.equals(&List2));
		}
		TEST_METHOD(pop_front_double)
		{
			LinkedList<double> List1;
			List1.push_front(5.5);

			List1.push_front(1.1);
			List1.push_front(2.2);
			List1.push_front(3.3);


			LinkedList<double> List2;
			List2.push_front(1.1);
			List2.push_front(2.2);
			List2.push_front(3.3);
			List1.pop_front();

			Assert::IsFalse(List1.equals(&List2));
		}

		//_________________________________________________
		
		TEST_METHOD(insert_beg_int)
		{
			LinkedList<int> List1;
			List1.push_back(1);
			List1.push_back(3);
			List1.push_back(4);

			LinkedList<int> List2;

			List2.push_back(3);
			List2.push_back(4);

			List2.insert(0, 1);

			Assert::IsTrue(List1.equals(&List2));
		}
		TEST_METHOD(insert_middle_int)
		{
			LinkedList<int> List1;
			List1.push_back(1);
			List1.push_back(3);
			List1.push_back(4);

			LinkedList<int> List2;
			List2.push_back(1);
			List2.push_back(2);
			List2.push_back(3);
			List2.push_back(4);

			List1.insert(1, 2);

			Assert::IsTrue(List1.equals(&List2));
		}
		TEST_METHOD(insert_last_int)
		{
			LinkedList<int> List1;
			List1.push_back(1);
			List1.push_back(2);
			List1.push_back(3);

			LinkedList<int> List2;
			List2.push_back(1);
			List2.push_back(2);
			List2.push_back(3);
			List2.push_back(4);

			List1.insert(1, 4);

			Assert::IsFalse(List1.equals(&List2));
		}

		TEST_METHOD(insert_beg_char)
		{
			LinkedList<char> List1;
			List1.push_back('a');
			List1.push_back('b');
			List1.push_back('c');

			LinkedList<char> List2;

			List2.push_back('b');
			List2.push_back('c');

			List2.insert(0, 'a');

			Assert::IsTrue(List1.equals(&List2));
		}
		TEST_METHOD(insert_middle_char)
		{
			LinkedList<char> List1;
			List1.push_back('a');
			List1.push_back('b');
			List1.push_back('d');

			LinkedList<char> List2;
			List2.push_back('a');
			List2.push_back('b');
			List2.push_back('c');
			List2.push_back('d');

			List1.insert(2, 'c');

			Assert::IsTrue(List1.equals(&List2));
		}
		TEST_METHOD(insert_last_char)
		{
			LinkedList<char> List1;
			List1.push_back('a');
			List1.push_back('b');
			List1.push_back('c');

			LinkedList<char> List2;
			List2.push_back('a');
			List2.push_back('b');
			List2.push_back('c');
			List2.push_back('d');

			List1.insert(1, 'd');

			Assert::IsFalse(List1.equals(&List2));
		}

		TEST_METHOD(insert_beg_double)
		{
			LinkedList<double> List1;
			List1.push_back(1.1);
			List1.push_back(3.3);
			List1.push_back(4.4);

			LinkedList<double> List2;

			List2.push_back(3.3);
			List2.push_back(4.4);

			List2.insert(0, 1.1);

			Assert::IsTrue(List1.equals(&List2));
		}
		TEST_METHOD(insert_middle_double)
		{
			LinkedList<double> List1;
			List1.push_back(1.1);
			List1.push_back(3.3);
			List1.push_back(4.4);

			LinkedList<double> List2;
			List2.push_back(1.1);
			List2.push_back(2.2);
			List2.push_back(3.3);
			List2.push_back(4.4);

			List1.insert(1, 2.2);

			Assert::IsTrue(List1.equals(&List2));
		}
		TEST_METHOD(insert_last_double)
		{
			LinkedList<double> List1;
			List1.push_back(1.1);
			List1.push_back(2.2);
			List1.push_back(3.3);

			LinkedList<double> List2;
			List2.push_back(1.1);
			List2.push_back(2.2);
			List2.push_back(3.3);
			List2.push_back(4.4);

			List1.insert(1, 4.4);

			Assert::IsFalse(List1.equals(&List2));
		}

		//______________________________________________
		TEST_METHOD(clear_not_empty)
		{
			LinkedList<int> List1;
			List1.push_back(1);
			List1.push_back(2);
			List1.push_back(3);
			List1.clear();
			Assert::IsTrue(List1.isEmpty());

		}
		TEST_METHOD(clear_empty)
		{
			LinkedList<int> List;
			List.clear();
			Assert::IsTrue(List.isEmpty());
		}

		//__________________________________________________
		TEST_METHOD(set_in_List_true)
		{
			LinkedList<int> List1;
			List1.push_back(1);
			List1.push_back(2);
			List1.push_back(3);
			List1.set(1, 8);
			Assert::IsTrue(List1.at(1) == 8);
		}
		TEST_METHOD(set_in_List_false)
		{
			LinkedList<int> List1;
			List1.push_back(1);
			List1.push_back(2);
			List1.push_back(3);
			List1.set(1, 9);
			Assert::IsFalse(List1.at(1) == 1);
		}

		//________________________________________________________
		TEST_METHOD(delete_middle_item)
		{
			LinkedList<int> list1;
			list1.push_back(1);
			list1.push_back(2);
			list1.push_back(3);
			list1.push_back(4);

			LinkedList<int> list2;
			list2.push_back(1);
			list2.push_back(2);
			list2.push_back(4);

			list1.remove(2);

			Assert::IsTrue(list1.equals(&list2));
		}
		TEST_METHOD(delete_first_item)
		{
			LinkedList<int> list1;
			list1.push_back(5);
			list1.push_back(1);
			list1.push_back(2);
			list1.push_back(4);

			LinkedList<int> list2;
			list2.push_back(1);
			list2.push_back(2);
			list2.push_back(4);

			list1.remove(0);

			Assert::IsTrue(list1.equals(&list2));
		}
		TEST_METHOD(delete_false)
		{
			LinkedList<int> list1;
			list1.push_back(1);
			list1.push_back(2);
			list1.push_back(3);
			list1.push_back(4);

			LinkedList<int> list2;
			list2.push_back(1);
			list2.push_back(2);
			list2.push_back(4);

			list1.remove(1);

			Assert::IsFalse(list1.equals(&list2));
		}

		//_______________________________________________

		TEST_METHOD(insert_huge_index_iskl)
		{
			LinkedList<int> list;
			list.push_back(3);
			list.push_back(4);
			char error;
			try
			{
				list.insert(1, 5);
			}
			catch (const std::out_of_range& error)
			{

				Assert::AreEqual("Index is greater than list size", error.what());
			}


		}
		TEST_METHOD(delete_huge_index_iskl)
		{
			LinkedList<int> list;
			list.push_back(3);
			list.push_back(4);
			char error;
			try
			{
				list.remove(5);
			}
			catch (const std::out_of_range& error)
			{

				Assert::AreEqual("Index is greater than size of list", error.what());
			}


		}
		TEST_METHOD(set_huge_index_iskl)
		{
			LinkedList<int> list;
			list.push_back(3);
			list.push_back(4);
			char error;
			try
			{
				list.set(5, 1);
			}
			catch (const std::out_of_range& error)
			{

				Assert::AreEqual("Index is greater than list size", error.what()); 
			}


		}


	};
}