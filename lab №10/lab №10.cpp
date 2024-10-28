#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
// задание 1
void nmb(int x) {
    if (x > 1)
        nmb(x - 1);
    cout << x << "\t";
}
// задание 2
void nmb2() {
    int x = 0;
    cin >> x;
    if (x != 0) {
        nmb2();
        cout << x << "\t";
    }
}
// задание 3
int cnt(int x) {
    if (x < 10)
        return 1;
    else
        return cnt(x / 10) + 1;

}
// задание 4
void bin(int x) {
    if (x > 0) {
        cout << x % 2 << "\t" << x / 2 << endl;
        return bin(x / 2);
    }
}
// задание 5
int sum(int a, int b) {
    if (a != a + b)
        return sum(a + 1, b-1);
    else
        return a;
}
// задание 6
int pr(int a, int b) {
    if (b == 1) {
        return a;
    }
    else {
        return a + pr(a, b - 1);
    }
}
// задание 7
float rad(int n, float x) {
    const int cst = 2;
    if (n == 1) {
        return sqrt(x);
    }
    else {
        n--; x = cst + sqrt(x);
        return rad(n, x);
    }
    
}
// задание 8

// задание 9
int factorial(int x) {
    if (x>1)
        return x * (factorial(x - 1));
    return 1;
}
float binomial(float k, float n) {
    int binom = (factorial(k) / (factorial(n - 1) * factorial(k - n - 1))) + (factorial(k - 1) / (factorial(n - 1) * factorial(k - n - 2)));
    return binom;
}
// задание 10
int sum_dec(int x, int sum) {
    if (x < 10) {
        sum += x % 10;
        return sum;
    }
    else{
        sum += x % 10;
        return sum_dec(x / 10, sum);
    }
}
// задание 11А
bool pos_el(int nums[], int n,int index) {
    if (nums[index] < 0 && index < n) {
        index++;
        return pos_el(nums, n, index);
    }
    else if (nums[index] > 0)
        return true;
    else
        return false;
}
// задание 11B
bool greater_than_value(int nums[], int n, const int value, int index) {
    if (nums[index] <= value && index < n) {
        index++;
        return greater_than_value(nums, n, value, index);
    }
    else if (nums[index] > value)
        return true;
    else
        return false;

}
// задание 11C
bool absence(int nums[], int n, int nums2[], int n2, int index) {
    int cnt = 0;
    for (int i = 0; i < n2; i++) {
        if (nums[index] == nums2[i])
            cnt++;
    }
    if (cnt == 0 && index < n) {
        index++;
        return absence(nums, n, nums2, n2, index);
    }
    else if (cnt == 0)
        return false;
    else
        return true;
}
// задание 12A
int max_el(int nums[], int n, int index, int el) {
    if (nums[index] >= nums[el] && index < n) {
        el = index;
        index++;
        return max_el(nums, n, index, el);
    }
    else if (index < n) {
        index++;
        return max_el(nums, n, index, el);
    }
    else
        return nums[el];
}
// задание 12B
int sec_max_el(int nums[], int n, int diff) {
    int mx_el = max_el(nums, n, 0, 0);
    for (int i = 0; i < n; i++) {
        if (nums[i] == mx_el - diff) 
            return nums[i];
    }
    diff++;
    return sec_max_el(nums, n, diff);

}
// задание 12C
int cnt_max_el(int nums[], int n,int index ,int cnt) {
    int mx_el = max_el(nums, n, 0, 0);
    if (nums[index] == mx_el && index < n) {
        cnt++; index++;
        return cnt_max_el(nums, n, index, cnt);
    }
    else if (nums[index] != mx_el && index < n) {
        index++;
        return cnt_max_el(nums, n, index, cnt);
    }
    else
        return cnt;
}
// задание 13
int sort(int nums[], int n, int index) {
    int max_el = 0;
    int replace_index = 0; // индекс макисмального эл, с которым будет меняться index-ый эл
    int replace_el = nums[index]; 
    if (index < n) {
        for (int i = index; i < n; i++) {
            if (nums[i] > max_el) { // находим макс эл после index-ого элемента 
                max_el = nums[i]; // записываем макс эл
                replace_index = i; // присваем индекс макс эл
            }
        }
    }
    else
        return 0;
    nums[index] = max_el; //179-180 меняем местами index-ый эл и макс эл после index-ого
    nums[replace_index] = replace_el;
    if (index < n) {
        cout << nums[index] << " ";
        index++;
        return sort(nums, n, index);
    }
}
// задание 14А
int min_el(int nums[], int n,int index, int min) {
    if (index < n && nums[index] < min) {
        min = nums[index];
        index++;
        return min_el(nums, n, index, min);
    }
    else if (index < n) {
        index++;
        return min_el(nums, n, index, min);
    }
    else
        return min;

}
// задание 14B
int sum_neg(int nums[], int n, int sum, int index) {
    if (index < n && nums[index] < 0) {
        sum += nums[index];
        index++;
        return sum_neg(nums, n, sum, index);
    }
    else if (index < n) {
        index++;
        return sum_neg(nums, n, sum, index);
    }
    else
        return sum;
        
}
// задание 14C
int pr_el(int nums[], int n, int w, int index, int pr) {
    if (index < n && pow(nums[index], 2) < w) {
        pr *= nums[index];
        index++;
        return pr_el(nums, n, w, index, pr);
    }
    else if (index < n) {
        index++;
        return pr_el(nums, n, w, index, pr);
    }
    else
        return pr;
}
int main()
{
    setlocale(LC_ALL, "RU");
    // задание 1
    /*nmb(7);*/

    // задание 2
    /*nmb2();*/

    // задание 3
    /*cout << cnt(547849894);*/

    // задание 4
    /*bin(84);*/

    // задание 5
    /*cout << sum(15, 32);*/

    // задание 6
    /*cout << pr(4, 7);*/

    // задание 7
    /*cout << rad(4, 2);*/

    // задание 8
    // не ебу что просят от меня :(

    // задание 9
    /*cout << binomial(9, 3) << endl;*/
    
    // задание 10
    /*cout << sum_dec(12345, 0);*/

    // задание 11A
    /*int nums[7]{ -1, -2, -3, -4, -5, -8, -9 };
    cout << pos_el(nums, 7, 0);*/

    // задание 11B
    /*int nums[7]{ 1, 2, 3, 4, 5, 6, 7 };
    cout << greater_than_value(nums, 7, 9, 0);*/

    // задание 11С
    /*int nums[7]{ 1, 2, 3, 4, 5, 6, 7 };
    int nums2[9]{ 8, 9, 10, 11, 12, 13, 14, 15, 16 };
    cout << absence(nums, 7, nums2, 9, 0);*/

    // задание 12А
    /*int nums[9]{ 1, 2, 3, 4, 9, 4, 5, 12, 6 };
    cout << max_el(nums, 9, 0, 0);*/

    // задание 12B
    /*int nums[9]{ 1, 2, 3, 4, 3, 4, 17, 12, 6 };
    cout << sec_max_el(nums, 9, 1);*/

    // задание 12C
    /*int nums[9]{ 1, 2, 5, 4, 8, 4, 17, 12, 6 };
    cout << cnt_max_el(nums, 9, 0, 0);*/

    // задание 13
    /*int nums[9]{ 35, 1, 5, 23, 8, 4, 17, 12, 6 };
    int res = sort(nums, 9, 0);*/

    // задание 14A
    /*int p = 2 * pow(10, 9);
    int nums[9]{ 35, 14, 5, 23, 8, 4, 17, 12, 6 };
    cout << min_el(nums, 9, 0, p);*/

    // задание 14B
    /*int nums[9]{ 35, -14, 5, 23, -8, 4, -17, 12, 6 };
    cout << sum_neg(nums, 9, 0, 0);*/

    // задание 14C
    int nums[9]{5, -14, 7, 23, -8, 4, -17, 12, 6 };
    cout << pr_el(nums, 9, 62, 0, 1);

    return 0;
}


