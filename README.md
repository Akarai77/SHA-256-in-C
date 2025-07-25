## 🧠 What Is This?

This project implements the **SHA-256 cryptographic hash function** in C. It manually processes user input, handles padding, chunking, bit-level operations, and outputs a valid 64-character SHA-256 hash.

This is **not production-grade**, but it's a hell of a way to learn how SHA-256 actually works under the hood.

---

## 🔧 Features

* Manual **padding** of message (with `0x80` and zeroes)
* Appends 64-bit message length in bits at the end
* Splits input into 512-bit (64-byte) blocks
* Implements all 64 SHA-256 rounds
* Uses internal constants (`K`) and initial hash values (`H`)
* Fully dynamic memory allocation, no static limits
* Clean and consistent hashing output (hex string)

---

## 📦 File Breakdown

| File            | Purpose                                            |
| --------------- | -------------------------------------------------- |
| `main()`        | Orchestrates the hash dance — from input to output |
| `getMsg()`      | Reads user input from stdin                        |
| `padMsg()`      | Applies SHA-256 message padding                    |
| `intToBin()`    | Encodes message bit-length as 64-bit binary        |
| `getBlocks()`   | Splits padded message into 512-bit blocks          |
| `hash()`        | Core SHA-256 logic — main algorithm magic          |
| `rightRotate()` | Performs circular bit rotation                     |

---

## 📥 How to Use

### 🛠️ Compile:

```bash
gcc -o sha256 main.c
```

### 🚀 Run:

```bash
./sha256
```

You'll be prompted to enter a message. It returns the hashed message like:

```
Enter the message : This README was not written by ChatGPT
Hashed Message : 238989c14c163f7be85d7a2e8323a311b4aafac97753c4de3df7567a151c8e21
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

* **No input sanitation** — avoid piping raw binary or emojis for now
* Doesn’t handle Unicode or wide characters — ASCII bois only
* No endian-detection — assumes big-endian compliance during byte shifts
* Use only for learning or local experimentation. **Not crypto-secure**.

---

## 🧹 Memory Management

Yup. Every malloc has a corresponding free. Except your time. You’ll never get that back. 😤
But hey — no leaks. You’re clean, efficient, and mentally shredded now.

---

## 🤖 Why Reinvent the Wheel?

Because real devs don’t copy-paste OpenSSL — we **fight SHA-256 line-by-line**, like cavemen with pointers. 🪓

---

## 🦾 Future Enhancements (aka "when you're bored af")

* [ ] Add SHA-224, SHA-512 options
* [ ] Accept command-line input & files
* [ ] Benchmark vs OpenSSL
* [ ] Support for non-ASCII / UTF-8
* [ ] Unit tests for every internal function

---

## 🧨 License

Do whatever the hell you want. Steal it, fork it, break it. Just don’t blame me when the NSA knocks.
