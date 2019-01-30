//
// Created by Administrator on 2019/1/30.
//
#include <iostream>
#include <vector>

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> B;
        int idx=0;
        for(int i=0;i<A.size();++i){
            if(A[i]<0) idx=i;
            else if(A[i]>=0) break;
        }

        int i=idx+1;
        while(i<A.size()&&idx>=0){
            int a=A[i]*A[i];
            int b=A[idx]*A[idx];
            if(a>b){
                B.push_back(b);
                idx--;
            }else {
                B.push_back(a);
                i++;
            }
        }

        while(idx>=0){
            B.push_back(A[idx]*A[idx]);
            --idx;
        }

        while(i<A.size()){
            B.push_back(A[i]*A[i]);
            ++i;
        }

        return B;
    }
};