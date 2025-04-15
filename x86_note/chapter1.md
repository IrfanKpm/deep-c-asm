# Chapter 1: Number System – x86 Assembly (Vikram Salunke)

## 📘 Overview

This chapter covers the different number systems used in computer architecture, especially in the context of x86 Assembly. Focus is on understanding Decimal, Binary, and Hexadecimal systems, including how to convert between them.

---

## 🔢 Number Systems

### 1. Decimal (Base 10)
- **Digits**: `0–9`
- **Place Value**: Powers of 10
- **Example**:  
  `456 = 4×10² + 5×10¹ + 6×10⁰ = 400 + 50 + 6`

---

### 2. Binary (Base 2)
- **Digits**: `0, 1`
- **Used by**: Computers internally
- **Place Value**: Powers of 2
- **Example**:  
  `1011 = 1×2³ + 0×2² + 1×2¹ + 1×2⁰ = 8 + 0 + 2 + 1 = 11`

---

### 3. Hexadecimal (Base 16)
- **Digits**: `0–9`, `A–F` (A=10, B=11, ..., F=15)
- **Used for**: Compact representation of binary
- **Example**:  
  `2F = 2×16¹ + 15×16⁰ = 32 + 15 = 47`

---

## 🔄 Conversions

### 🔸 Decimal ➡️ Binary
1. Divide the number by 2.
2. Record the remainder.
3. Repeat until quotient is 0.
4. Reverse the remainders.

**Example**:  

---

### 🔸 Binary ➡️ Decimal
Multiply each bit by powers of 2 (from right to left), then sum up.

**Example**:  
`1101 = 1×2³ + 1×2² + 0×2¹ + 1×2⁰ = 8 + 4 + 0 + 1 = 13`

---

### 🔸 Decimal ➡️ Hexadecimal
1. Divide the number by 16.
2. Record the remainders.
3. Reverse the result.

**Example**:  
`47 ÷ 16 = 2 R15 → Hex: 2F`

---

### 🔸 Hexadecimal ➡️ Decimal
Multiply each hex digit by powers of 16.

**Example**:  
`2F = 2×16 + 15 = 32 + 15 = 47`

---

### 🔸 Binary ➡️ Hexadecimal
1. Group binary digits into 4-bit chunks from right.
2. Convert each group to a hex digit.

**Example**:  
`10101100 → 1010 1100 → A C → Hex: AC`

---

### 🔸 Hexadecimal ➡️ Binary
Convert each hex digit to 4-bit binary.

**Example**:  
`AC → A = 1010, C = 1100 → Binary: 10101100`

---

## 📌 Notes
- Binary is fundamental to how computers store and process data.
- Hex is used for debugging, memory addresses, and compact binary representation.

---

## 🔗 Navigation

- ➡️ [Next: Chapter 2 – Computer Organization & Architecture](./x86_note/chapter2.md)
