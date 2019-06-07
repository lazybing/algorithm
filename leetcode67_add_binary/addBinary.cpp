class Solution {
public:
    string addBinary(string a, string b){
	if (a.size() < b.size())
	    swap(a, b);

	int i = a.size(), j = b.size();

	while(i--) {
	    if (j) a[j] += b[--j] & 1;
	    if (a[i] > '1') {
		a[i] -= 2;
		if (i) a[i - 1]++; 
		else a = '1' + a;
	    }
	}

	return a;
    }
};
