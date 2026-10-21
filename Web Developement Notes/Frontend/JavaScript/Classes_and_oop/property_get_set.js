function User(email, password) {
    this._email = email;
    this._password = password 

    Object.defineProperty(this, 'email',{
        get: function(){
            return this._email.toUpperCase()
        },
        set: function (value) {
            this.email = value
        }
    })
}

const taniya = new User("h@taniya.ai", "213");
console.log(taniya.email);
