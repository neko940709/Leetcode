//
// Created by Administrator on 2019/1/30.
//
#include <vector>


class Solution {
public:
// Use dynamic array
/*
    int* sortArrayByParity(vector<int>& A) {
        int len = A.size();
        int *B = new int[len];
        int x=0,y=len-1;
        for(int i=0;i<len;++i){
            if(A[i]%2==0) B[x++]=A[i];
            else B[y--]=A[i];
        }
        return B;
    }
*/

    vector<int> sortArrayByParity(vector<int>& A) {
        int len = A.size();
        vector<int> B(len);
        int x=0,y=len-1;
        for(int i=0;i<len;++i){
            if(A[i]%2==0) B[x++]=A[i];
            else B[y--]=A[i];
        }
        return B;
    }
};