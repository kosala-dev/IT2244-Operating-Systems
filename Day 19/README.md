# Message Queues in C

This project demonstrates **Inter-Process Communication (IPC)** in C using **System V message queues**. It includes two programs:
- `send`: Sends a message to a message queue.
- `receive`: Receives the message from the message queue.

## Files

- `send.c` – Sends a user-input message to the queue.
- `receive.c` – Receives the message from the queue and displays it.

## How It Works

1. Both sender and receiver use `ftok()` with a common file (e.g., `"progfile"`) and project ID to generate a shared key.
2. The `send` program:
   - Creates or accesses the message queue using `msgget()`.
   - Accepts input from the user and sends it using `msgsnd()`.
3. The `receive` program:
   - Accesses the message queue using the same key.
   - Receives the message using `msgrcv()`.
   - Deletes the queue using `msgctl()`.

### Compile

```bash
gcc send.c -o send
gcc receive.c -o receive
