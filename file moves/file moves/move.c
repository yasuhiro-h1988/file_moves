#include <stdio.h>
#include <Windows.h>

/*
    ファイルを移動する。

    srcPath:  移動元ファイルのパス
    destPath: 移動先ファイルのパス
    戻り値:   成功したら 0以外、失敗したら 0
*/
int moveFile(const char* srcPath, const char* destPath)
{
    return MoveFileA(srcPath, destPath);
}

int main(void)
{
    int x;
    char* namae[2] = { "File1","File2"};
    char filepathA[256];
    char filepathB[256];

    for (x = 0; x < 2; x++) {
        sprintf(filepathA, "../TEXT/%s.txt", namae[x]);
        sprintf(filepathB, "../TEXT2/%s.txt", namae[x]);
        if (moveFile(filepathA, filepathB)) {
            puts("移動しました。");
        }
        else {
            puts("移動に失敗しました。");
        }
    }
}