// Two types:
// stack (primitive):You get a copy, heap (non-primitive):You get the reference
//Stack vs Heap
// Stack
// Memory for: local variables, function calls, return addresses
// Managed: automatically by the compiler/runtime (push on function call, pop on return)
// Size: fixed, relatively small (typically a few MB)
// Speed: very fast (just moving a pointer)
// Lifetime: tied to the function's scope — freed automatically when the function returns
// Access pattern: LIFO (Last In, First Out)
// Failure mode: stack overflow (e.g., from deep/infinite recursion)
// Heap
// Memory for: dynamically allocated data (objects, arrays created at runtime)
// Managed: manually by the programmer (malloc/free in C, new/delete in C++) or by a garbage collector (Java, Python, JS)
// Size: large, limited mainly by available system memory
// Speed: slower (involves more bookkeeping — finding a free block, etc.)
// Lifetime: exists until explicitly freed or garbage collected — not tied to any function
// Access pattern: no fixed order, more like a free-floating pool
// Failure mode: memory leaks (if not freed) or heap fragmentation

let user = {
    email: "jnn@huv.jni",
    upi : "njnji@vhgjvh"
}

let userone = user //It only copies the reference/address to the same object in memory.

userone.email="nhi@jkb.njo"

console.log(user.email);
console.log(userone.email);
