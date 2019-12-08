#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
    string s;
    int key=0, size=0, op;
    char y;
    int *array;
     
    cout<<"Choose Option:\t 1:Encryption\t2:Decryption"<<endl; //endl for new line
    cout<<"_______________________________________________________\n";
    cout<<"option=>";
    cin>>op;
    switch(op){
        case 1:
            cout<<"Enter message to Ecrypt=>";
            cin>>s;
            cout<<"\nEnter Key=>";
            cin>>key;
            size=s.length();
            array= new int[s.length()];
            cout<<"Message Encrypted successfully..";
            for(int i=0; i<size; i++)
            *(array+i)=s[i]+key; // array increament and converting string into ascii code
            for(int i=0; i<size; i++)
            {
                y=*(array+i);
                cout<<array[i]<<"\t"<<y<<endl;
            }
            delete[]array;
            break;
            case 2:
            cout<<"Enter message to Decrypt=>";
            cin>>s;
            cout<<"\nEnter Key=>";
            cin>>key;
            size=s.length();
            array= new int[s.length()];
            cout<<"Message Encrypted successfully..";
            for(int i=0; i<size; i++)
            *(array+i)=s[i]-key; // array increament and converting string into ascii code
            for(int i=0; i<size; i++)
            {
                y=*(array+i);
                cout<<array[i]<<"\t"<<y<<endl;
            }
            delete[]array;
                break;
                default:
                    cout<<"Invalid Input Try Again..\n";
                     
                }
                cout<<"\n\n\n\n\n";
             //
			    
}
