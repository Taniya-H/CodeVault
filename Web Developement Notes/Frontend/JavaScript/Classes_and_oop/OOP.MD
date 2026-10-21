# JavaScript and Classes — Beginner's Guide to OOP

---

## What is OOP (Object-Oriented Programming)?

OOP is a **style of writing code** where you organize everything around "objects" — just like in real life, where the world is made up of things (a car, a person, a bank account) that have properties and can do things.

Instead of writing a long list of instructions, OOP lets you group related data and behaviour together in a neat, reusable package.

---

## What is an Object Literal ?

An **object** is a collection of related **properties** (data) and **methods** (actions/functions).

Think of a real-world example — a **dog**:
- Properties: name, breed, age
- Methods: bark(), eat(), sleep()

In JavaScript, that looks like this:

```js
const dog = {
  name: "Bruno",
  breed: "Labrador",
  age: 3,
  bark: function () {
    console.log("Woof!");
  },
};

dog.bark(); // Output: Woof!
```

> 💡 `toLowerCase()` is a built-in **method** on strings — it's literally an action you call on a string object. This is OOP already happening behind the scenes in JavaScript!

---

## Why Use OOP?

Without OOP, if you needed to represent 100 students, you'd write 100 separate blocks of messy, repeated code. OOP solves this by letting you define a "blueprint" once and reuse it.

Here's why OOP is worth learning:

- **Organises code** — related things stay together, making it easier to read
- **Reduces repetition** — write once, reuse many times
- **Easier to maintain** — fixing a bug in one place fixes it everywhere
- **Models the real world** — thinking in objects feels natural

---

## Parts of OOP in JavaScript

### 1. Object Literals

The simplest way to create an object — you just write it out directly using `{}`.

```js
const person = {
  name: "Riya",
  age: 20,
  greet: function () {
    console.log("Hi, I'm " + this.name);
  },
};

person.greet(); // Output: Hi, I'm Riya
```

**Limitation:** If you need 50 people, you'd have to copy-paste this 50 times. That's where constructor functions and classes come in.

---

### 2. Constructor Functions

A **constructor function** is a regular function used as a blueprint to create multiple objects of the same type.

```js
function Person(name, age) {
  this.name = name;
  this.age = age;
  this.greet = function () {
    console.log("Hi, I'm " + this.name);
  };
}

const person1 = new Person("Riya", 20);
const person2 = new Person("Arjun", 22);

person1.greet(); // Hi, I'm Riya
person2.greet(); // Hi, I'm Arjun
```

> 💡 The `new` keyword creates a brand new object from the blueprint. The `this` keyword refers to *that specific new object* being created.

---

### 3. Prototypes

Every JavaScript object has a hidden link to another object called its **prototype**. This is how objects *share* methods without each one storing their own copy.

```js
// Instead of defining greet inside the constructor (wasteful),
// add it to the prototype so all Person objects share ONE copy:

Person.prototype.greet = function () {
  console.log("Hi, I'm " + this.name);
};
```

Think of it like a shared instruction manual — all objects refer to the same manual instead of each carrying their own copy. This saves memory.

---

### 4. Classes

**Classes** are the modern, cleaner way to write constructor functions + prototypes. Introduced in ES6 (2015), they make OOP in JavaScript look much more like other languages.

```js
class Person {
  constructor(name, age) {
    this.name = name;
    this.age = age;
  }

  greet() {
    console.log("Hi, I'm " + this.name);
  }
}

const person1 = new Person("Riya", 20);
person1.greet(); // Hi, I'm Riya
```

> 💡 Under the hood, `class` still uses prototypes — it's just nicer syntax (called "syntactic sugar").

---

### 5. Instances (`new` and `this`)

- An **instance** is an individual object created from a class or constructor function.
- `new` creates the instance.
- `this` refers to the specific instance being worked on.

```js
const person1 = new Person("Riya", 20);  // person1 is an instance
const person2 = new Person("Arjun", 22); // person2 is a different instance
```

Each instance has its own data (`name`, `age`) but shares the same methods (`greet`).

---

## The 4 Pillars of OOP

These are the four core principles that make OOP powerful.

---

### 1. Abstraction

**"Hide the complexity, show only what's needed."**

When you call `person.greet()`, you don't need to know *how* it works internally — you just use it. The inner workings are hidden (abstracted) away.

Real-life analogy: When you press a button on a TV remote, you don't need to understand the electronics inside. You just press and it works.

```js
class BankAccount {
  #balance = 0; // hidden from outside

  deposit(amount) {
    this.#balance += amount; // internal logic is abstracted
  }

  getBalance() {
    return this.#balance; // controlled access
  }
}
```

---

### 2. Encapsulation

**"Bundle data and methods together, and protect the data."**

Encapsulation means keeping an object's internal data private and only exposing it through controlled methods. This prevents accidental (or malicious) changes.

```js
class BankAccount {
  #balance = 1000; // # makes it private

  withdraw(amount) {
    if (amount > this.#balance) {
      console.log("Insufficient funds!");
    } else {
      this.#balance -= amount;
    }
  }
}

const acc = new BankAccount();
acc.withdraw(200);    // Works fine
console.log(acc.#balance); // ❌ Error — can't access private data directly
```

---

### 3. Inheritance

**"A child class can reuse and extend a parent class."**

Instead of rewriting shared code, a child class can *inherit* properties and methods from a parent class, and then add its own.

```js
class Animal {
  constructor(name) {
    this.name = name;
  }

  speak() {
    console.log(this.name + " makes a sound.");
  }
}

class Dog extends Animal { // Dog inherits from Animal
  speak() {
    console.log(this.name + " barks.");
  }
}

const d = new Dog("Bruno");
d.speak(); // Bruno barks.
```

> 💡 `extends` sets up inheritance. `super()` calls the parent class's constructor.

---

### 4. Polymorphism

**"Same method name, different behaviour depending on the object."**

Poly = many, morph = forms. The same method can behave differently in different classes.

```js
class Shape {
  area() {
    return 0;
  }
}

class Circle extends Shape {
  constructor(r) { super(); this.r = r; }
  area() { return Math.PI * this.r * this.r; } // different behaviour
}

class Square extends Shape {
  constructor(s) { super(); this.s = s; }
  area() { return this.s * this.s; } // different behaviour
}

const shapes = [new Circle(5), new Square(4)];
shapes.forEach(shape => console.log(shape.area()));
// 78.53...
// 16
```

Both `Circle` and `Square` have an `area()` method, but each does something different — that's polymorphism.

---

## Quick Summary

| Concept | One-line description |
|---|---|
| **Object** | A bundle of related data (properties) and actions (methods) |
| **Object Literal** | The simplest way to write a single object using `{}` |
| **Constructor Function** | An old-style blueprint to create multiple objects |
| **Prototype** | A shared object that other objects inherit methods from |
| **Class** | Modern, clean syntax for creating object blueprints |
| **Instance** | An individual object created from a class using `new` |
| **Abstraction** | Hide complexity, expose only what's needed |
| **Encapsulation** | Keep data protected inside the object |
| **Inheritance** | Child classes reuse and extend parent class features |
| **Polymorphism** | Same method name, different behaviour per class |