class Solution {
public:
    /**
     * @param A: sorted integer array A
     * @param B: sorted integer array B
     * @return: A new sorted integer array
     */
    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
        // write your code here
        if(A.empty())
        {
            return B;
        }
        if(B.empty())
        {
            return A;
        }
        vector<int> result;
        int i = 0, j = 0;
        while(i < A.size() || j < B.size())
        {
            if(i == A.size())
            {
                result.push_back(B[j++]);
            }else if(j == B.size())
            {
                result.push_back(A[i++]);
            }else if(A[i]>B[j])
            {
                result.push_back(B[j++]);
            }else
            {
                result.push_back(A[i++]);
            }
        }
        return result;
    }
};