#include"LinkedList.h"

void make_list(List& list)
{
	list.head = new Node;
	list.head->val = NULL;
	list.head->next = nullptr;
	list.length = 0;
}

int length(List& list)
{
	return list.length;
}

void insert(List& list, int data)
{
	Node* temp = list.head;

	Node* new_node = new Node;
	new_node->val = data;
	new_node->next = nullptr;

	// ����Ʈ�� ����� ���
	if (list.length == 0)
		list.head = new_node;
	// ����Ʈ�� ��尡 ���� ���
	else
	{
		while (temp->next != nullptr)
			temp = temp->next;

		temp->next = new_node;
	}

	list.length++;
}

bool insert_at(List& list, int pos, int data)
{
	Node* temp = list.head;

	// pos�� ���̸� �Ѿ ���
	if (pos > list.length)
		return false;

	Node* new_node = new Node;
	new_node->val = data;
	new_node->next = nullptr;

	// pos�� 0�� ���
	if (pos == 0)
		temp = new_node;
	// pos�� 0�� �ƴ� ���
	else
	{
		for (int i = 0; i < pos; i++)
			temp = temp->next;

		temp->next = new_node;
	}

	list.length++;

	return true;
}

bool remove(List& list, int data)
{
	// ���� ���̰� 0�̶��
	if (list.length == 0)
		return false;

	Node* prev = list.head;
	Node* curr = list.head;

	if (list.head->val == data)
	{
		list.head = list.head->next;
		delete prev;
		list.length--;
		return true;
	}

	while (curr->next != nullptr)
	{
		if (curr->val == data)
		{
			prev->next = curr->next;
			delete curr;
			curr = prev->next;
			list.length--;
			return true;
		}
		else
		{
			prev = curr;
			curr = curr->next;
		}
	}

	if (curr->val == data)
	{
		delete curr;
		prev->next = nullptr;
		list.length--;
		return true;
	}

	return false;
}

bool remove_at(List& list, int pos)
{
	// ���� ���̰� 0�̶��
	if (list.length == 0)
		return false;

	// pos�� ������ �Ѿ�ٸ�
	if (pos > list.length || pos < 0)
		return false;

	// ���� pos�� 0�̶��
	if (pos == 0)
	{
		Node* temp = list.head;
		list.head = list.head->next;
		delete temp;
		list.length--;
		return true;
	}

	Node* prev = list.head;
	Node* curr = list.head;

	// �ش� ��ġ���� �̵�.
	for (int i = 0; i < pos; i++)
	{
		prev = curr;
		curr = curr->next;
	}

	prev->next = curr->next;
	delete curr;
	curr = prev->next;
	list.length--;

	return true;
}

void print_all(List& list)
{
	Node* temp = list.head;

	cout << "{ ";
	while (temp != nullptr)
	{
		cout << temp->val;
		cout << "->";
		temp = temp->next;
	}

	cout << "}" << endl;
}
