#include "vector"
using namespace std;
class PrimeFactor {
public:
	vector<int> of(int number) {
		vector<int> result = {};
		int prime_idx = 0;
		int cur_prime = 0;
		while (true)
		{
			if (number == 1) break;
			cur_prime = prime_list[prime_idx];
			if (number % cur_prime == 0) {
				result.push_back(cur_prime);
				number /= cur_prime;
			}
			else
			{
				prime_idx++;
			}
		}
		return result;
	}
private:
	vector<int> prime_list = { 2, 3, 5, 7, 11, 13 };
};