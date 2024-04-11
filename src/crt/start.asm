; Declare external functions that will be used.
; Expected to be linked from external sources, such as the C runtime library.
extern main
extern exit
; External reference to the __libc_start_main function, which is used to
extern __libc_start_main   ; Initialize the C environment and call the main function.

section .text              ; Code resides in .text section

global _start              ; Declare the _start symbol as global, making it visible outside this file.
                           ; This is the entry point of the program, as recognized by the linker.

_start:                    ; Label indicating the entry point of the program.
    mov rdi, main          ; First argument (rdi) for __libc_start_main: pointer to the main function.
    call __libc_start_main ; Call __libc_start_main. This function will, in turn, call the main function
                           ; with appropriate arguments. It also handles program initialization and
                           ; termination.

    ; If __libc_start_main returns, use its return value as the exit status.
    mov rdi, rax           ; Move the return value of __libc_start_main (in rax) to rdi, the first
                           ; argument for the exit function.
    call exit              ; Call the exit function to terminate the program cleanly, using the status
                           ; code provided in rdi.

    hlt                    ; Halt instruction. This is generally not reached because the exit function
                           ; should terminate the program. It's here as a safety measure to halt the CPU
                           ; if execution ever gets past the exit call.
