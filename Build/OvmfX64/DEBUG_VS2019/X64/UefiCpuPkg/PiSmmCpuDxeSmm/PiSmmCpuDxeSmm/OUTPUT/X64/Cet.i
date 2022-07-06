;------------------------------------------------------------------------------ ;
; Copyright (c) 2019 - 2022, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;-------------------------------------------------------------------------------

;------------------------------------------------------------------------------
;
; Copyright (c) 2019 - 2022, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Abstract:
;
;   This file provides macro definitions for NASM files.
;
;------------------------------------------------------------------------------

;
; Macro for the PVALIDATE instruction, defined in AMD APM volume 3.
; NASM feature request URL: https://bugzilla.nasm.us/show_bug.cgi?id=3392753
;
%macro PVALIDATE       0
    DB 0xF2, 0x0F, 0x01, 0xFF
%endmacro

;
; Macro for the RMPADJUST instruction, defined in AMD APM volume 3.
; NASM feature request URL: https://bugzilla.nasm.us/show_bug.cgi?id=3392754
;
%macro RMPADJUST       0
    DB 0xF3, 0x0F, 0x01, 0xFE
%endmacro

; NASM provides built-in macros STRUC and ENDSTRUC for structure definition.
; For example, to define a structure called mytype containing a longword,
; a word, a byte and a string of bytes, you might code
;
; struc   mytype
;
;  mt_long:      resd    1
;  mt_word:      resw    1
;  mt_byte:      resb    1
;  mt_str:       resb    32
;
; endstruc
;
; Below macros are help to map the C types and the RESB family of pseudo-instructions.
; So that the above structure definition can be coded as
;
; struc   mytype
;
;  mt_long:      CTYPE_UINT32    1
;  mt_word:      CTYPE_UINT16    1
;  mt_byte:      CTYPE_UINT8     1
;  mt_str:       CTYPE_CHAR8     32
;
; endstruc
%define CTYPE_UINT64    resq
%define CTYPE_INT64     resq
%define CTYPE_UINT32    resd
%define CTYPE_INT32     resd
%define CTYPE_UINT16    resw
%define CTYPE_INT16     resw
%define CTYPE_BOOLEAN   resb
%define CTYPE_UINT8     resb
%define CTYPE_CHAR8     resb
%define CTYPE_INT8      resb

%define CTYPE_UINTN     resq
%define CTYPE_INTN      resq


DEFAULT REL
SECTION .text

global ASM_PFX(DisableCet)
ASM_PFX(DisableCet):

    ; Skip the pushed data for call
    mov     rax, 1
    incsspq rax

    mov     rax, cr4
    btr     eax, 23                      ; clear CET
    mov     cr4, rax
    ret

global ASM_PFX(EnableCet)
ASM_PFX(EnableCet):

    mov     rax, cr4
    bts     eax, 23                      ; set CET
    mov     cr4, rax

    ; use jmp to skip the check for ret
    pop     rax
    jmp     rax

