# Chapter 2: IA-32 Architecture (32-bit Intel Architecture)

This chapter explains how the CPU is structured internally and introduces registers, which are fast memory locations inside the CPU.

---

## 🧠 What is IA-32?

- IA-32 stands for **Intel Architecture, 32-bit**.
- It’s the standard for **32-bit processors** like Intel Pentium.
- It defines:
  - Instruction set
  - CPU registers
  - Memory addressing
  - Stack behavior
  - Calling conventions

---

## 🧹 CPU Sections in IA-32

1. **Control Unit (CU)** – Decodes instructions.
2. **Execution Unit (EU)** – Performs arithmetic/logical operations.
3. **Registers** – Temporary data holders.
4. **Flags Register (EFLAGS)** – Stores status like zero, carry, etc.

---

## 📀 What Are Registers?

Registers are **fast internal storage** inside the CPU. Each one is 32-bit wide in IA-32.

---

## 🏷️ List of General Purpose Registers (GPRs)

| Register | Purpose |
|----------|---------|
| `EAX`    | Accumulator – for arithmetic results, function return |
| `EBX`    | Base register – often used as pointer |
| `ECX`    | Counter – used in loops, shifts |
| `EDX`    | Data register – I/O, extended precision |
| `ESI`    | Source index – used in string operations |
| `EDI`    | Destination index – also for strings |
| `EBP`    | Base Pointer – points to base of current stack frame |
| `ESP`    | Stack Pointer – always points to top of stack |

---

## 🔀 GPRs in Different Widths

- `EAX` → 32-bit
- `AX` → lower 16-bit of `EAX`
- `AH` / `AL` → high/low 8-bit of `AX`

```
EAX = |--------32-bit--------|
AX  = |----16-bit----|
AH  = |8-bit| AL = |8-bit|
```

---

## 🧰 Special Registers (used heavily in functions)

### 1. `ESP` – Extended Stack Pointer
- Points to the **top of the stack** (grows downward).
- Auto-updated by `push`, `pop`, `call`, and `ret`.

### 2. `EBP` – Extended Base Pointer
- Used to **reference function arguments** and local variables.
- Doesn't change during function execution.

---

## 📌 Instruction Examples

```asm
push eax   ; saves EAX to stack (ESP -= 4)
pop ebx    ; restores top of stack into EBX (ESP += 4)

mov eax, [ebp+8]   ; get function argument
mov [ebp-4], eax   ; store to local variable
```

---

## 🧪 Typical Function Setup

```asm
push ebp          ; save old base pointer
mov ebp, esp      ; set up new base pointer
sub esp, 4        ; allocate 4 bytes for local var

mov eax, [ebp+8]  ; read first argument
add eax, [ebp+12] ; add second argument
mov [ebp-4], eax  ; store result to local var

mov eax, [ebp-4]  ; move result to EAX (return value)

mov esp, ebp      ; clean up
pop ebp           ; restore caller's EBP
ret               ; return, EAX contains result
```

---

## 🧠 Quick Recap: When You Learn These Names

| Concept        | Register | Purpose                               |
|----------------|----------|---------------------------------------|
| Data storage   | `EAX`    | Result of functions, calculations     |
| Stack ops      | `ESP`    | Always points to stack top            |
| Function calls | `EBP`    | Keeps fixed frame, access args/locals |
| Loops/shifts   | `ECX`    | Used as counter                       |

---



