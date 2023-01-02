#include <stdio.h>

int main() {
    int n = 3; // 밀어낼 수 
    printf("문자를 입력해주세요.\n");

    char data[100]; // 문자 변수 선언
    fgets(data, 100, stdin); // fgets를 이용하여 값 받고 저장.

    for (int i = 0; i < 100; i++) { // 문자가 100자리 수 까지 입력될 수 있으므로, 100까지 반복한다.
        if (data[i] == NULL) { // 값이 null, 없다면
            break; // for문 종료
        }
         if (data[i] == 'x') { // data라는 문자i번째에, x가 있다면,
            data[i] = 'a'; // a로 바꾸기
            printf("%c", data[i]);//출력
            continue; // continue = for문으로 다시 돌아가는 것이다.
        }
        if (data[i] == 'y') { // data라는 문자i번째에 y가 있다면
            data[i] = 'b'; // b로 바꾸기
            printf("%c", data[i]); // 출력
            continue;
        }
        if (data[i] == 'z') { // data라는 문자 i번째에 z가 있다면
            data[i] = 'c'; // c로 바꾸기
            printf("%c", data[i]); // 출력
            continue;
        }
        if (data[i] == 'X') { // data라는 문자 i번째에 X가 있다면
            data[i] = 'A'; // A로 바꾸기
            printf("%c", data[i]);// 출력
            continue;
        }
        if (data[i] == 'Y') { // data라는 문자 i번째에 Y가 있다면
            data[i] = 'B'; // B로 바꾸기
            printf("%c", data[i]);// 출력
            continue;
        }
        if (data[i] == 'Z') { // data라는 문자 i번째에 Z가 있다면
            data[i] = 'C'; // C로 바꾸기
            printf("%c", data[i]); // 출력
            continue;
        }
        data[i] += n; // 각 자리 문자마다, 3씩 더한다(ex, a -> d, b -> e)
        printf("%c", data[i]); // 출력
    }
    return 0; // 함수 종료
}
