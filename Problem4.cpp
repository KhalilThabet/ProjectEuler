bool Palindrome(string S){
    string nrmal=S;
    reverse(S.begin(),S.end());
    if (nrmal==S) return true;
    return 0;
}
