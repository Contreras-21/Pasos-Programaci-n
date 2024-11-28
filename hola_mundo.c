void _start() {
    const char mensaje[] = "Hola Mundo\n";

    // Llamada al sistema operativo para escribir en la salida estándar
    __asm__ (
        "movl $4, %%eax;"       // Syscall número 4 (write)
        "movl $1, %%ebx;"       // File descriptor 1 (stdout)
        "movl %0, %%ecx;"       // Dirección del mensaje
        "movl $12, %%edx;"      // Longitud del mensaje
        "int $0x80;"            // Llamada al sistema operativo
        :
        : "r" (mensaje)         // Argumento: la dirección del mensaje
        : "%eax", "%ebx", "%ecx", "%edx"
    );

    // Llamada al sistema operativo para salir del programa
    __asm__ (
        "movl $1, %%eax;"       // Syscall número 1 (exit)
        "movl $0, %%ebx;"       // Código de salida 0
        "int $0x80;"            // Llamada al sistema operativo
        :
        :
        : "%eax", "%ebx"
    );
}
