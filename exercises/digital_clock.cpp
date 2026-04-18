#include<iostream>
#include<unistd.h> // សម្រាប់ Sleep (1s)

using namespace std;

int main(){
    //time : hh : mm : ss
    int h=0, m=0, s=0;

    cout << "=====Digital Clock=====" << endl;

    for (; ;){ // infinite loop 
        cout << "\rTime : "; // \r ត្រឡប់ទៅដើមបន្ទាប់វិញ ឬ Update នៅកន្លែងតែមួយ

        // 01 10 12 01 03 
        if(h <10) cout<< "0";
        {
            cout << h << ":";
        }
        if(m < 10) cout << "0";
        {
            cout << m << ":";
        }
        if (s < 10) cout << "0";
        {
            cout << s;
        }

        cout.flush(); // ដើម្បីបង្ហាញ Output ភ្លាមៗ ឬ មិនឲ្យ delay
        sleep(1); // រង់ចាំ 1វិនាទី 
        s++;

        if(s == 60){
            s = 0;
            m++;
        }
        if(m == 60){
            m = 0;
            h++;
        }
        if(h == 24){
            h = 0;
        }
        
    }


    return 0;

}
