#include <bits/stdc++.h>
using namespace std;

struct LinkNode
{
	char val;
	LinkNode *next;
	LinkNode() : val('0'), next(nullptr) {}
	LinkNode(char x) : val(x), next(nullptr) {}
};

void caseDiff(LinkNode *head)
{

	LinkNode *upper = new LinkNode();
	LinkNode *lower = new LinkNode();
	LinkNode *q = lower;
	LinkNode *p = upper;
	while (head)
	{
		if (isupper(head->val))
		{
			p->next = new LinkNode(head->val);
			p = p->next;
		}
		else
		{
			q->next = new LinkNode(head->val);
			q = q->next;
		}
		head = head->next;
	}
	p = upper->next;
	cout << "Uppercase linked list : ";
	while (p)
	{
		cout << p->val << "->";
		p = p->next;
	}
	cout << "NULL" << endl;
	q = lower->next;
	cout << "Lowercase linked list : ";
	while (q)
	{
		cout << q->val << "->";
		q = q->next;
	}
	cout << "NULL";
}

int main()
{
	int n;
	cout << "Enter number of nodes : ";
	cin >> n;
	LinkNode *head = new LinkNode();
	LinkNode *temp = head;
	cout << "Enter string : ";
	while (n--)
	{
		char c;
		cin >> c;
		temp->next = new LinkNode(c);
		temp = temp->next;
	}
	caseDiff(head->next);
	return 0;
}