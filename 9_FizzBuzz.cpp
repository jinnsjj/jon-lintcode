class Solution {
public:
    /**
     * @param n: An integer
     * @return: A list of strings.
     */
    vector<string> fizzBuzz(int n) {
        // write your code here
        int num;
        vector<string> result;
        for (num = 1; num <= n; num++)
        {
            if(num%3==0 && num%5==0)
            {
                result.push_back("fizz buzz");
            }
            else if(num%3==0)
            {
                 result.push_back("fizz");
            }
            else if(num%5==0)
            {
                 result.push_back("buzz");
            }
            else
            {
                result.push_back(to_string(num));
            }
        }
        return result;
    }
};