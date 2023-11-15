#include <iostream>
#include <cstring>
using namespace std;
struct man
{
	string name;
	int sex;
	int age;
	string phone;
};
struct books
{
	struct man arr[1000];
	int size;
};
books aa;
void add(books* p)
{
	if (p->size == 1000)
	{
		cout << "����" << endl;
	}
	else {
		string sname;
		cout << "����������" << endl;
		cin >> sname;
		p->arr[p->size].name = sname;
		cout << "�������Ա�" << endl;
		cout << "�С���1" << endl << "Ů����2" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				p->arr[p->size].sex = sex;
				break;
			}
			else  cout << "�����,���䡣" << endl;
		}
		cout << "����������" << endl;
		int age = 0;
		cin >> age;
		p->arr[p->size].age = age;
		cout << "������绰" << endl;
		string phone;
		cin >> phone;
		p->arr[p->size].phone = phone;
		p->size++;
		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");
	}
}
void show(books* p) {
	if (p->size == 0) {
		cout << "�տ���Ҳ" << endl;
	}
	else {
		for (int i = 0; i < p->size; i++)
		{

			cout << "����:" << p->arr[i].name << "\t";
			cout << "�Ա�:" << (p->arr[i].sex == 1 ? "��" : "Ů") << "\t";
			cout << "����:" << p->arr[i].age << "\t";
			cout << "�绰:" << p->arr[i].phone << endl;
		}
	}
	system("pause");
	system("cls");
}
int ex(books* p, string name) {
	for(int i = 0; i < p->size; i++)
	{
		if (p->arr[i].name == name) {
			return i;
		}
		else {
			return -1;
		}
	}
}
void ll(books * p) {
	cout << "��ɾ����ϵ������" << endl;
	string name;
	cin >> name;
	int a = ex(&aa, name);
	if (a != -1) {
		for (int i = a; i < p->size; i++) {
			p->arr[i] = p->arr[i + 1];
		}
		p->size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else { cout << "���޴���" << endl; }
	system("pause");
	system("cls");
}
void find (books * p) {
	cout << "������Ҫ����ϵ������" << endl;
	string name;
	cin >> name;
	int i = ex(&aa, name);
	if (i != -1) {
		cout << "����:" << p->arr[i].name << "\t";
		cout << "�Ա�:" << (p->arr[i].sex == 1 ? "��" : "Ů") << "\t";
		cout << "����:" << p->arr[i].age << "\t";
		cout << "�绰:" << p->arr[i].phone << endl;
	}
	else {
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");

}
void change(books* p) {
	cout << "������Ҫ����ϵ������" << endl;
	string name;
	cin >> name;
	int i = ex(&aa, name);
	if (i != -1) {
		string sname;
		cout << "����������" << endl;
		cin >> sname;
		p->arr[i].name = sname;
		cout << "�������Ա�" << endl;
		cout << "�С���1" << endl << "Ů����2" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				p->arr[i].sex = sex;
				break;
			}
			else  cout << "�����,���䡣" << endl;
		}
		cout << "����������" << endl;
		int age = 0;
		cin >> age;
		p->arr[i].age = age;
		cout << "������绰" << endl;
		string phone;
		cin >> phone;
		p->arr[i].phone = phone;
	}else { cout << "���޴���" << endl; }
	system("pause");
	system("cls");
	}
void clean(books* p) {
	p->size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}

void menu() {
	cout << "*1,�����ϵ��*" << endl;
	cout << "*2,��ʾ��ϵ��*" << endl;
	cout << "*3,ɾ����ϵ��*" << endl;
	cout << "*4,������ϵ��*" << endl;
	cout << "*5,�޸���ϵ��*" << endl;
	cout << "*6,�����ϵ��*" << endl;
	cout << "*0,�˳�ͨѶ¼*" << endl;
}
int main() {
	aa.size = 0;
	int sb;
	while (true)
	{
		menu();
		cin >> sb;
		switch (sb) {
		case 0://0,�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
		case 1://1,�����ϵ��
			add(&aa);//���õ�ַ����
			break;
		case 2://2,��ʾ��ϵ��
			show(&aa);
			break;
		case 3://3.ɾ����ϵ��
		{ll(&aa);
			system("pause");
			break; }
		case 4://4,������ϵ��
			find(&aa);
			break;
		case 5://5,�޸���ϵ��
			change(&aa);
			break;
		case 6://6,�����ϵ��
			clean(&aa);
			break;
		default:
			cout << "������̱��" << endl;
			system("cls");
			break;
		}
	}
	system("pause");
	system("cls");
	return 0;
}