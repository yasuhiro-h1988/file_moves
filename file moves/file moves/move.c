#include <stdio.h>
#include <Windows.h>

/*
    �t�@�C�����ړ�����B

    srcPath:  �ړ����t�@�C���̃p�X
    destPath: �ړ���t�@�C���̃p�X
    �߂�l:   ���������� 0�ȊO�A���s������ 0
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
            puts("�ړ����܂����B");
        }
        else {
            puts("�ړ��Ɏ��s���܂����B");
        }
    }
}