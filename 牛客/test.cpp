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
//������̨�ף�һ�ο�����1,2....n�ף�
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

//���ǿ�����2*1��С���κ��Ż�������ȥ���Ǹ���ľ��Ρ�
//������n��2*1��С�������ص��ظ���һ��2*n�Ĵ���Σ��ܹ��ж����ַ�����
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

int main(){
	cout<<jumpFloor(4)<<endl;
	system("pause");
	return 0;
}