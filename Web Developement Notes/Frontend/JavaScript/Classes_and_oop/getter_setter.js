class User {

    // Constructor runs automatically when an object is created
    constructor(email, password) {

        // Calls the email setter
        this.email = email;

        // Calls the password setter
        this.password = password;
    }

    // Getter for email
    // Executes when we access:
    // user.email
    get email() {

        // Return the stored email in uppercase
        return this._email.toUpperCase();
    }

    // Setter for email
    // Executes when we assign:
    // user.email = "abc@gmail.com"
    set email(value) {

        // Store the actual value in a different property
        // Using _email avoids infinite recursion and makes private property
        this._email = value;
    }

    // Getter for password
    get password() {

        // Return password in uppercase
        // and append "taniya"
        return `${this._password.toUpperCase()}taniya`;
    }

    // Setter for password
    set password(value) {

        // Store the password internally
        this._password = value;
    }
}


// Creating an object
const taniya = new User("h@taniya.ai", "213");


// Calls the getter
console.log(taniya.email);
// H@TANIYA.AI


// Calls the getter
console.log(taniya.password);
// 213taniya