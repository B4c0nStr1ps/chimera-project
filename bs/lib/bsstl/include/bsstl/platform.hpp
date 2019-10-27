//
// Created by b4c0nstr1ps on 27/10/19.
//

#ifndef CHIMERA_PLATFORM_HPP
#define CHIMERA_PLATFORM_HPP

#ifdef _MSC_VER

#define debug_break __debugbreak

#else

#ifdef __cplusplus
extern "C" {
#endif

#define DEBUG_BREAK_USE_TRAP_INSTRUCTION 1
#define DEBUG_BREAK_USE_BULTIN_TRAP      2
#define DEBUG_BREAK_USE_SIGTRAP          3

#if defined(__i386__) || defined(__x86_64__)
__inline__ static void trap_instruction(void)
{
    __asm__ volatile("int $0x03");
}
__attribute__((gnu_inline, always_inline))
__inline__ static void debug_break(void)
{
    trap_instruction();
}

#else
#error "Platform not supported!"

#endif

#ifdef __cplusplus
}
#endif

#endif /* ifdef _MSC_VER */

#endif //CHIMERA_PLATFORM_HPP
