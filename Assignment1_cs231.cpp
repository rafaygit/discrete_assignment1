#include<iostream>
#include<string>
using namespace std;
void encryption();
void decryption();
int key2;
void menu()
{
	int option;
	do
	{
		cout<<endl;
		cout<<"Please select one option ..."<<endl;
		cout << "1.Encryption..." << endl;
		cout << "2.Decryption..." << endl;
		cout << "0.EXIT..." << endl;
		cin >> option;
		switch (option)
		{
		case 1:
			encryption();
			break;
		case 2:
			decryption();
			break;
		default:
			cout << "PLEASE ENTER CORRECT OPTION ..." << endl;
			break;
		}
	} while (option != 0);

}
void encryption()
{
	string st;
	char ch;
	int st_size,key;
	cin.ignore();
	cout << "Please enter string which you want to encrypt...";
	getline(cin,st);
	st_size = st.length();
	cout << "Please enter key for encryption...";
	cin >> key;
	
	int* array = new int[st_size];
	
	char* store1 = new char[st_size];
	char* store2 = new char[st_size];
	for(int i=0;i<st_size;i++)
	{
		if(st[i]==' ')
		{
			*(array + i) = st[i];
		}
		else 
		{
			*(array + i) = st[i];
			store1[i] = *(array + i);
			*(array + i) = st[i] + key;
			key2=*(array+i)-st[i];
			store2[i] = *(array + i);
			
		}
	}
	cout<<"cipher_text is as follow...."<<endl;
	for(int j=0;j<st_size;j++)
	{
		ch = *(array + j);
		cout << ch ;
	}
	cout << endl;
	cout<<endl;
	cout << "Encryption keys are as follow......" << endl;
	for (int j = 0; j < st_size; j++)
	{
		cout << store1[j] << "..." << store2[j] << endl;
	}
	cout<<endl;

}
void decryption()
{
	string st;
	char ch;
	int st_size, key;
	cin.ignore();
	cout << "Please enter string which you want to encrypt...";
	getline(cin, st);
	st_size = st.length();

	
	int* array = new int[st_size];
	for (int i = 0; i < st_size; i++)
	{
		if (st[i] == ' ')
		{
			*(array + i) = st[i];
		}
		else
		{
			*(array + i) = st[i] - key2;
		}
	}

	for (int j = 0; j < st_size; j++)
	{
		ch = *(array + j);
		cout << ch;
	}
	cout << endl;


}
int main()
{
	menu();
}

