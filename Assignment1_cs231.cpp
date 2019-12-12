#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void cipher();
//int key2;

void cipher()
{
	string st;
	char ch;
	int st_size,key;
	fstream myfile("plaintext.txt");
	myfile >> std::noskipws;
	while(!myfile.eof())
	{
		myfile.get(ch);
		st_size++;
	}
	myfile.close();
	char *array;
	array = new char [st_size];
	myfile.open("plaintext.txt");
	for(int i=0;  i< st_size; i++)
	{
		myfile >> ch;
		array[i] = ch;
	}
	myfile.close();
	
	for(int i=0; i<st_size; i++)
		cout << array[i];
	
	cout << "Enter cipher key: ";
	cin >> key;
	
	char* store1 = new char[st_size];
	char* store2 = new char[st_size];
	for(int i=0;i<st_size;i++)
	{
		array[i] = array[i] + key;
	}
	cout<<"\nFor decryption....."<<endl;
	system("Pause");
	system("cls");
	myfile.open("ciphertext.txt", ios::app);
	cout<<"ENCRYPTED TEXT: \n"<<endl;
	for(int j=0;j<st_size;j++)
	{
		cout << array[j];
		myfile << array[j];
	}
	myfile.close();
	myfile.open("ciphertext.txt", ios::app);
	for(int j=0;j<st_size;j++)
	{
		myfile >> array[j];
	}
	cout << endl;
	cout<<endl;

	for(int i=0; i<st_size; i++){
		array[i] = array[i] - key;
	}
	
	cout << "\nDECRYPTED TEXT: \n"<<endl;
	for(int i=0; i<st_size; i++){
		cout << array[i];
		
		
	} 

}

int main()
{
	int option;
	do
	{
		cout<<"======================="<<endl;
		cout<<"    CAESAR'S CIPHER"<<endl;
		cout<<"======================="<<endl;
		cout << "1. Encrypt/Decrypt" << endl;
		cout << "0. EXIT" << endl;

		cout<<"Enter your choice: ";
		cin >> option;
		switch (option)
		{
		case 1:
			cipher();
			break;
		case 0:
			exit(1);
			break;
			
		default:
			cout << "Incorrect option, retry!" << endl;
			break;
		}
	} while (1);

}
