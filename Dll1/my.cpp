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
        inter_path,   // Путь к исполняемому файлу
        file_path,            // Командная строка (можно указать параметры)
        NULL,            // Атрибуты безопасности процесса
        NULL,            // Атрибуты безопасности потока
        FALSE,           // Наследование дескрипторов
        0,               // Флаги создания
        NULL,            // Окружение
        NULL,            // Текущий каталог
        &si,             // STARTUPINFO
        &pi              // PROCESS_INFORMATION
    );

    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);
    fflush(stdout);
}