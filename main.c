#include <stdio.h>

int main(void) {
    /* 課題0301: printfのカッコの中を記入して、変数iの中身を表示させてください */
    int i;           /*int型の名前がiの箱を作成*/
    scanf("%d",&i);  /*キーボードから入力された整数の読み込み(scanf)、iの箱に一時保存*/
    printf("%d",i);  /*iの箱に保存されてる数値を画面に表示(printf)*/
    return 0;        /*プログラムが正常に終了したことを報告*/
}
