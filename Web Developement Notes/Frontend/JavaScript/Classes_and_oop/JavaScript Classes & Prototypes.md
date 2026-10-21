# JavaScript Classes & Prototypes

## JavaScript Classes

* JavaScript introduced the **`class`** keyword in **ECMAScript 2015 (ES6)**.
* The `class` keyword provides a cleaner and more familiar syntax for creating objects and implementing inheritance.
* Unlike Java or C++, JavaScript is **not a truly class-based language**.

---

## Before ES6

Before ES6, objects were created using **constructor functions** and **prototypes**.

```javascript
function Person(name) {
    this.name = name;
}

Person.prototype.sayHello = function () {
    console.log("Hello");
};

const p1 = new Person("Taniya");
```

---

## After ES6

The same code can be written using the `class` syntax.

```javascript
class Person {
    constructor(name) {
        this.name = name;
    }

    sayHello() {
        console.log("Hello");
    }
}

const p1 = new Person("Taniya");
```

The `class` syntax is easier to read and write but behaves similarly under the hood.

---

# What is Syntactic Sugar?

**Definition:**

> **Syntactic sugar** is syntax that makes code easier to read and write **without changing how it works internally.**

Example:

```javascript
class Person {}
```

is conceptually similar to:

```javascript
function Person() {}
```

The `class` keyword is simply a cleaner syntax over JavaScript's prototype system.

---

# Prototype-Based Language

JavaScript is a **prototype-based language**, meaning objects inherit properties and methods from **other objects (their prototypes)** instead of classes.

When a class is created, JavaScript internally stores its methods on the class's **prototype**.

Example:

```javascript
class Person {
    sayHello() {
        console.log("Hello");
    }
}
```

Internally:

```javascript
Person.prototype.sayHello = function () {};
```

---

# Prototype Lookup

When a method is called:

```javascript
const p = new Person();
p.sayHello();
```

JavaScript searches in this order:

```text
p
↓
Does p have sayHello()? ❌
↓
Person.prototype
↓
Found it ✅
```

This lookup process is called the **Prototype Chain**.

---

# Prototype Chain

Every JavaScript object has a hidden reference (`[[Prototype]]`) to another object.

If a property or method is not found on the object itself, JavaScript searches its prototype, then that prototype's prototype, and so on until it reaches `Object.prototype`.

```text
Object
   ↓
Prototype
   ↓
Another Prototype
   ↓
Object.prototype
```

---

# Java vs JavaScript

### Java (Class-Based)

```text
Class
   ↓
Object
```

Objects are created from classes.

### JavaScript (Prototype-Based)

```text
Object
   ↓
Prototype
   ↓
Another Prototype
   ↓
Object.prototype
```

Objects inherit directly from other objects through the prototype chain.

---

# Key Points

* ES6 introduced the `class` keyword.
* JavaScript remains a **prototype-based** language.
* `class` is **syntactic sugar** over prototypes.
* Methods defined inside a class are stored on `ClassName.prototype`.
* Objects inherit methods through the **prototype chain**, not through a true class-based inheritance system.
