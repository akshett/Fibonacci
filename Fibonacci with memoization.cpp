# include <iostream>
# include <vector>

using namespace std;

class Fibonacci{
    public:
        vector <long long> memo;
        long long findFibonacci(int n);
    };

int main(int argc, char *argv[]){
    int number;
    cout << "Enter number: " << '\n';
    cin >> number;
    Fibonacci f;
    f.memo.assign(number,0);
    const clock_t begin_time = clock();
    long long solution = f.findFibonacci(number);
    cout<< number << "th Fibonacci is "<< solution <<'\n';
    const clock_t end_time = clock();
    cout << "Total time: " << float(end_time - begin_time)/ CLOCKS_PER_SEC;
   }
   
long long Fibonacci :: findFibonacci(int n){
    if (memo[n-1] != 0){
        return memo[n-1];
        }
    else{
        if (n ==1 || n ==2){
            return 1;
            }
        else{
            long long temp = findFibonacci(n-1) + findFibonacci(n-2);
            memo[n-1] = temp;
            return temp;
            }
        }
    }
