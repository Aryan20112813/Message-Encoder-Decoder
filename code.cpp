#include <iostream>
#include <string>
using namespace std;
#define Max_Size 100
int stringlen(char *str1)
{
    int count = 0;
    while (*str1 != '\0')
    {
        count++;
        str1++;
    }
    return count;
}
void encrypt(char *message, int len)
{
    while (*message != '\0')
    {
        for (int i = 0; i < len; i++)
        {
            *message = *message + i;
        }
        message++;
    }
}
void decrypt(char *message, int len)
{
    while (*message != '\0')
    {
        for (int i = 0; i < len; i++)
        {
            *message = *message - i;
        }
        message++;
    }
}
int main()
{
    char text[Max_Size];
    int choice;
    cout << "***OPTIONS***\n1] To Encrypt the Message.\n2] To Decrypt the Message." << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    fflush(stdin);
    cout << "Enter your message : " << endl;
    gets(text);
    int len = stringlen(text);
    switch (choice)
    {
    case 1:
        encrypt(text,len);
        cout<<"Message is encrypting....."<<endl;
        cout<<"The encrypted message is "<<text<<endl;
        break;
    case 2:
        decrypt(text,len);
        cout<<"Message is decrypting...."<<endl;
        cout<<"The decrypted message is "<<text<<endl;
        break;
    default:
        cout << "Enter a valid choice!!" << endl;
        break;
    }
    return 0;
}