# Steps to Create a React App

## 1. Prerequisites
- Install [Node.js](https://nodejs.org/) (LTS version) — this includes `npm`.
- Verify installation:
  ```bash
  node -v
  npm -v
  ```

## 2. Create the Project (create-react-app)
```bash
npx create-react-app my-app
```

## 3. Install Dependencies
This step is usually done automatically by `create-react-app`, but if needed:
```bash
cd my-app
npm install
```

## 4. Run the Development Server
```bash
npm start
```
Open the URL shown in the terminal (usually `http://localhost:3000`).

## 5. Project Structure
```
my-app/
├── public/
│   └── index.html
├── src/
│   ├── App.js
│   ├── App.css
│   ├── index.js
│   ├── index.css
│   └── assets/
├── package.json
└── README.md
```

## 6. Build Your App
- Edit `src/App.js` to change the main UI.
- Create new components in `src/components/`.
- Add styles via CSS files or a library (Tailwind, styled-components, etc.).

## 7. Add Routing (optional)
```bash
npm install react-router-dom
```

## 8. Add State Management (optional)
- Built-in: `useState`, `useReducer`, `useContext`
- External: `zustand`, `redux toolkit`

## 9. Testing (optional)
```bash
npm install -D vitest @testing-library/react
```

## 10. Build for Production
```bash
npm run build
```
Output goes to the `build/` folder.

## 11. Preview Production Build
CRA doesn't have a built-in preview command. You can use `serve`:
```bash
npm install -g serve
serve -s build
```

## 12. Deploy
- **Vercel**: `vercel deploy`
- **Netlify**: drag-and-drop `build/` folder or connect repo
- **GitHub Pages**: use `gh-pages` package

## Alternative: Vite (faster, worth learning next)
```bash
npm create vite@latest my-app -- --template react
cd my-app
npm install
npm run dev
```
> Note: `create-react-app` is no longer actively maintained. Once you're comfortable with React basics, Vite is a good next step — same React code, faster dev server and builds.

---

## Concepts & Reference

### What is a Component?
A component is just a JS function that returns JSX (what shows up on screen). Components let you break the UI into small, reusable pieces instead of one giant file.

```jsx
// src/components/Greeting.js
function Greeting({ name }) {
  return <h1>Hello, {name}!</h1>;
}
export default Greeting;
```

```jsx
// using it in App.js
import Greeting from './components/Greeting';

function App() {
  return <Greeting name="Taniya" />;
}
```

- Component names must start with a **capital letter** (so React can tell them apart from regular HTML tags like `<div>`).
- Data passed into a component is called **props** (short for properties) — `name="Taniya"` above is a prop.
- One component per file is the usual convention, matching the file name to the component name.

### What is a Fragment?
A component can only return **one** parent element. If you need to return multiple elements side by side without adding an extra `<div>` to the page, wrap them in a **Fragment**.

```jsx
// shorthand syntax
function Greeting() {
  return (
    <>
      <h1>Hello!</h1>
      <p>Welcome to the app.</p>
    </>
  );
}
```

```jsx
// explicit syntax (needed if you want to add a "key" prop, e.g. in a list)
import { Fragment } from 'react';

function Greeting() {
  return (
    <Fragment>
      <h1>Hello!</h1>
      <p>Welcome to the app.</p>
    </Fragment>
  );
}
```

- Fragments don't render any actual HTML element — they just group JSX without adding extra nodes to the DOM.
- Use the shorthand `<>...</>` most of the time; use `<Fragment key={...}>` only when mapping over a list and each item needs a unique key.

### Available Scripts (create-react-app)
Once your project is created, you can run these commands inside the project directory:

- `npm start` — Starts the development server.
- `npm run build` — Bundles the app into static files for production.
- `npm test` — Starts the test runner.
- `npm run eject` — Removes this tool and copies build dependencies, configuration files, and scripts into the app directory. **This is a one-way operation — once you eject, you can't go back!**

### What are external libraries ??
- Code that is outside of the computer.
- code that someone else wrote.

### What is react ?
React is a external library that helps us create website easier.

### Why Are There 2 External Libraries for React?
React itself only knows how to build a tree of components — it doesn't know how to actually put anything on screen. That's why you always need a second library alongside it:

- **React** — core logic (components, state, JSX handling)
- **ReactDOM** — takes what React built and renders it into the browser's DOM (for websites)
- **React Native** — takes what React built and renders it into native mobile UI (iOS/Android)

```html
<script src="https://unpkg.com/supersimpledev/react.js"></script>
<script src="https://unpkg.com/supersimpledev/react-dom.js"></script>
```

- Using React to create **websites** → load React & ReactDOM
- Using React to create **mobile apps** → load React & ReactNative

Same React code and concepts, different "renderer" depending on where you want it to end up. This is also why `create-react-app` installs both `react` and `react-dom` as separate packages in `package.json` — same idea as the two `<script>` tags above, just via npm instead of CDN links.

### What is Babel?
Browsers don't understand JSX (`<div>Hello</div>` inside JS) or newer JS syntax directly. **Babel** is a compiler that transforms this code into plain JavaScript that browsers can run.

- `create-react-app` and Vite both set up Babel (or a similar tool) for you automatically — you don't configure it by hand.
- If loading React via CDN `<script>` tags (no build step), you'd need to include Babel's standalone browser build too:
  ```html
  <script src="https://unpkg.com/@babel/standalone/babel.min.js"></script>
  <script type="text/babel" src="app.js"></script>
  ```
  The `type="text/babel"` tells Babel to compile that script before the browser runs it.
- In a real project (CRA/Vite), Babel runs during `npm start` / `npm run build`, not in the browser — so no extra `<script>` tags are needed.

### Minimum Amount of Code to Set Up React (CDN, no build tools)
This is the bare-minimum way to get React running in a plain HTML file — no `npm`, no `create-react-app`, no Vite. Good for quick experiments or understanding what's happening under the hood.



**Quick recap of the 4 script tags (order matters):**
1. `external-library.js` — course helper library
2. `react.js` — React core
3. `react-dom.js` — renders React output into the actual webpage
4. `babel.js` — lets the browser understand JSX inside `type="text/babel"` blocks
