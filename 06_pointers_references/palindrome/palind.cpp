#include<cassert>
#include<cstring>

bool palindrome_check(const char* s)
{
	int k = 0;
	int n = strlen(s) - 1;
	for (int i = 0, k = n; i <= k; i++, k--)
	{
		if (s[i] != s[k])
			return false;
	}
	return true;
}

int main()
{
	assert(palindrome_check("level") == true);
	assert(palindrome_check("ufotofu") == true);
	assert(palindrome_check("informatika") == false);
	assert(palindrome_check("civic") == true);
	assert(palindrome_check(" ") == true);
        assert(palindrome_check("Radiotecknika") == false);
	return  0;
}
