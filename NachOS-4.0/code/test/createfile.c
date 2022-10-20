#include "syscall.h"

int main(){
    char buffer[256];
    ReadString(buffer, 256);
    CreateFile(buffer);
    Halt();
}