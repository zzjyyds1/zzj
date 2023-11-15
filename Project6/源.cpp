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
		cout << "已满" << endl;
	}
	else {
		string sname;
		cout << "请输入名字" << endl;
		cin >> sname;
		p->arr[p->size].name = sname;
		cout << "请输入性别" << endl;
		cout << "男——1" << endl << "女——2" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				p->arr[p->size].sex = sex;
				break;
			}
			else  cout << "输错了,重输。" << endl;
		}
		cout << "请输入年龄" << endl;
		int age = 0;
		cin >> age;
		p->arr[p->size].age = age;
		cout << "请输入电话" << endl;
		string phone;
		cin >> phone;
		p->arr[p->size].phone = phone;
		p->size++;
		cout << "添加成功" << endl;
		system("pause");
		system("cls");
	}
}
void show(books* p) {
	if (p->size == 0) {
		cout << "空空如也" << endl;
	}
	else {
		for (int i = 0; i < p->size; i++)
		{

			cout << "名字:" << p->arr[i].name << "\t";
			cout << "性别:" << (p->arr[i].sex == 1 ? "男" : "女") << "\t";
			cout << "年龄:" << p->arr[i].age << "\t";
			cout << "电话:" << p->arr[i].phone << endl;
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
	cout << "请删除联系人姓名" << endl;
	string name;
	cin >> name;
	int a = ex(&aa, name);
	if (a != -1) {
		for (int i = a; i < p->size; i++) {
			p->arr[i] = p->arr[i + 1];
		}
		p->size--;
		cout << "删除成功" << endl;
	}
	else { cout << "查无此人" << endl; }
	system("pause");
	system("cls");
}
void find (books * p) {
	cout << "请输入要找联系人姓名" << endl;
	string name;
	cin >> name;
	int i = ex(&aa, name);
	if (i != -1) {
		cout << "名字:" << p->arr[i].name << "\t";
		cout << "性别:" << (p->arr[i].sex == 1 ? "男" : "女") << "\t";
		cout << "年龄:" << p->arr[i].age << "\t";
		cout << "电话:" << p->arr[i].phone << endl;
	}
	else {
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");

}
void change(books* p) {
	cout << "请输入要改联系人姓名" << endl;
	string name;
	cin >> name;
	int i = ex(&aa, name);
	if (i != -1) {
		string sname;
		cout << "请输入名字" << endl;
		cin >> sname;
		p->arr[i].name = sname;
		cout << "请输入性别" << endl;
		cout << "男——1" << endl << "女——2" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				p->arr[i].sex = sex;
				break;
			}
			else  cout << "输错了,重输。" << endl;
		}
		cout << "请输入年龄" << endl;
		int age = 0;
		cin >> age;
		p->arr[i].age = age;
		cout << "请输入电话" << endl;
		string phone;
		cin >> phone;
		p->arr[i].phone = phone;
	}else { cout << "查无此人" << endl; }
	system("pause");
	system("cls");
	}
void clean(books* p) {
	p->size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}

void menu() {
	cout << "*1,添加联系人*" << endl;
	cout << "*2,显示联系人*" << endl;
	cout << "*3,删除联系人*" << endl;
	cout << "*4,查找联系人*" << endl;
	cout << "*5,修改联系人*" << endl;
	cout << "*6,清空联系人*" << endl;
	cout << "*0,退出通讯录*" << endl;
}
int main() {
	aa.size = 0;
	int sb;
	while (true)
	{
		menu();
		cin >> sb;
		switch (sb) {
		case 0://0,退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
		case 1://1,添加联系人
			add(&aa);//利用地址传递
			break;
		case 2://2,显示联系人
			show(&aa);
			break;
		case 3://3.删除联系人
		{ll(&aa);
			system("pause");
			break; }
		case 4://4,查找联系人
			find(&aa);
			break;
		case 5://5,修改联系人
			change(&aa);
			break;
		case 6://6,清空联系人
			clean(&aa);
			break;
		default:
			cout << "你是脑瘫吗？" << endl;
			system("cls");
			break;
		}
	}
	system("pause");
	system("cls");
	return 0;
}