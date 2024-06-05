class Solution {
public:
    int nextGreaterElement(int n) {
        // //ordered_map<int,int> count;
        // int maxi=0;
        // // if(int x>=10) nextGreaterElement(x/10);
        // // int digit=x%10;
        // for(int i=0;i<n.size();i++){
        //     int digit=n%10;
        //     n=n/10;
        // }
        // maxi=max(maxi, digit);
        // a=append(maxi);
        // if(a>n) return a;
        // else return -1;

         std::string num = std::to_string(n);

        // Find the first digit that is smaller than the digit next to it from the right
        int i = num.size() - 2;
        while (i >= 0 && num[i] >= num[i + 1]) {
            i--;
        }

        // If no such digit is found, return -1 (digits are in descending order)
        if (i < 0) {
            return -1;
        }

        // Find the smallest digit on the right side of (i-th digit) which is larger than num[i]
        int j = num.size() - 1;
        while (j > i && num[j] <= num[i]) {
            j--;
        }

        // Swap the found digits num[i] and num[j]
        std::swap(num[i], num[j]);

        // Sort the digits after position i in ascending order
        std::reverse(num.begin() + i + 1, num.end());

        // Convert the string back to an integer
        long long result = std::stoll(num);

        // If the result is greater than the maximum allowed 32-bit integer, return -1
        return (result > INT_MAX) ? -1 : result;
    }
};