# Shared Memory Communication in C

This project demonstrates how to use **System V** and **POSIX** shared memory mechanisms for interprocess communication (IPC) in C on Linux. It includes three programs:

- `Day21Writer.c`: Writes user input to a shared memory segment.
- `Day21Reader.c`: Reads data from the shared memory segment.
- `Day21.c`: Demonstrates shared memory using `mmap()` and `fork()` for communication between a parent and child process.

---

## Files and Descriptions

### 1. `Day21Writer.c`
A writer program that:
- Creates a System V shared memory segment.
- Attaches to it.
- Takes user input and writes it to the shared memory.

### 2. `Day21Reader.c`
A reader program that:
- Attaches to the same shared memory segment.
- Reads the data written by the writer.
- Cleans up the shared memory segment after reading.

### 3. `Day21.c`
A standalone demonstration of:
- Using `mmap()` with `MAP_SHARED` and `MAP_ANONYMOUS`.
- Writing from a child process.
- Reading from a parent process.

---

## Compilation

```bash
gcc Day21Writer.c -o Day21Writer
gcc Day21Reader.c -o Day21Reader
gcc Day21.c -o Day21
```

---

## Usage

### System V Shared Memory Example

1. Run the writer in one terminal:
    ```bash
    ./Day21Writer
    ```
2. Run the reader in another terminal:
    ```bash
    ./Day21Reader
    ```

### POSIX Shared Memory Example (mmap)

Run the `Day21` program:
```bash
./Day21
```

---

## Notes

- Make sure the path used in `ftok()` (e.g., `/home/2021ict36/myprogfile`) exists, or change it to a valid file on your system.
- Both writer and reader must use the same key (`65`) and path to share memory correctly.

---

## Author

- **2021ICT36** (Assumed system user ID based on the code comment)
