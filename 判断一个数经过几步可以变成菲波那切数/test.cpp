//#include<iostream>
//using namespace std;
//
//bool IsFibonacci(int N){
//	int a = 0;
//	int b = 1;
//	while (a<N){
//		int temp = a + b;
//		a = b;
//		b = temp;
//		if (a == N || b == N){
//			return true;
//		}
//	}
//	return false;
//}
//
//int TestFunc(int N){
//	if (IsFibonacci(N)){
//		return 0;
//	}
//	int count1 = 0;
//	int count2 = 0;
//	int temp = N;
//	while (!IsFibonacci(temp)){
//		--temp;
//		++count1;
//	}
//	temp = N;
//	while (!IsFibonacci(temp)){
//		++temp;
//		++count2;
//	}
//	return count2>count1 ? count1 : count2;
//}
//
//int main(){
//	int input = 0;
//	int count = 0;
//	cout << "ÇëÊäÈëÊý×Ö:" << endl;
//	cin >> input;
//	count = TestFunc(input);
//	cout << count;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int Solution(int cow_num, vector<int> apple){
//	if (apple.empty()){
//		return 0;
//	}
//	int sum = 0;
//	for (size_t i = 0; i<apple.size(); ++i){
//		sum += apple[i];
//	}
//	int count = 0;
//	int average = sum / cow_num;
//	for (int i = 0; i<apple.size(); ++i){
//		if (apple[i] == average){
//			continue;
//		}
//		if (apple[i]>average){
//			while (apple[i]>average){
//				apple[i] -= 2;
//				++count;
//			}
//		}
//		else{
//			while (apple[i]<average){
//				apple[i] += 2;
//				++count;
//			}
//		}
//	}
//	return count / 2;
//}
//
//
//int main(){
//	int cow_num = 0;
//	cin >> cow_num;
//	int i = 0;
//	vector<int> apple;
//	apple.resize(cow_num);
//	while (i<cow_num){
//		int input = 0;
//		cin >> input;
//		apple[i] = input;
//		++i;
//	}
//	int temp = 0;
//	temp = Solution(cow_num, apple);
//	cout << temp;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int Solution(int cow_num, vector<int> apple){
//	if (apple.empty()){
//		return -1;
//	}
//	if (apple.size() == 1){
//		return 0;
//	}
//	int sum = 0;
//	for (size_t i = 0; i<apple.size(); ++i){
//		sum += apple[i];
//	}
//	int count = 0;
//	int average = sum / cow_num;
//	if (sum%cow_num != 0){
//		return -1;
//	}
//
//	for (int i = 0; i<apple.size(); ++i){
//		if (apple[i] == average){
//			continue;
//		}
//		if (apple[i]>average){
//			while (apple[i]>average){
//				apple[i] -= 2;
//				++count;
//			}
//			if (apple[i] != average){
//				return -1;
//			}
//		}
//		else{
//			while (apple[i]<average){
//				apple[i] += 2;
//				++count;
//			}
//			if (apple[i] != average){
//				return -1;
//			}
//		}
//	}
//	return count / 2;
//}
//
//
//int main(){
//	int cow_num = 0;
//	cin >> cow_num;
//	int i = 0;
//	vector<int> apple;
//	apple.resize(cow_num);
//	while (i<cow_num){
//		int input = 0;
//		cin >> input;
//		apple[i] = input;
//		++i;
//	}
//	int temp = 0;
//	temp = Solution(cow_num, apple);
//	cout << temp;
//	return 0;
//}


#include<iostream>
#include<vector>

using namespace std;


class Solution{
public:
	int Themaxsum(vector<int> array){
		if (array.empty()){
			return 0;
		}
		int i = 0;
		int j = 1;
		int sum = array[i];
		while (j < array.size()){
			int temp = i;
			int count = 0;
			for (; temp < j; ++temp){
				count += array[temp];
			}
			if (count>sum){
				sum = count;
			}
			if (count < sum){
				++i;
			}
			j++;
		}
		return sum;
	}
};

int main(){
	vector<int> array = { -1, 2, 4, -5, 5, 15, 6 };
	Solution s;
	cout << s.Themaxsum(array);
	system("pause");
	return 0;
}