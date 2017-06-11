bool Solution::isPalindrome(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A < 0)
        return false;
        
    //int i = 1;
    //int B = A;
    //int j = 1;
    string s;
    s = to_string(A);
    //while(1){
        //if(B%j == B)
          //  break;
        //else
      //      j = j * 10;
    //}
    //int j = ;
    int i = 0 ; 
    int j = s.length() - 1;
    while(i < j){
        if(s[i] != s[j])
            return false;
        ++i;
        --j;    
    }    
    
    return true;
}
