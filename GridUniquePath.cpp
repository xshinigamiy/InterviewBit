int Solution::uniquePaths(int A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int dp[A+1][B+1];
    for(int i = 0 ; i < A ;i++){
        for(int j = 0 ; j < B ; j++ ){
            if(i == 0 || j == 0)
                dp[i][j] = 1;
            else
                dp[i][j] = dp[i-1][j] + dp[i][j-1] ;
        }
    }
    
    return dp[A-1][B-1];
}
