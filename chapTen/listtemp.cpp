#include <iostream>
#include <string>
#include <iomanip> // For Employee output formatting

using namespace std;

class Employee
{
private:
	string name;
	int age;
	float sal;
public:
	Employee(string n = "", int a = 0, float s = 0.0f) : name(n), age(a), sal(s) {} // Added 'f' for float literal
	friend ostream& operator << (ostream& s, const Employee& e);
    // If you need to delete Employee by value, you'd add:
    // bool operator==(const Employee& other) const {
    //     return name == other.name && age == other.age && sal == other.sal;
    // }
};

ostream& operator << (ostream& s, const Employee& e)
{
	// Added iomanip for better float formatting
	s << "Name: " << e.name << ", Age: " << e.age << ", Salary: $" << fixed << setprecision(2) << e.sal;
	return s;
}

template <class T>
class LinkList
{
private:
	struct node
	{
		T data;
		node* link;
	} *p;
public:
	LinkList();
	~LinkList();
	void append(T);
	void addAtBeg(T);
	void addAfter(int, T); // pos is 1-based
	void del(int);         // pos is 1-based
	void display();
	int count();
};

template <class T>
LinkList<T>::LinkList()
{
	p = nullptr; // Use nullptr for modern C++
}

template <class T>
LinkList<T>::~LinkList()
{
	node* current = p;
    node* next_node = nullptr;
	while (current != nullptr)
	{
		next_node = current->link;
		delete current;
		current = next_node;
	}
    p = nullptr;
}

template <class T>
void LinkList<T>::append(T x)
{
	node* new_node = new node;
    new_node->data = x;
    new_node->link = nullptr;

	if (p == nullptr)
	{
		p = new_node;
	}
	else
	{
		node* q = p;
		while (q->link != nullptr)
			q = q->link;
		q->link = new_node;
	}
}

template <class T>
void LinkList<T>::addAtBeg(T x)
{
	node* q = new node;
	q->data = x;
	q->link = p;
	p = q;
}

template <class T>
void LinkList<T>::addAfter(int pos, T x) // pos is 1-based, insert x AFTER this position
{
    if (pos <= 0) {
        cout << "Error: Position for addAfter must be positive." << endl;
        return;
    }
	node* q = p;
	for (int i = 1; i < pos; i++) // Traverse to the node at 'pos'
	{
		if (q == nullptr) {
            cout << "Error: Position " << pos << " for addAfter is out of bounds." << endl;
			return;
        }
		q = q->link;
	}
	if (q == nullptr) { // If pos was valid but list ended (e.g. addAfter(1) on empty list, or pos > count)
        cout << "Error: Node at position " << pos << " not found for addAfter." << endl;
		return;
    }
	node* temp = new node;
	temp->data = x;
	temp->link = q->link;
	q->link = temp;
}

template <class T>
void LinkList<T>::del(int pos) { // `pos` is 1-based position
    if (p == nullptr) {
        // cout << "List is empty. Cannot delete." << endl; // Optional: more verbose
        return;
    }
    if (pos <= 0) {
        cout << "Error: Position for deletion must be a positive integer." << endl;
        return;
    }

    node* temp_to_delete = nullptr;
    node* current_node = p;

    if (pos == 1) { // Delete the head node
        temp_to_delete = p;
        p = p->link;
    } else {
        node* prev_node = nullptr;
        for (int i = 1; current_node != nullptr && i < pos; ++i) {
            prev_node = current_node;
            current_node = current_node->link;
        }

        if (current_node == nullptr) {
            cout << "Error: Position " << pos << " is out of bounds. Cannot delete." << endl;
            return;
        }
        temp_to_delete = current_node;
        if (prev_node != nullptr) {
            prev_node->link = temp_to_delete->link;
        }
    }

    if (temp_to_delete != nullptr) {
        // Optional: cout << "Deleting node at position " << pos << " with data: " << temp_to_delete->data << endl;
        delete temp_to_delete;
    } else if (pos > 0) { // Only if pos was positive but nothing was set to delete (should be caught by current_node == nullptr)
        // This case should ideally be fully covered by the out-of-bounds check above.
        // cout << "Node at position " << pos << " not found for deletion." << endl;
    }
}


template <class T>
void LinkList<T>::display()
{
	node* q = p;
    if (q == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
	while (q != nullptr)
	{
		cout << q->data << endl;
		q = q->link;
	}
}

template <class T>
int LinkList<T>::count()
{
	int c = 0;
	node* q = p;
	while (q != nullptr)
	{
		c++;
		q = q->link;
	}
	return c;
}

int main()
{
	LinkList<int>l1;
	cout << "No. of elements in Linked List = " << l1.count() << endl;
	l1.append(11); l1.append(22); l1.append(33);
    cout << "L1 after appends:" << endl; l1.display();
	l1.append(44); l1.append(55); l1.append(66);
    cout << "L1 after more appends:" << endl; l1.display();
	l1.addAtBeg(100); l1.addAtBeg(200);
    cout << "L1 after addAtBeg:" << endl; l1.display();
	// Current: 200(1) 100(2) 11(3) 22(4) 33(5) 44(6) 55(7) 66(8)
	l1.addAfter(3, 333); // Add 333 after 11 (pos 3)
    // 200 100 11 333 22 33(5) 44(6) 55(7) 66(8)
	l1.addAfter(6, 444); // Add 444 after 33 (which is now at pos 6: 200,100,11,333,22,33)
    cout << "L1 after addAfter:" << endl; l1.display();
	cout << "Num elem in list = " << l1.count() << endl;

    // Deleting by position:
	cout << "Deleting from L1:" << endl;
    // Current L1 (example, positions will shift):
    // 200(1) 100(2) 11(3) 333(4) 22(5) 33(6) 444(7) 44(8) 55(9) 66(10)
	l1.del(1); // Deletes 200
	l1.del(5); // Deletes 33 (original pos 6, now 5 after deleting 200)
	l1.del(0); // Invalid position, will print error
	l1.del(100); // Likely out of bounds, will print error
	l1.display();
	cout << "Num elem in list = " << l1.count() << endl;

	LinkList<Employee> l2;
	cout << "\nNum elem in list l2 = " << l2.count() << endl;
	Employee e1("Pranav", 19, 1234.56f);
	Employee e2("Aum", 11, 1454.94f);
	Employee e3("Pranav2", 39, 126.56f);
	Employee e4("Aum2", 13, 334.56f);
	Employee e5("Pranav3", 12, 1334.56f);
	l2.append(e1);
	l2.append(e2);
	l2.append(e3);
	l2.append(e4);
	l2.append(e5);
	l2.display();
	cout << "Deleting 3rd employee from L2:" << endl;
	l2.del(3); // Deletes e3 (Pranav2) by position
	l2.display();
	cout << "Num elem in list l2 = " << l2.count() << endl;
	l2.addAtBeg(e5); // Adds Pranav3 at beginning
	l2.display();
    // Current l2 (example): e5(Pranav3), e1(Pranav), e2(Aum), e4(Aum2), e5(Pranav3 from append)
    // If e3 was deleted: e5(new), e1, e2, e4, e5(original)
    // Lets assume after del(3) and addAtBeg(e5):
    // e5(new, pos1), e1(pos2), e2(pos3), e4(pos4), e5(original, pos5)
	l2.addAfter(3, e1); // Add e1 after 3rd element (e2)
	l2.display();
	cout << "Num elem in list l2 = " << l2.count() << endl;
    return 0;
}
