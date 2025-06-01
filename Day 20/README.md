3
# System V Message Queue Communication in C

This project demonstrates interprocess communication (IPC) using **System V message queues** in C. It contains two approaches:

1. **Two-Process Communication** using separate `send.c` and `receive.c` files.
2. **Parent-Child Process Communication** using `fork()` within a single program.

All implementations use `ftok()` to generate a unique key based on a file path, ensuring safe and shared access to the message queue.

---

## 📂 Files

- `send.c` — Sends a message to a System V message queue.
- `receive.c` — Receives a message from the message queue and removes the queue.
- `parent_child.c` — Demonstrates communication between a parent and child process using a message queue.

---

## 📋 Requirements

- GCC compiler
- Unix-based environment (Linux server, WSL, or PuTTY)
- The dummy file must exist (e.g., `/home/2021ict36/myprogfile`)

---

## 🛠️ Compilation

```bash
gcc send.c -o send
gcc receive.c -o receive
gcc parent_child.c -o parent_child
```

---

## 🚀 Usage

### 🔁 1. Using `send` and `receive`

#### Step 1: Create the key file (if not exists)
```bash
touch /home/2021ict36/myprogfile
```

#### Step 2: Run sender
```bash
./send
```

#### Step 3: Run receiver (on another terminal or after sender)
```bash
./receive
```

### 👨‍👦 2. Using `parent_child` (single program)

```bash
./parent_child
```

You will be prompted to enter the user's name, registration number, and age. The child process will then print the received data.

---

## 🧪 Example Output

### Using `send` and `receive`
```
$ ./send
Write data: Hello from sender!
Data send is: Hello from sender!

$ ./receive
Data received is: Hello from sender!
```

### Using `parent_child`
```
Im Parent process ID: 4321
Enter name: Kosala
Enter RegNo: 2021ICT36
Enter age: 23

Im Child process Parent ID: 4321
Received name: Kosala
Received RegNo: 2021ICT36
Received age: 23
```

---

## 📌 Notes

- All programs use System V message queues (`<sys/msg.h>`).
- Message queue is removed after receiving in both examples.
- Ensure the path in `ftok()` matches your actual file location.
- Programs must run in the same Linux environment.

---