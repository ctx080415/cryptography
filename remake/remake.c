#include <stdio.h>
#include <ctype.h> // isupper, islower을 사용하기 위함.
int main() {
    int key; // 밀어낼 수 
    int defaultt = 97;
    printf("문자를 입력해주세요.\n");

    char data[100]; // 문자 변수 선언

    fgets(data, 100, stdin); // fgets를 이용하여 값 받고 저장.

    printf("\n키 값을 입력해주세요.\n");
    scanf("%d", &key); // 키 입력받고 저장
    if (key > 25) {
        printf("오류! 값은 25 이하로 해주시기 바랍니다.");
        return 0; // 종료
    }
    printf("\n변환값: ");

    for (int i = 0; i < 100; i++) { // 문자가 100자리 수 까지 입력될 수 있으므로, 100까지 반복한다.
        if (data[i] == NULL) { // 값이 null, 없거나, key값이 25가 넘는다면
            break; // for문 종료
        }
        if (islower(data[i])) { // 문자가 소문자인가?
            if (data[i] + key > 122) { // 키 값과 문자(정수로 나타냄)를 더한 것이 122 (z)를 넘는가?
                char a = (((data[i] - 97) + key) % 26) + 97; // 문자에 -97을 하고, 키를 더하고 26 (알파벳 수)로 나누고 97을 더해준다.
                printf("%c", a); // 출력
                continue; // for문으로 돌아가기
            }
        }
        if (isupper(data[i])) { // 문자가 대문자인가?
            if (data[i] + key > 90) { // 문자와 키를 더한 것이 90(Z)를 넘는가?
                char a = (((data[i] - 65) + key) % 26) + 65; // 값에 65를 빼고, 키를 더하고, 26으로 나누고 26을 더한다.
                printf("%c", a); // 출력
                continue; // for문으로 돌아가기
            }
        }

        data[i] += key; // 각 자리 문자마다, key씩 더한다(ex, a -> d, b -> e)
        printf("%c", data[i]); // 출력
    }
    return 0; // 함수 종료
}