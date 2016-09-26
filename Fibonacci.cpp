# Code written by Adarsh Shetty
# include <iostream>

using namespace std;

class Fibonacci{
    public:
        int findFibonacci(int n);
    };

int main(int argc, char *argv[]){
    int number;
    cout << "Enter number: " << '\n';
    cin >> number;
    Fibonacci f;
    int solution = f.findFibonacci(number);
    cout<< number << "th Fibonacci is "<< solution <<'\n';
   }
   
int Fibonacci :: findFibonacci(int n){
    if (n ==1 || n ==2){
        return 1;
        }
    else{
        int temp = findFibonacci(n-1) + findFibonacci(n-2);
        return temp;
        }
    }