class Solution {
    public:
    void printIncreasing(int );
    void printDecreasing(int );
    int factorial(int );
    int power(int , int);
    int bigPower(int,int);
    void towerOfHanoi(int, char,char,char);
    void displayArray(int [], int );
    void displayArrayReverse(int [], int );
    int maxOfArray(int [], int);
    int minOfArray(int [], int);
    int firstOccur(int [],int, int, int);
    int lastOccur(int [],int, int, int);
};

void Solution::printIncreasing(int n) {
    if(n == 0) return;
    printIncreasing(n-1);
    cout << n << " ";
}
void Solution::printDecreasing(int n) {
    if(n == 0) return;
    cout << n << " ";
    printDecreasing(n-1);
}
int Solution::factorial(int n) {
    if(n == 1) return n;
    return n * factorial(n-1);
}
int Solution::power(int a, int b) {
    if(b == 0) return 1;
    return a * power(a, b-1);
}
int Solution::bigPower(int a, int b) {
    if(b == 0) return 1;
    int ans = bigPower(a, b/2);
    if(b&1) {
        return a * ans * ans;
    }
    return ans * ans;
}
int Solution::maxOfArray(int a[], int n) {
    if(n == 0) return a[n];
    int maxi = maxOfArray(a,n-1);
    if(maxi < a[n]) return a[n];
    else return maxi;
}
int Solution::minOfArray(int a[], int n) {
    if(n == 0) return a[n];
    int mini = minOfArray(a,n-1);
    if(mini > a[n]) return a[n];
    else return mini;
}
int Solution::firstOccur(int a[],int i, int n, int d) {
    if(i == n) return -1;
    if(a[i] == d) return i;
    return firstOccur(a,i+1,n,d);
}
int Solution::lastOccur(int a[],int i, int n, int d) {
    if(i == n) return -1;
    int last = lastOccur(a,i+1,n,d);
    if(last == -1) {
        if(a[i] == d) {
            return i;
        }
        else return -1;
    }
    else return last;
}
void Solution::towerOfHanoi(int n,char a,char c,char b) {
    if(n == 0) return;
    towerOfHanoi(n-1,a,b,c);
    cout << n << "[" << a << " -> " << c << "]" << endl;
    towerOfHanoi(n-1,b,c,a);
}
void Solution::displayArray(int a[], int n) {
    if(n == 0) {
        cout << a[n] << " ";
        return;
    }
    displayArray(a,n-1);
    cout << a[n] << " ";
}
void Solution::displayArrayReverse(int a[], int n) {
    if(n == 0) {
        cout << a[n] << " ";
        return;
    }
    cout << a[n] << " ";
    displayArrayReverse(a,n-1);
}

