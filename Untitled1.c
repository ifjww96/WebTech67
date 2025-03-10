#include <stdio.h>
int main()
{
    int A[100001];
    int N, num, i;
    for(i = 1; i <= 10000; ++i)
    {
        A[i] = 0;
    }

    scanf("%d", &N);
    for(i = 0; i < N; ++i)
    {
        scanf("%d", &num);
        A[num] += 1;
    }

    for(i = 1; i <= 10000; ++i)
    {
        if(A[i] > 0) printf("%d ", i);
    }

    return 0;
}

numoc

#include<stdio.h>

void main() {
    int n, target, found = 0;
scanf(“%d” ,&n);
    int sequence[n]; 

    for (int i = 0; i < n; i++) {
        scanf("%d", &sequence[i]);
    }

    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (sequence[i] == target) {
            printf("%d ", i + 1); 
            found = 1; 
        }
    }

    if (!found) {
        printf("0");
    }

    printf("\n"); 
}


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N;

    vector<int> sequence(N);
    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
    }

    cin >> M;

    if (M > 0) {
        // Print elements in forward order starting from the M-th element
        for (int i = M - 1; i < N; i++) {
            cout << sequence[i] << " ";
        }
    } else if (M < 0) {
        // Print elements in backward order starting from the |M|-th element
        for (int i = N + M; i >= 0; i--) {
            cout << sequence[i] << " ";
        }
    }
    cout << endl;
    return 0;
}