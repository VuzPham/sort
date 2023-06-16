bool isPalindrome(int x){
if (x < 0 || (x % 10 == 0 && x != 0))
    return false;
else if (x == 0)
    return true;
long long reserve = 0;
int save = x;
    while (x != 0){
        reserve *= 10;
        reserve += x % 10;
        x /= 10;
    }
if (save == reserve)
    return true;
else
    return false;
        
}