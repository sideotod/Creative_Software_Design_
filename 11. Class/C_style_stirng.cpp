// strlen(A) - ()안의 string을 \0가 나올 때까지 문자열의 수를 세서 반환
// strcpy(A, B) - B를 복사하여 A에 붙여넣음
// strncpy(A, B, n) - B의 숫자를 복사하여 A에 붙여넣음. 단 n개 만큼 복사 후 붙여넣음

#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

int main(){
    char src[] = "HELLO";
    char dst[10];

    printf("%ld %ld\n", strlen(src), strlen(dst));
    strcpy(dst, src);
    printf("%ld %ld\n", strlen(src), strlen(dst));
    printf("%s\n", src);
    printf("%s\n", dst);

    char dst2[] = "123456789";
    char dst3[] = "123456789";
    printf("%ld %ld %ld\n", strlen(src), strlen(dst2), strlen(dst3));
    strncpy(dst2, src, strlen(src));    // copy HELLO
    strncpy(dst3, src, strlen(src)+1);  // copy HELLO\0
    printf("%ld %ld %ld\n", strlen(src), strlen(dst2), strlen(dst3));
    printf("%s\n", dst2);
    printf("%s\n", dst3);
}