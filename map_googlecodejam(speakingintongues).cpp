#include <iostream>
#include <map>
using namespace std;
int main(int argc, char const *argv[])
{
	int i=0;
	map<char,char> coverter;
	map<char,char>::iterator it;
	char given[]={"ejp mysljylc kd kxveddknmc re jsicpdrysi rbcpc ypc rtcsra dkh wyfrepkym veddknkmkrkcd de kr kd eoya kw aej tysr re ujdr lkgc jv"};
	char google[]={"our language is impossible to understand there are twenty six factorial possibilities so it is okay if you want to just give up"};
	while(given[i]!='\0' && google[i]!='\0')
	{
		coverter.insert(pair<char,char>(given[i],google[i]));
		i++;
	}
	i=0;
	char test[]={"tbeeeeeeeeeeeeeeeeeeeyyyyyyyyy k oset f vmjd vmjd"};
	while(test[i]!='\0')
	{
		it=coverter.find(test[i]);
		cout<<it->second;
		i++;
	}
	cout<<endl;
}