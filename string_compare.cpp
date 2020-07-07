#include<iostream>
#include<string>
#include<stdio.h>
#include<string.h>
using namespace::std;

int main()//must int
{
	char ShortString[1000];
	char LongString[1000];

	while (gets(ShortString), gets(LongString))
	{
		int cin[200];
		memset(cin, 0, sizeof(int) * 128);
		for (int i = 0; i<strlen(LongString); i++)
			cin[LongString[i]]++;
		int j = 0;
		for (j = 0; j<strlen(ShortString); j++)
			if ((cin[ShortString[j]]) == 0)
				break;
		if (j == strlen(ShortString))//不是strlen(ShortString)-1
			cout << "true" << endl;
		else
			cout << "false" << endl;
		memset(ShortString, 0, 1000);
		memset(LongString, 0, 1000);

	}
	return 0;
}
