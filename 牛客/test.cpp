//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//class Solution {
//public:
//	void replaceSpace(char *str, int length) {
//		if (nullptr == str){
//			return;
//		}
//		int blankcount = 0;
//		int totalcount = 0;
//		int i = 0;
//		for (i = 0; str[i] != '\0'; ++i){
//			if (str[i] == ' '){
//				blankcount++;
//			}
//			totalcount++;
//		}
//		int newlen = totalcount + 2 * blankcount;
//		if (newlen>length){
//			return;
//		}
//		char *poldstr = str + totalcount;
//		char *pnewstr = str + newlen;
//		while (poldstr<pnewstr){
//			if (*poldstr == ' '){
//				*pnewstr-- = '0';
//				*pnewstr-- = '2';
//				*pnewstr-- = '%';
//			}
//			else{
//				*pnewstr-- = *poldstr;
//			}
//			--poldstr;
//		}
//	}
//};

//class Solution {
//public:
//	void replaceSpace(char *str, int length) {
//		if (nullptr == str){
//			return;
//		}
//		size_t pos=0;
//		string strtmp(str);
//		string temp("");
//		char *tmp = "%20";
//		while (-1 !=(pos = strtmp.find(' '))){
//			temp = substr(pos + 1, strtmp.size() - (pos + 1));
//			strtmp.insert(pos, tmp);
//			strtmp.append(pos+3,)
//		}
//	}
//};


//class Solution {
//public:
//	bool Find(int target, vector<vector<int> > array) {
//		if (array.size() != 0){
//			int row = 0;
//			int col = array[0].size() - 1;
//			while ((col >= 0) && (row<array.size())){
//				if (array[row][col] == target){
//					return true;
//				}
//				else if (array[row][col]>target){
//					col--;
//				}
//				else{
//					row++;
//				}
//			}
//		}
//		return false;
//	}
//};
//
//int main()
//{
//	char *str = "Hello world ,it is beautiful!";
//	Solution s1;
//	s1.replaceSpace(str, 30);
//	system("pause");
//	return 0;
//}


#include<iostream>
using namespace std;
#if 0
int jumpFloor(int number) {
	if (0 == number || 1 == number || number == 2){
		return number;
	}
	int i = 1;
	int a = 1;
	int b = 2;
	for (i = 3; i <= number; ++i){
		int c = a + b;
		a = b;
		b = c;
	}
	return a;
}
//青蛙跳台阶（一次可以跳1,2....n阶）
//因为n级台阶，第一步有n种跳法：跳1级、跳2级、到跳n级
//跳1级，剩下n - 1级，则剩下跳法是f(n - 1)
//跳2级，剩下n - 2级，则剩下跳法是f(n - 2)
//所以f(n) = f(n - 1) + f(n - 2) + ... + f(1)
//因为f(n - 1) = f(n - 2) + f(n - 3) + ... + f(1)
//所以f(n) = 2 * f(n - 1)
int jumpFloorII(int number) {
	if (0 == number){
		return 0;
	}
	int count = 1;
	int i = 0;
	for (i = 1; i<number; ++i){
		count = count * 2;
	}
	return count;
}

//我们可以用2*1的小矩形横着或者竖着去覆盖更大的矩形。
//请问用n个2*1的小矩形无重叠地覆盖一个2*n的大矩形，总共有多少种方法？
int rectCover(int number) {
	if (0 == number){
		return 0;
	}
	if (number == 1 || number == 2){
		return number;
	}
	int i = 0;
	int a = 1;
	int b = 2;
	for (i = 3; i <= number; ++i){
		int c = a + b;
		a = b;
		b = c;
	}
	return b;
}
#endif
//求整数n中1的个数
int  NumberOf1(int n) {
	int count = 0;
	unsigned int c = 1;
	while (c){
		if ((n & c)){//注意，不能写成：，因为按位与之后这个肯定不等于1，加了这个后铁错
			count++;
		}
		c = c << 1;
	}
	return count;
}
void test(int n){
	cout << sizeof(n)*8 << endl;
}
int main(){
	test(10);
	//cout<<jumpFloor(4)<<endl;
	system("pause");
	return 0;
}