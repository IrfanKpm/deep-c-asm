# 🧠 Computer Organization & Architecture 

## 📥 Basic Computer Flow


---

## 🧩 CPU (Central Processing Unit) Components

The CPU is the brain of the computer system. It processes instructions and performs computations. It has 3 main parts:

### 1. Control Unit (CU)
- Directs the operation of the processor.
- Fetches instructions from memory.
- Decodes instructions and manages control signals.
- Orchestrates the flow of data between CPU, memory, and I/O.

### 2. Execution Unit (EU)
- Executes instructions passed from the CU.
- Contains Arithmetic Logic Unit (ALU) and other functional units.
- Performs arithmetic and logical operations.

### 3. Registers
- Small, fast memory within the CPU.
- Temporarily stores data, addresses, and instructions during execution.
- Operates at processor speed.

### 4. Flags (Status Register / EFLAGS)
- Stores status of the CPU after operations.
- Includes condition flags, control flags, and system flags.
- Crucial for decision-making (branching, loops, etc.).

---

## 🧠 Intel 32-bit Architecture (IA-32)

The **IA-32** architecture (also called x86 32-bit) is a CISC (Complex Instruction Set Computer) architecture designed by Intel. It includes a set of general-purpose and special-purpose registers.

---

## 📦 IA-32 Register Types (32-bit)

### 🟩 1. General-Purpose Registers (GPRs)

| Register | Use | Notes |
|----------|-----|-------|
| **EAX**  | Accumulator | Arithmetic operations, return values |
| **EBX**  | Base        | Indexed addressing |
| **ECX**  | Counter     | Loop counters, shift/rotate counts |
| **EDX**  | Data        | I/O operations, extended arithmetic |

- `EAX`, `EBX`, `ECX`, `EDX` can be accessed as:
  - `AX`, `BX`, `CX`, `DX` (lower 16 bits)
  - `AH`, `AL`, etc. (8-bit halves of AX)

### 🟨 2. Index and Pointer Registers

| Register | Use |
|----------|-----|
| **ESI**  | Source Index (used in string operations) |
| **EDI**  | Destination Index (used in string operations) |
| **EBP**  | Base Pointer (used to access function parameters, stack frames) |
| **ESP**  | Stack Pointer (points to top of the stack) |

- `EBP` and `ESP` are heavily used in function calls and stack frames.

### 🟦 3. Segment Registers

| Register | Use |
|----------|-----|
| **CS** | Code Segment – points to the segment containing current instructions |
| **DS** | Data Segment – default for most data operations |
| **SS** | Stack Segment – used during stack operations |
| **ES, FS, GS** | Extra segments – used for string operations or OS-specific segments |

> ⚠️ Segment Registers are crucial in **Real Mode** or **Protected Mode** segmentation.

### 🟥 4. EIP – Instruction Pointer

- **EIP (Extended Instruction Pointer)** holds the address of the next instruction to execute.
- Modified automatically after each instruction fetch.
- Cannot be directly modified (only via jumps, calls, rets).

---

## 🚩 EFLAGS – Status Flags Register (32-bit)

The EFLAGS register contains various bit-flags that reflect the outcome of operations and control the CPU's behavior.

### 🔸 Common Flags

| Flag | Bit | Description |
|------|-----|-------------|
| **CF** | 0 | Carry Flag – Set if there's a carry/borrow in arithmetic ops |
| **PF** | 2 | Parity Flag – Set if result has even number of 1s |
| **AF** | 4 | Auxiliary Carry – Used in BCD operations |
| **ZF** | 6 | Zero Flag – Set if result is 0 |
| **SF** | 7 | Sign Flag – Set if result is negative |
| **OF** | 11 | Overflow Flag – Set if signed overflow occurs |

### 🔸 Control Flags

| Flag | Bit | Description |
|------|-----|-------------|
| **IF** | 9  | Interrupt Enable – Controls external interrupt handling |
| **DF** | 10 | Direction Flag – String ops increment/decrement |

---

## 🧬 Instruction Cycle in CPU

1. **Fetch**: CU fetches instruction from memory (EIP points to it).
2. **Decode**: CU decodes the instruction.
3. **Execute**: EU executes the operation (ALU used if arithmetic/logical).
4. **Memory Access**: If needed, loads/stores data.
5. **Write Back**: Result is written back to registers or memory.

---

## 🔁 Stack and Function Calls

- Stack grows **downward** (from high to low memory).
- `PUSH` and `POP` modify the `ESP` (stack pointer).
- `CALL` instruction:
  - Pushes return address (EIP) onto the stack.
  - Jumps to function.
- `RET`:
  - Pops return address from stack back to EIP.

---

## 🛠️ OS Dev Relevance

- Understanding **IA-32** and registers is crucial for:
  - Writing low-level code in Assembly
  - Bootloaders, Kernels (Real Mode → Protected Mode)
  - Interrupt handling
  - Context switching
  - Memory segmentation

---

## ✅ Summary

- The CPU is composed of Control Unit, Execution Unit, Registers, and Flags.
- IA-32 uses 32-bit registers and segmentation.
- Mastery of register usage and instruction cycle is foundational to OS-level and Assembly programming.

---

## 🔗 Navigation

- ⬅️ [Previous: Chapter 1 – Number System](./x86_note/chapter1.md)
- ➡️ [Next: Chapter 3 – IA-32 Stack, ESP, and Function Call Mechanism](./x86_note/chapter3.md)

