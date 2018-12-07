#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	void replaceSpace(char *str, int length) {
		if (nullptr == str){
			return;
		}
		int blankcount = 0;
		int totalcount = 0;
		while (*str != '\0'){
			if (*str == ' '){
				blankcount++;
			}
			totalcount++;
		}
		int newlen = totalcount + 2 * blankcount;
		if (newlen>length){
			return;
		}
		char *poldstr = str + totalcount;
		char *pnewstr = str + newlen;
		while (poldstr<pnewstr){
			if (*poldstr == ' '){
				*pnewstr-- = '0';
				*pnewstr-- = '2';
				*pnewstr-- = '%';
			}
			else{
				*pnewstr-- = *poldstr;
			}
			--poldstr;
		}
	}
};

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

int main()
{
	char *str = "Hello world ,it is beautiful!";
	Solution s1;
	s1.replaceSpace(str, strlen(str));
	system("pause");
	return 0;
}