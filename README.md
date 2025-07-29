## 🧠 What Is This?

This project implements the **SHA-256 cryptographic hash function** in C. It manually processes user input, handles padding, chunking, bit-level operations, and outputs a valid 64-character SHA-256 hash.

This ain’t your mama’s crypto library — it’s all handcrafted with love and blood. Now with proper **header file support** and a renamed `SHA256()` function for max API respect. 💪

---

## 🔧 Features

* Manual **padding** of message (with `0x80` and zeroes)
* Appends 64-bit message length in bits at the end
* Splits input into 512-bit (64-byte) blocks
* Implements all 64 SHA-256 rounds
* Uses internal constants (`K`) and initial hash values (`H`)
* Fully dynamic memory allocation, no static limits
* Clean and consistent hashing output (hex string)
* ✅ NEW: `sha256.h` header with `#pragma once` for safe inclusion
* ✅ NEW: Function renamed from `hash()` to `SHA256()` for clarity and modular use

---

## 📦 File Breakdown

| File            | Purpose                                            |
| --------------- | -------------------------------------------------- |
| `main.c`        | Entry point — feeds input to the SHA256 engine     |
| `sha256.h`      | Header file — declares `SHA256()` & hash length    |
| `sha256.c`      | Core SHA-256 implementation — actual hashing logic |
| `getMsg()`      | Reads user input from stdin                        |
| `padMsg()`      | Applies SHA-256 message padding                    |
| `intToBin()`    | Encodes message bit-length as 64-bit binary        |
| `getBlocks()`   | Splits padded message into 512-bit blocks          |
| `SHA256()`      | Core hashing logic — the meat grinder 🪓           |
| `rightRotate()` | Performs circular bit rotation                     |

---

## 📥 How to Use

### 🛠️ Compile:

```bash
gcc -o sha256 main.c sha256.c
```

### 🚀 Run:

```bash
./sha256
```

You'll be prompted to enter a message. It returns the hashed message like:
```
Enter the message : This README is not AI generated
Hashed Message : 76bb2a682777cd5345f5add67f7a93dec1ab1f9c9de9b147aa20b56982f9eb03
```

### 🧪 Sample Code (main.c):

```c
#include "sha256.h"
#include <stdio.h>

int main() {
    char hash[SHA256_HASH_STR_LEN];
    int status = SHA256("hello", hash);
    printf("%s\n", hash);
    return 0;
}
```

---

## 🔬 Example

### Input:

```
hello world
```

### Output:

```
b94d27b9934d3e08a52e52d7da7dabfadebca9f8a7f1be27c046d1b80f3ebea3
```

---

## ⚠️ Warnings

* **No input sanitation** — don't go feeding it emojis or binary trash
* ASCII only — it's not Unicode's birthday yet
* Endianness is assumed big-endian during shifts
* Still not crypto-secure — don’t secure your drug empire with it. 🧂

---

## 🧹 Memory Management

Every `malloc()` has a `free()`, unlike your situationships.
No leaks, no mess, just brutal bitwise discipline.

---

## 🤖 Why Reinvent the Wheel?

'Cause real hackers **don’t copy-paste OpenSSL** — they code SHA-256 from scratch like it's **freakin' 1972**. 🦖

---

## 🦾 Future Enhancements

* [ ] Add SHA-224, SHA-512 options
* [ ] Accept CLI input & files
* [ ] Benchmark vs OpenSSL (to flex)
* [ ] UTF-8 support for weirdos
* [ ] Unit tests so you stop crying during segfaults

---

## 🧨 License

Do whatever the hell you want. Fork it, ship it, carpet bomb it —
Just don’t @ me when you hash your grandma by mistake.

---
