#include<iostream>
using namespace std;
void printPascal(int n)
{
	for (int i = 1; i <= n; i++)
	{
		int C = 1;

		for (int j = 1; j < (n - i + 1); j++){
			cout << " ";
		}

		for (int k = 1; k <= i; k++)
		{
			cout << C << " ";
			C = C * (i - k) / k;
		}

		cout << "\n";
	}
}
void checkPalindrome(int num)
{
     int n, digit=0, rev = 0;

     n = num;
     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);
     if (n == rev)
         cout <<n<< " ---- A palindrome.";
     else
         cout <<n<< " ---- Not a palindrome.";
}
void checkArmstrong(int n)
{
int r,sum=0,temp;
temp=n;
while(n>0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(temp==sum)
cout<<temp<<" ---- Armstrong Number."<<endl;
else
cout<<temp<<" ---- Not Armstrong Number."<<endl;
}
int main()
{
    printPascal(5);
    cout<<endl<<endl;
    checkPalindrome(12321);
    cout<<endl<<endl;
    checkArmstrong(371);

    return 0;
}
