   /*1.3随机生成数字，并用switch输出对应月份
   #include<iostream>
   #include<ctime>
   #include<cstdlib>
   using namespace std;
   int main()
   {
   srand(time(0));//播撒随机数种子
   int randomnum=rand()%12+1;
   switch(randomnum)
   {
   
    case 1:
   	cout<<"January"<<endl;
   	break;
   	case 2:
   	cout<<"February"<<endl;
   	break;
   	case 3:
          cout << "March" << std::endl;
            break;
        case 4:
           cout << "April" << std::endl;
            break;
        case 5:
            cout << "May" << std::endl;
            break;
        case 6:
            cout << "June" << std::endl;
            break;
        case 7:
            cout << "July" << std::endl;
            break;
        case 8:
            cout << "August" << std::endl;
            break;
        case 9:
            cout << "September" << std::endl;
            break;
        case 10:
            cout << "October" << std::endl;
            break;
        case 11:
            cout << "November" << std::endl;
            break;
        case 12:
            cout << "December" << std::endl;
            break;
        default:
            cout << "Invalid month number." <<endl;
}
   cout<<randomnum<<endl;
   return 0;
   }
*/



/*1.4计算1到n的阶乘倒数的和
#include<iostream>
using namespace std;
# define A 0.00001
int main()
{
double e=1,num=1;
int i=1;
while(1)
{
  if(num<A)
  {
  cout<<e<<endl;
  return 0;
  }
  num=num/i;
  e=e+num;
  i++;
}

return 0;
}
*/ 



/*1.5读入整数，以升序显示它的所有最小因数，如输入120，输出2，2，2，3，5
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int num;
	cin>>num;
	vector<int>arr;
	for(int i=2;i*i<num;i++)
	{
		while(num%i==0)
		{
			arr.push_back(i);
			num/=i;
		}
	}
	    if(num>1)
		arr.push_back(num);
		for(size_t i=0;i<arr.size();++i)
		cout<<arr[i]<<" ";
		cout<<endl;
return 0;
}
*/



/*2.1判断两个数组是否相等
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[]={1,22,3,4,5};
	if(equal(begin(arr1),end(arr1),begin(arr2)))
	cout<<"same"<<endl;
	else
	cout<<"different"<<endl;
	return 0;
}
*/


/*2.2判断两个string是否相等
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<string>str1={"hello"};//注意格式 
	vector<string>str2={"hello"};
	if(str1==str2)
	cout<<"same"<<endl;
	else cout<<"different"<<endl;
	return 0;
}*/



/*2.3检测输入的第二个字符串是否是第一个字符串的子串
#include<iostream>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
    size_t pos = s1.find(s2);
	if (pos != string::npos) 
	{ cout << "找到子字符串，位置是: " << pos << endl; } 
	else 
	{ cout << "未找到子字符串" << endl;} 
	return 0; 
 } 
 */
 


/*2.4提取字符串中的数字
 #include<iostream>
 #include<string>
 #include<vector>
 using namespace std;
 int main()
 {
 	string s1;
 	getline(cin,s1);
 	vector<string>t;
 	for(decltype(s1.size())i=0;i<s1.size();i++)
 	{
 		if(s1[i]>=48&&s1[i]<=57)
 		t.push_back(string(1,s1[i]));
	 }
 	for(decltype(t.size())i=0;i<t.size();i++)
 		cout<<t[i];
	return 0;	  
 }
 */
 


/*3.1将两个有序整型数列合并为一个数列，升序排序
 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
int main()
 {
 	 int str1[]={1,3,5};
 	 int str2[]={2,4,6};
 	 int size1=sizeof(str1)/sizeof(str1[0]);
 	 int size2=sizeof(str2)/sizeof(str2[0]);
 	 int size3=size1+size2;
 	 vector<int>str3;
 	 for(int i=0;i<size1;++i)
 	 {
 	 	str3.push_back(str1[i]);//字符串的话直接相加就行了 
	 }
	 for(int i=0;i<size2;++i)
	 {
	 	str3.push_back(str2[i]);
	 }
	 sort(str3.begin(),str3.end());
	 for(size_t i=0;i<size3;++i)
	 cout<<str3[i]<<" ";
	 cout<<endl; 
	 return 0;
 }
*/



/*3.2将整数转为字符串，注意负数
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string itoa(int num) 
{
    
    if (num == 0)
        return "0";
    string result;
    bool negative=num<0;
    if (num<0) 
        num = -num;
    // 逐位提取数字并转换为字符
    while (num > 0) {
        int digit = num % 10;
        result += static_cast<char>(digit + '0');
        num /= 10;
    }
    if (negative) 
        result += '-';
   reverse(result.begin(), result.end());
   return result;
}

int main() {
    int num = -123;
string str = itoa(num);
cout << "转换结果: " << str << endl;
    return 0;
} 
*/
/*3.3
设计表示时间的CTime类，要求：
(1) 有表示时、分、秒的数据成员;
(2) 正确的初始化操作，检验数据的合法性;
(3) 有时、分、秒的get和set函数;
(4) 以24小时格式或12 小时加上午下午的格式输出当前时间。
编写测试程序。



