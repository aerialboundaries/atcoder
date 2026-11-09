/*
問題文
高橋君はデータの加工が行いたいです。

整数
a,b,cと、文字列
s が与えられます。
a+b+c の計算結果と、文字列
s を並べて表示しなさい。

制約
1≤a,b,c≤1,000
1≤∣s∣≤100
入力
入力は以下の形式で与えられる。

a
b c
s

出力
a+b+c と
s を空白区切りで
1 行に出力せよ。

入力例 1
Copy
1
2 3
test
出力例 1
Copy
6 test
1+2+3 は
6 なので、上記のように出力します。
入力例 2
Copy
72
128 256
myonmyon
出力例 2
Copy
456 myonmyon
72+128+256 は
456 なので、上記のように出力します。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

int main(void)
{
  int a, b, c;
  char s[N + 1];

  scanf("%d", &a);
  while (getchar() != '\n')
    ;
  scanf("%d %d", &b, &c);
  while (getchar() != '\n')
    ;
  if (a < 1 || a > 1000 || b < 1 || b > 1000 || c < 1 || c > 1000) {
    fprintf(stderr, "number not in range\n");
    exit(EXIT_FAILURE);
  }
  if (fgets(s, sizeof(s), stdin) != NULL) {
    s[strcspn(s, "\n")] = '\0';
  }
  printf("%d %s\n", a + b + c, s);

  return 0;
}
