#include "pch.h"
#include "my.h"
#include <cstdlib>
#include <cstdio>

BOOL check() {
	return 1;
}

void start(strptr inter_path, strptr file_path) {
    STARTUPINFO si = { sizeof(si) };
    PROCESS_INFORMATION pi;

    CreateProcess(
        inter_path,   // ���� � ������������ �����
        file_path,            // ��������� ������ (����� ������� ���������)
        NULL,            // �������� ������������ ��������
        NULL,            // �������� ������������ ������
        FALSE,           // ������������ ������������
        0,               // ����� ��������
        NULL,            // ���������
        NULL,            // ������� �������
        &si,             // STARTUPINFO
        &pi              // PROCESS_INFORMATION
    );

    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);
    fflush(stdout);
}