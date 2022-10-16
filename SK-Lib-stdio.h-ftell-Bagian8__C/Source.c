#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
    Modified For Learn by RK
    I.D.E : VS2022
*/

FILE* stream;

int main() {
    long position;
    char list[100];

    if (fopen_s(&stream, "crt_ftell.c", "rb") == 0) {
        // Pindahkan penunjuk dengan membaca data
        fread(list, sizeof(char), 100, stream);
        // Dapatkan posisi setelah membaca:
        position = ftell(stream);
        printf("Position after trying to read 100 bytes: %ld\n", position);
        fclose(stream);
    }

    _getch();
    return 0;
}