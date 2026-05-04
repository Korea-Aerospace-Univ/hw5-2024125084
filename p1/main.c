#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int found = 0;
    
    for (int a = 1; a <= N / 900; a++) {
        for (int b = 2; b <= N / 750; b += 2) {                     
            for (int c = 1; c <= N / 200; c++) {                    
                if (900 * a + 750 * b + 200 * c == N) {             
                    if (c < a || c < b) {                             
                        printf("%d %d %d\n", a, b, c);            
                        found = 1;                                     
                    }                                                
                }                                                      
            }
        }
    }
    
    if (!found) {
        printf("none\n");
    }
    
    return 0;
}

/* a = 1 일떄
  b = 2 -> c =1, 2, 3, ~ 끝  
  b = 4 -> c =1, 2, 3, ~ 끝
  b = 6 -> c =1, 2, 3, ~ 끝
 a = 2 일떄
  b = 2 -> c =1, 2, 3, ~ 끝
  b = 4 -> c =1, 2, 3, ~ 끝
  b = 6 -> c =1, 2, 3, ~ 끝
  와 같이 모든 경우를 체크하려면 중첩 반복문을 사용해야함 */
